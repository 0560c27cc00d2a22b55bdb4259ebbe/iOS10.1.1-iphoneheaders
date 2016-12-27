/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKLeaderboardDelegate;
#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@class NSArray, GKScore, GKLeaderboardInternal, NSString;

@interface GKLeaderboard : NSObject {

	int _loadingCount;
	os_unfair_lock_s _lock;
	long long _timeScope;
	long long _playerScope;
	NSArray* _players;
	NSArray* _scores;
	GKScore* _localPlayerScore;
	id<GKLeaderboardDelegate> _weakDelegate;
	GKLeaderboardInternal* _internal;
	NSRange _range;

}

@property (nonatomic,retain) NSArray * players;                                //@synthesize players=_players - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                            //@synthesize lock=_lock - In the implementation block
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,retain) NSArray * scores;                                 //@synthesize scores=_scores - In the implementation block
@property (retain) GKLeaderboardInternal * internal;                           //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<GKLeaderboardDelegate> delegate;               //@synthesize weakDelegate=_weakDelegate - In the implementation block
@property (nonatomic,retain) GKScore * localPlayerScore;                       //@synthesize localPlayerScore=_localPlayerScore - In the implementation block
@property (assign,nonatomic) int loadingCount;                                 //@synthesize loadingCount=_loadingCount - In the implementation block
@property (nonatomic,retain,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) long long overallRank; 
@property (nonatomic,readonly) long long overallRankCount; 
@property (nonatomic,readonly) long long friendRank; 
@property (nonatomic,readonly) long long friendRankCount; 
@property (assign,nonatomic) long long timeScope;                              //@synthesize timeScope=_timeScope - In the implementation block
@property (assign,nonatomic) long long playerScope;                            //@synthesize playerScope=_playerScope - In the implementation block
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (assign,nonatomic) NSRange range;                                    //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) unsigned long long maxRange; 
@property (getter=isLoading,readonly) BOOL loading; 
@property (nonatomic,retain,readonly) NSString * groupIdentifier; 
+(id)localizedStringForTimeScope:(long long)arg1 ;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(void)loadCategoriesWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadLeaderboardsWithCompletionHandler:(/*^block*/id)arg1 ;
+(void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
+(void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)imageURL;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)miniImageURL;
-(id)init;
-(void)setDelegate:(id<GKLeaderboardDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id<GKLeaderboardDelegate>)delegate;
-(os_unfair_lock_s)lock;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(NSRange)range;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)isLoading;
-(void)setRange:(NSRange)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKLeaderboardInternal *)arg1 ;
-(long long)playerScope;
-(void)incrementLoadingCountAtomically;
-(id)scoreRequestForGame:(id)arg1 ;
-(NSArray *)scores;
-(void)setScores:(NSArray *)arg1 ;
-(void)setLocalPlayerScore:(GKScore *)arg1 ;
-(void)loadScoresForRequest:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)decrementLoadingCountAtomically;
-(id)initWithPlayerIDs:(id)arg1 ;
-(void)loadScoresWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setPlayerScope:(long long)arg1 ;
-(GKScore *)localPlayerScore;
-(int)loadingCount;
-(void)setLoadingCount:(int)arg1 ;
-(NSArray *)players;
-(void)setPlayers:(NSArray *)arg1 ;
-(long long)timeScope;
-(void)setTimeScope:(long long)arg1 ;
-(id)initWithPlayers:(id)arg1 ;
-(void)loadScoresForGame:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(GKLeaderboardInternal *)internal;
-(void)setLock:(os_unfair_lock_s)arg1 ;
@end

