/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Security.framework/CloudKeychainProxy.bundle/CloudKeychainProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKDStore, CKDAccount, OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableSet, NSString, NSMutableArray, NSMutableDictionary, NSDictionary;

@interface UbiqitousKVSProxy : NSObject {

	id currentiCloudToken;
	int callbackMethod;
	BOOL _unlockedSinceBoot;
	BOOL _isLocked;
	BOOL _seenKVSStoreChange;
	BOOL _syncWithPeersPending;
	BOOL _shadowSyncWithPeersPending;
	BOOL _ensurePeerRegistration;
	BOOL _shadowEnsurePeerRegistration;
	BOOL _inCallout;
	BOOL _syncTimerScheduled;
	BOOL _penaltyTimerScheduled;
	NSObject*<CKDStore> _store;
	NSObject*<CKDAccount> _account;
	NSMutableSet* _alwaysKeys;
	NSMutableSet* _firstUnlockKeys;
	NSMutableSet* _unlockedKeys;
	NSMutableSet* _pendingKeys;
	NSMutableSet* _shadowPendingKeys;
	NSString* _dsid;
	NSMutableArray* _freshnessCompletions;
	unsigned long long _nextFreshnessTime;
	NSObject*<OS_dispatch_source> _syncTimer;
	unsigned long long _deadline;
	unsigned long long _lastSyncTime;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSObject*<OS_dispatch_queue> _ckdkvsproxy_queue;
	NSObject*<OS_dispatch_source> _penaltyTimer;
	NSMutableDictionary* _monitor;
	NSDictionary* _queuedMessages;
	/*^block*/id _shadowFlushBlock;

}

