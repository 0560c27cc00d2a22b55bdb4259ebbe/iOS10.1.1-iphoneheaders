/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NSFileAccessArbiterXPCInterface.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSXPCListener, NSMutableDictionary, NSFileAccessNode, NSXPCConnection, NSString;

@interface NSFileAccessArbiter : NSObject <NSXPCListenerDelegate, NSFileAccessArbiterXPCInterface> {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCListener* _listenerConnection;
	BOOL _isStopped;
	BOOL _isSubarbiter;
	NSMutableDictionary* _accessClaimsByID;
	NSMutableDictionary* _subarbitrationClaimsByID;
	NSMutableDictionary* _reactorsByID;
	NSFileAccessNode* _rootNode;
	NSXPCConnection* _superarbitrationServer;
	NSObject*<OS_dispatch_source> _debugSignalSource;

}

@property (readonly) NSXPCConnection * superarbitrationConnection; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_registerForTokenChangeNotificationsWithQueue:(id)arg1 ;
+(void)_gainedBirdProviderFromClient:(id)arg1 ;
+(void)_lostBirdProviderFromClient:(id)arg1 ;
+(void)_wakeUpBirdWithUID:(unsigned)arg1 queue:(id)arg2 thenContinue:(/*^block*/id)arg3 ;
+(void)ensureProvidersIfNecessaryForClaim:(id)arg1 readingAtLocation:(id)arg2 queue:(id)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)_registerForDebugInfoRequests;
-(void)_handleCanceledClient:(id)arg1 ;
-(oneway void)revokeAccessClaimForID:(id)arg1 ;
-(void)_grantAccessClaim:(id)arg1 ;
-(void)_writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMoveItemAtURL:(id)arg2 toURL:(id)arg3 ;
-(void)_enumerateSubarbitersUsingBlock:(/*^block*/id)arg1 ;
-(void)_willRemoveReactor:(id)arg1 ;
-(void)_grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 ;
-(BOOL)_addPresenter:(id)arg1 ofItemAtURL:(id)arg2 watchingFile:(BOOL)arg3 withLastEventID:(id)arg4 ;
-(void)_removeReactorForID:(id)arg1 ;
-(oneway void)removePresenterWithID:(id)arg1 ;
-(BOOL)_addProvider:(id)arg1 ofItemsAtURL:(id)arg2 ;
-(oneway void)removeProviderWithID:(id)arg1 uniqueID:(id)arg2 ;
-(void)_startArbitratingItemsAtURLs:(id)arg1 withSuperarbitrationServer:(id)arg2 ;
-(void)getDebugInformationIncludingEverything:(BOOL)arg1 withString:(id)arg2 fromPid:(int)arg3 thenContinue:(/*^block*/id)arg4 ;
-(void)provideSubarbiterDebugInfoIncludingEverything:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_revokeAccessClaimForID:(id)arg1 fromLocal:(BOOL)arg2 ;
-(oneway void)cancelAccessClaimForID:(id)arg1 ;
-(oneway void)tiePresenterForID:(id)arg1 toItemAtURL:(id)arg2 ;
-(void)grantAccessClaim:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(void)addPresenter:(id)arg1 withID:(id)arg2 fileURL:(id)arg3 lastPresentedItemEventIdentifier:(id)arg4 options:(unsigned long long)arg5 responses:(unsigned long long)arg6 ;
-(void)addProvider:(id)arg1 withID:(id)arg2 uniqueID:(id)arg3 forProvidedItemsURL:(id)arg4 options:(unsigned long long)arg5 withServer:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)grantSubarbitrationClaim:(id)arg1 withServer:(id)arg2 reply:(/*^block*/id)arg3 ;
-(oneway void)prepareToArbitrateForURLs:(id)arg1 ;
-(void)startArbitratingWithReply:(/*^block*/id)arg1 ;
-(void)provideDebugInfoWithLocalInfo:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)performBarrierWithCompletionHandler:(/*^block*/id)arg1 ;
-(oneway void)revokeSubarbitrationClaimForID:(id)arg1 ;
-(oneway void)writerWithPurposeID:(id)arg1 didDisconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didReconnectItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeUbiquityOfItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didMakeItemDisappearAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didChangeItemAtURL:(id)arg2 ;
-(oneway void)writerWithPurposeID:(id)arg1 didVersionChangeOfKind:(id)arg2 toItemAtURL:(id)arg3 withClientID:(id)arg4 name:(id)arg5 ;
-(id)initWithQueue:(id)arg1 isSubarbiter:(BOOL)arg2 listener:(id)arg3 ;
-(void)stopArbitrating;
-(NSXPCConnection *)superarbitrationConnection;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)rootNode;
@end

