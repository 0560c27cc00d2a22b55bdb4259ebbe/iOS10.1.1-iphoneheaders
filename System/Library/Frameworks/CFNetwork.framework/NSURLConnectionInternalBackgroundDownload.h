/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLConnectionInternal.h>
#import <libobjc.A.dylib/NSURLConnectionRequired.h>
#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSDownloadHandlerDelegate.h>

@class NSMutableArray, NSCountedSet, SSDownloadHandler, NSAsyncSSDownloadManager, NSTimer, NSString;

@interface NSURLConnectionInternalBackgroundDownload : NSURLConnectionInternal <NSURLConnectionRequired, SSDownloadManagerObserver, SSDownloadHandlerDelegate> {

	CFRunLoopSourceRef _source;
	NSMutableArray* _pendingOps;
	NSCountedSet* _runloops;
	SSDownloadHandler* _handler;
	NSAsyncSSDownloadManager* _manager;
	long long _downloadIdent;
	long long _ctLast;
	BOOL _terminated;
	NSTimer* _deferredStartTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDownloadManagerForMediaKind:(id)arg1 persistenceIdentifier:(id)arg2 ;
+(void)_enableLogging;
-(id)initWithInfo:(const InternalInit*)arg1 ;
-(void)_updateDownloadState:(id)arg1 ;
-(void)_invokeInvocation:(id)arg1 withConnection:(id)arg2 ;
-(void)_preTerminalInvocation:(id)arg1 ;
-(void)_postTerminalInvocation:(id)arg1 ;
-(void)_sendTerminalErrorToDelegate:(id)arg1 ;
-(void)setHandlerForDownload:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_managerFailedToStartInTime;
-(void)_createNewDownload;
-(void)_updateClientWithCurrentWrites:(id)arg1 ;
-(void)_sendTerminalDidFinishToDelegate:(id)arg1 ;
-(void)invokeForDelegate:(/*^block*/id)arg1 ;
-(void)_sourcePerform;
-(long long)_getDownloadIdent;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(NSString *)description;
-(void)start;
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2 ;
-(void)setDelegateQueue:(id)arg1 ;
-(void)_invalidate;
-(void)cancelAuthenticationChallenge:(id)arg1 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1 ;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1 ;
-(void)downloadHandlerDidDisconnect:(id)arg1 ;
-(void)downloadHandler:(id)arg1 cancelSession:(id)arg2 ;
-(BOOL)downloadHandler:(id)arg1 pauseSession:(id)arg2 ;
-(void)downloadHandler:(id)arg1 handleAuthenticationSession:(id)arg2 ;
@end

