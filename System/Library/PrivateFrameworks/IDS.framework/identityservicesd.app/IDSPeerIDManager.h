/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FTMessageDelivery_DualMode, FTMessageDelivery, IDSPushHandler, NSMutableArray, NSMutableDictionary, NSRecursiveLock, IMTimer;

@interface IDSPeerIDManager : NSObject {

	FTMessageDelivery_DualMode* _dualInterfaceidQueryMessageDelivery;
	FTMessageDelivery* _idQueryMessageDelivery;
	IDSPushHandler* _pushHandler;
	NSMutableArray* _queryQueue;
	NSMutableDictionary* _peerMap;
	NSMutableDictionary* _completionBlocksToURIsMap;
	NSMutableDictionary* _extraCompletionBlocks;
	NSMutableDictionary* _clientDataUpdateBlocks;
	NSMutableDictionary* _purgeClientDataBlocks;
	NSMutableDictionary* _disasterModeTokens;
	NSRecursiveLock* _lock;
	/*^block*/id _saveEnqueueBlock;
	IMTimer* _saveTimer;
	BOOL _isInServerBackoffMode;
	BOOL _loaded;

}
+(double)timeToCacheNegativeResultsForService:(id)arg1 ;
+(double)timeToCacheUnknownResultsForService:(id)arg1 ;
+(BOOL)isServerBackoffModeActive;
+(BOOL)_datePassed:(id)arg1 ;
+(BOOL)shouldUseSelfTokens;
+(id)timeToCacheKnownResults:(id)arg1 ;
+(BOOL)isQueryRetryForBadSignatureEnabled;
+(int)serverBackoffModeMaxSenderRetries;
+(int)queryRetryNumberForBadSignature;
+(double)queryRetryIntervalForBadSignature;
+(int)serverBackoffModeReceiverRetryInterval;
+(id)sharedInstance;
-(BOOL)_isUnderFirstDataProtectionLock;
-(id)sessionTokenForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 expirationDate:(id*)arg5 refreshDate:(id*)arg6 fromIdentity:(id)arg7 includeSelfDevice:(BOOL)arg8 ;
-(void)forgetPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(BOOL)startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 forSending:(BOOL)arg5 forRefresh:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)addCompletionBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removeCompletionBlockForToken:(id)arg1 ;
-(BOOL)hasProperty:(id)arg1 forURI:(id)arg2 pushToken:(id)arg3 fromURI:(id)arg4 service:(id)arg5 ;
-(id)sessionTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fromIdentity:(id)arg4 includeSelfDevice:(BOOL)arg5 fullyRemoveSelfDevice:(BOOL)arg6 ;
-(BOOL)hasPeerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)activeURIsFromURI:(id)arg1 service:(id)arg2 ;
-(void)addPurgeClientDataBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removePurgeClientDataBlockForToken:(id)arg1 ;
-(double)timeToCacheURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 forStatus:(unsigned)arg4 ;
-(void)addClientDataUpdateBlock:(/*^block*/id)arg1 forToken:(id)arg2 ;
-(void)removeClientDataUpdateBlockForToken:(id)arg1 ;
-(id)initWithMessageDelivery:(id)arg1 dualMessageDelivery:(id)arg2 ;
-(void)_bagLoaded:(id)arg1 ;
-(id)_existingPeerMapFromURI:(id)arg1 service:(id)arg2 ;
-(void)forgetSessionTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)_peerMapFromURI:(id)arg1 service:(id)arg2 ;
-(void)_purgeMapFromURI:(id)arg1 service:(id)arg2 ;
-(void)_setDisasterModeToken:(id)arg1 forURI:(id)arg2 ;
-(BOOL)_uriHasAllSessionTokensValid:(id)arg1 inPeerMap:(id)arg2 ;
-(id)_peerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ignoreExpiration:(BOOL)arg4 ;
-(id)_peerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)peerTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 fullyRemoveSelf:(BOOL)arg4 ;
-(id)_sessionTokenForURI:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 expirationDate:(id*)arg5 refreshDate:(id*)arg6 fromIdentity:(id)arg7 ;
-(void)forgetSessionTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)_disasterModeTokenForURI:(id)arg1 ;
-(id)_earliestExpirationDateForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(void)_dequeuePendingQueryIfPossible;
-(BOOL)hasPeerTokensForURIs:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(id)_completionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(void)_removeCompletionBlocksForURIs:(id)arg1 fromURI:(id)arg2 fromService:(id)arg3 ;
-(BOOL)_shouldForceCelluarQueries;
-(BOOL)_setIdentityInfo:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 service:(id)arg4 ;
-(BOOL)_addCompletionBlock:(/*^block*/id)arg1 forURIs:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 ;
-(void)_startQueryForURIs:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 forSending:(BOOL)arg5 forRefresh:(BOOL)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_flushTokensForURI:(id)arg1 fromURI:(id)arg2 service:(id)arg3 ;
-(BOOL)_uriHasOneSessionTokenValid:(id)arg1 inPeerMap:(id)arg2 ;
-(id)idQueryMessageDelivery;
-(BOOL)shouldShowPeerErrorsFor:(id)arg1 pushToken:(id)arg2 fromURI:(id)arg3 service:(id)arg4 ;
-(void)notePeerToken:(id)arg1 forURI:(id)arg2 fromURI:(id)arg3 service:(id)arg4 ;
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(void)_save;
@end

