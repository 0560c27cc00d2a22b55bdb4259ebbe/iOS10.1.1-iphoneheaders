/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCProxyCreating.h>

@protocol NSFilePresenterXPCInterfaceNSXPCProxyCreating;
@class NSObject, NSFileAccessProcessManager;

@interface NSFilePresenterManagedProxy : NSObject <NSXPCProxyCreating> {

	unsigned long long _filePresenterResponses;
	NSObject*<NSFilePresenterXPCInterface>*<NSXPCProxyCreating> _xpcProxy;
	NSObject*<NSFilePresenterXPCInterface>*<NSXPCProxyCreating> _nonboostingXPCProxy;
	NSFileAccessProcessManager* _processManager;
	/*^block*/id _errorHandler;

}

@property (assign) unsigned long long filePresenterResponses;                //@synthesize filePresenterResponses=_filePresenterResponses - In the implementation block
@property (retain) NSFileAccessProcessManager * processManager;              //@synthesize processManager=_processManager - In the implementation block
@property (copy) id errorHandler;                                            //@synthesize errorHandler=_errorHandler - In the implementation block
-(void)setFilePresenterResponses:(unsigned long long)arg1 ;
-(void)collectDebuggingInformationWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)relinquishToReadingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)relinquishToWritingClaimWithID:(id)arg1 options:(unsigned long long)arg2 purposeID:(id)arg3 subitemURL:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)reacquireFromWritingClaimForID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)saveChangesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)accommodateDeletionOfSubitemAtURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithXPCProxy:(id)arg1 ;
-(void)setProcessManager:(NSFileAccessProcessManager *)arg1 ;
-(unsigned long long)filePresenterResponses;
-(BOOL)_presenterRespondsToSelector:(SEL)arg1 ;
-(void)_safelySendMessageWithSelector:(SEL)arg1 withErrorCompletionHandler:(/*^block*/id)arg2 sender:(/*^block*/id)arg3 ;
-(NSFileAccessProcessManager *)processManager;
-(void)dealloc;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)remoteObjectProxy;
-(id)errorHandler;
-(void)setErrorHandler:(id)arg1 ;
@end