@property (readonly) NSObject*<CKDStore> store;                                  //@synthesize store=_store - In the implementation block
@property (readonly) NSObject*<CKDAccount> account;                              //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) NSMutableSet * alwaysKeys;                          //@synthesize alwaysKeys=_alwaysKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * firstUnlockKeys;                     //@synthesize firstUnlockKeys=_firstUnlockKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * unlockedKeys;                        //@synthesize unlockedKeys=_unlockedKeys - In the implementation block
@property (assign) BOOL unlockedSinceBoot;                                       //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (assign) BOOL isLocked;                                                //@synthesize isLocked=_isLocked - In the implementation block
@property (assign) BOOL seenKVSStoreChange;                                      //@synthesize seenKVSStoreChange=_seenKVSStoreChange - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingKeys;                         //@synthesize pendingKeys=_pendingKeys - In the implementation block
@property (nonatomic,retain) NSMutableSet * shadowPendingKeys;                   //@synthesize shadowPendingKeys=_shadowPendingKeys - In the implementation block
@property (nonatomic,retain) NSString * dsid;                                    //@synthesize dsid=_dsid - In the implementation block
@property (assign) BOOL syncWithPeersPending;                                    //@synthesize syncWithPeersPending=_syncWithPeersPending - In the implementation block
@property (assign) BOOL shadowSyncWithPeersPending;                              //@synthesize shadowSyncWithPeersPending=_shadowSyncWithPeersPending - In the implementation block
@property (assign) BOOL ensurePeerRegistration;                                  //@synthesize ensurePeerRegistration=_ensurePeerRegistration - In the implementation block
@property (assign) BOOL shadowEnsurePeerRegistration;                            //@synthesize shadowEnsurePeerRegistration=_shadowEnsurePeerRegistration - In the implementation block
@property (assign) BOOL inCallout;                                               //@synthesize inCallout=_inCallout - In the implementation block
@property (nonatomic,retain) NSMutableArray * freshnessCompletions;              //@synthesize freshnessCompletions=_freshnessCompletions - In the implementation block
@property (assign) unsigned long long nextFreshnessTime;                         //@synthesize nextFreshnessTime=_nextFreshnessTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> syncTimer;                      //@synthesize syncTimer=_syncTimer - In the implementation block
@property (assign) BOOL syncTimerScheduled;                                      //@synthesize syncTimerScheduled=_syncTimerScheduled - In the implementation block
@property (assign) unsigned long long deadline;                                  //@synthesize deadline=_deadline - In the implementation block
@property (assign) unsigned long long lastSyncTime;                              //@synthesize lastSyncTime=_lastSyncTime - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> calloutQueue;                    //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> ckdkvsproxy_queue;               //@synthesize ckdkvsproxy_queue=_ckdkvsproxy_queue - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> penaltyTimer;                   //@synthesize penaltyTimer=_penaltyTimer - In the implementation block
@property (assign) BOOL penaltyTimerScheduled;                                   //@synthesize penaltyTimerScheduled=_penaltyTimerScheduled - In the implementation block
@property (retain) NSMutableDictionary * monitor;                                //@synthesize monitor=_monitor - In the implementation block
@property (retain) NSDictionary * queuedMessages;                                //@synthesize queuedMessages=_queuedMessages - In the implementation block
@property (copy) id shadowFlushBlock;                                            //@synthesize shadowFlushBlock=_shadowFlushBlock - In the implementation block
+(id)sharedKVSProxy;
-(id)exportKeyInterests;
-(void)timerFired;
-(void)importKeyInterests:(id)arg1 ;
-(void)streamEvent:(id)arg1 ;
-(BOOL)updateUnlockedSinceBoot;
-(BOOL)updateIsLocked;
-(void)keybagDidUnlock;
-(id)copyAsDictionary;
-(void)processKeyChangedEvent:(id)arg1 ;
-(void)penaltyTimerFired:(id)arg1 ;
-(id)setNewTimer:(int)arg1 key:(id)arg2 ;
-(void)setObjectsFromDictionary:(id)arg1 ;
-(void)increasePenalty:(id)arg1 key:(id)arg2 keyEntry:(id*)arg3 ;
-(void)decreasePenalty:(id)arg1 key:(id)arg2 keyEntry:(id*)arg3 ;
-(void)recordTimestampForAppropriateInterval:(id*)arg1 key:(id)arg2 consecutiveWrites:(id*)arg3 ;
-(id)initializeTimeTable:(id)arg1 ;
-(void)initializeKeyEntry:(id)arg1 ;
-(void)recordWriteToKVS:(id)arg1 ;
-(id)recordHaltedValuesAndReturnValuesToSafelyWrite:(id)arg1 ;
-(void)setStoreObjectsFromDictionary:(id)arg1 ;
-(NSMutableArray *)freshnessCompletions;
-(void)waitForSyncDone:(BOOL)arg1 error:(id)arg2 ;
-(id)copyAllKeyInterests;
-(void)registerAtTimeKeys:(id)arg1 ;
-(id)pendKeysAndGetNewlyPended:(id)arg1 ;
-(void)persistState;
-(void)intersectWithCurrentLockState:(id)arg1 ;
-(void)processPendingKeysForCurrentLockState;
-(void)keybagStateChange;
-(void)kvsStoreChange;
-(void)processAllItems;
-(id)pendKeysAndGetPendingForCurrentLockState:(id)arg1 ;
-(id)copyValues:(id)arg1 ;
-(void)doEnsurePeerRegistration;
-(void)scheduleSyncRequestTimer;
-(void)calloutWith:(/*^block*/id)arg1 ;
-(void)doSyncWithAllPeers;
-(unsigned long long)nextSyncTime;
-(void)keybagDidLock;
-(id)keysForCurrentLockState;
-(id)pendingKeysForCurrentLockState;
-(void)sendKeysCallout:(/*^block*/id)arg1 ;
-(void)clearStore;
-(void)synchronizeStore;
-(void)waitForSynchronization:(/*^block*/id)arg1 ;
-(void)registerKeys:(id)arg1 ;
-(void)storeKeysChanged:(id)arg1 initial:(BOOL)arg2 ;
-(void)storeAccountChanged;
-(void)doAfterFlush:(/*^block*/id)arg1 ;
-(void)requestSyncWithAllPeers;
-(void)requestEnsurePeerRegistration;
-(NSMutableSet *)alwaysKeys;
-(void)setAlwaysKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)firstUnlockKeys;
-(void)setFirstUnlockKeys:(NSMutableSet *)arg1 ;
-(NSMutableSet *)unlockedKeys;
-(void)setUnlockedKeys:(NSMutableSet *)arg1 ;
-(BOOL)seenKVSStoreChange;
-(void)setSeenKVSStoreChange:(BOOL)arg1 ;
-(NSMutableSet *)shadowPendingKeys;
-(void)setShadowPendingKeys:(NSMutableSet *)arg1 ;
-(BOOL)syncWithPeersPending;
-(void)setSyncWithPeersPending:(BOOL)arg1 ;
-(BOOL)shadowSyncWithPeersPending;
-(void)setShadowSyncWithPeersPending:(BOOL)arg1 ;
-(BOOL)ensurePeerRegistration;
-(void)setEnsurePeerRegistration:(BOOL)arg1 ;
-(BOOL)shadowEnsurePeerRegistration;
-(void)setShadowEnsurePeerRegistration:(BOOL)arg1 ;
-(BOOL)inCallout;
-(void)setInCallout:(BOOL)arg1 ;
-(void)setFreshnessCompletions:(NSMutableArray *)arg1 ;
-(unsigned long long)nextFreshnessTime;
-(void)setNextFreshnessTime:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_source>)syncTimer;
-(void)setSyncTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)syncTimerScheduled;
-(void)setSyncTimerScheduled:(BOOL)arg1 ;
-(unsigned long long)deadline;
-(void)setDeadline:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)ckdkvsproxy_queue;
-(void)setCkdkvsproxy_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)penaltyTimer;
-(void)setPenaltyTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(BOOL)penaltyTimerScheduled;
-(void)setPenaltyTimerScheduled:(BOOL)arg1 ;
-(void)setQueuedMessages:(NSDictionary *)arg1 ;
-(id)shadowFlushBlock;
-(void)setShadowFlushBlock:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(BOOL)isLocked;
-(NSMutableDictionary *)monitor;
-(NSDictionary *)queuedMessages;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<CKDAccount>)account;
-(void)setLastSyncTime:(unsigned long long)arg1 ;
-(unsigned long long)lastSyncTime;
-(NSString *)dsid;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(void)setDsid:(NSString *)arg1 ;
-(void)setIsLocked:(BOOL)arg1 ;
-(NSMutableSet *)pendingKeys;
-(void)setPendingKeys:(NSMutableSet *)arg1 ;
-(void)setMonitor:(NSMutableDictionary *)arg1 ;
-(BOOL)unlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(NSObject*<CKDStore>)store;
@end

