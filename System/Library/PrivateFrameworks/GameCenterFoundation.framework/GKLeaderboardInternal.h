/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, NSDate, NSDictionary, NSArray, GKScoreInternal;

@interface GKLeaderboardInternal : GKInternalRepresentation {

	NSString* _identifier;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _leaderboardSetIdentifier;
	NSDate* _lastSubmittedDate;
	NSDictionary* _icons;
	unsigned _overallRank;
	unsigned _overallRankCount;
	unsigned short _friendRank;
	unsigned short _friendRankCount;
	unsigned _maxRank;
	NSArray* _scores;
	GKScoreInternal* _playerScore;

}

@property (nonatomic,retain) NSString * localizedTitle; 
@property (nonatomic,retain) NSString * category; 
@property (nonatomic,readonly) unsigned long long maxRange; 
@property (nonatomic,retain) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * groupIdentifier;                       //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,retain) NSString * leaderboardSetIdentifier;              //@synthesize leaderboardSetIdentifier=_leaderboardSetIdentifier - In the implementation block
@property (nonatomic,retain) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSDate * lastSubmittedDate;                       //@synthesize lastSubmittedDate=_lastSubmittedDate - In the implementation block
@property (nonatomic,retain) NSDictionary * icons;                             //@synthesize icons=_icons - In the implementation block
@property (assign,nonatomic) unsigned overallRank;                             //@synthesize overallRank=_overallRank - In the implementation block
@property (assign,nonatomic) unsigned overallRankCount;                        //@synthesize overallRankCount=_overallRankCount - In the implementation block
@property (assign,nonatomic) unsigned short friendRank;                        //@synthesize friendRank=_friendRank - In the implementation block
@property (assign,nonatomic) unsigned short friendRankCount;                   //@synthesize friendRankCount=_friendRankCount - In the implementation block
@property (assign,nonatomic) unsigned maxRank;                                 //@synthesize maxRank=_maxRank - In the implementation block
@property (nonatomic,retain) NSArray * scores;                                 //@synthesize scores=_scores - In the implementation block
@property (nonatomic,retain) GKScoreInternal * playerScore;                    //@synthesize playerScore=_playerScore - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)setGroupIdentifier:(NSString *)arg1 ;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)identifier;
-(NSString *)title;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIcons:(NSDictionary *)arg1 ;
-(NSDictionary *)icons;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)groupIdentifier;
-(NSArray *)scores;
-(void)setScores:(NSArray *)arg1 ;
-(GKScoreInternal *)playerScore;
-(void)setFriendRank:(unsigned short)arg1 ;
-(unsigned)maxRank;
-(void)setMaxRank:(unsigned)arg1 ;
-(NSString *)leaderboardSetIdentifier;
-(void)setLeaderboardSetIdentifier:(NSString *)arg1 ;
-(NSDate *)lastSubmittedDate;
-(void)setLastSubmittedDate:(NSDate *)arg1 ;
-(void)setPlayerScore:(GKScoreInternal *)arg1 ;
-(unsigned)overallRank;
-(void)setOverallRank:(unsigned)arg1 ;
-(unsigned)overallRankCount;
-(void)setOverallRankCount:(unsigned)arg1 ;
-(unsigned short)friendRankCount;
-(void)setFriendRankCount:(unsigned short)arg1 ;
-(unsigned short)friendRank;
-(unsigned long long)maxRange;
@end

