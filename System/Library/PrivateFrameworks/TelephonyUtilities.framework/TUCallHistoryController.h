/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallProviderManagerDelegate.h>

@class NSString, NSArray, CHManager, TUCallProviderManager, TUDispatcher, NSMutableSet;

@interface TUCallHistoryController : NSObject <TUCallProviderManagerDelegate> {

	NSString* _coalescingStrategy;
	unsigned long long _options;
	NSArray* _recentCalls;
	unsigned long long _unreadCallCount;
	unsigned long long _unreadVideoCallCount;
	unsigned long long _unreadAudioCallCount;
	CHManager* _callHistoryManager;
	TUCallProviderManager* _callProviderManager;
	TUDispatcher* _dispatcher;
	TUDispatcher* _simpleIvarDispatcher;
	NSMutableSet* _metadataPreCachedOptions;

}

@property (nonatomic,retain) CHManager * callHistoryManager;                           //@synthesize callHistoryManager=_callHistoryManager - In the implementation block
@property (nonatomic,retain) TUCallProviderManager * callProviderManager;              //@synthesize callProviderManager=_callProviderManager - In the implementation block
@property (nonatomic,retain) TUDispatcher * dispatcher;                                //@synthesize dispatcher=_dispatcher - In the implementation block
@property (nonatomic,retain) TUDispatcher * simpleIvarDispatcher;                      //@synthesize simpleIvarDispatcher=_simpleIvarDispatcher - In the implementation block
@property (nonatomic,retain) NSArray * recentCalls;                                    //@synthesize recentCalls=_recentCalls - In the implementation block
@property (assign,nonatomic) unsigned long long unreadCallCount;                       //@synthesize unreadCallCount=_unreadCallCount - In the implementation block
@property (assign,nonatomic) unsigned long long unreadVideoCallCount;                  //@synthesize unreadVideoCallCount=_unreadVideoCallCount - In the implementation block
@property (assign,nonatomic) unsigned long long unreadAudioCallCount;                  //@synthesize unreadAudioCallCount=_unreadAudioCallCount - In the implementation block
@property (nonatomic,retain) NSMutableSet * metadataPreCachedOptions;                  //@synthesize metadataPreCachedOptions=_metadataPreCachedOptions - In the implementation block
@property (nonatomic,copy) NSString * coalescingStrategy;                              //@synthesize coalescingStrategy=_coalescingStrategy - In the implementation block
@property (assign,nonatomic) unsigned long long options;                               //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
+(id)callHistoryControllerWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2 ;
+(id)sharedControllerWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)boostQualityOfService;
-(NSArray *)recentCalls;
-(id)initWithCoalescingStrategy:(id)arg1 options:(unsigned long long)arg2 ;
-(void)setCoalescingStrategy:(NSString *)arg1 ;
-(/*^block*/id)callHistoryManagerRecentCallsDispatchBlock;
-(void)_updateCallHistoryManagerUsingCurrentOptions;
-(TUDispatcher *)simpleIvarDispatcher;
-(void)markRecentCallsAsReadWithPredicate:(id)arg1 ;
-(void)dispatcherDidFinishBoost:(id)arg1 ;
-(void)loadDispatchQueue;
-(/*^block*/id)callHistoryManagerInitializationDispatchBlock;
-(void)callHistoryDatabaseChanged:(id)arg1 ;
-(void)setRecentCalls:(NSArray *)arg1 ;
-(NSMutableSet *)metadataPreCachedOptions;
-(void)setUnreadVideoCallCount:(unsigned long long)arg1 ;
-(void)setUnreadAudioCallCount:(unsigned long long)arg1 ;
-(void)setUnreadCallCount:(unsigned long long)arg1 ;
-(TUCallProviderManager *)callProviderManager;
-(void)providersChangedForProviderManager:(id)arg1 ;
-(NSString *)coalescingStrategy;
-(unsigned long long)unreadCallCount;
-(unsigned long long)unreadVideoCallCount;
-(unsigned long long)unreadAudioCallCount;
-(void)deleteAllRecentCalls;
-(void)deleteRecentCall:(id)arg1 ;
-(void)deleteRecentCalls:(id)arg1 ;
-(void)markRecentCallsAsRead;
-(void)markRecentVideoCallsAsRead;
-(void)markRecentAudioCallsAsRead;
-(void)reloadWithOptions:(unsigned long long)arg1 ;
-(void)setCallProviderManager:(TUCallProviderManager *)arg1 ;
-(void)setSimpleIvarDispatcher:(TUDispatcher *)arg1 ;
-(void)setMetadataPreCachedOptions:(NSMutableSet *)arg1 ;
-(TUDispatcher *)dispatcher;
-(void)setDispatcher:(TUDispatcher *)arg1 ;
-(CHManager *)callHistoryManager;
-(id)recentCallsWithPredicate:(id)arg1 ;
-(void)setCallHistoryManager:(CHManager *)arg1 ;
@end

