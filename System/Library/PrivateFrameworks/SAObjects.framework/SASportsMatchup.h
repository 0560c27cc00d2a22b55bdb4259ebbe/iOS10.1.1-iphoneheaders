/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class SASportsEntity, NSArray, NSString, NSNumber, SALCMLiveTuneInButton, SAUIAppPunchOut, NSDate;

@interface SASportsMatchup : SADomainObject

@property (readonly) BOOL ACSportsHomeIsFirst; 
@property (nonatomic,readonly) SASportsEntity * ACSportsFirstEntity; 
@property (nonatomic,readonly) NSArray * ACSportsFirstLineScores; 
@property (nonatomic,readonly) NSString * ACSportsFirstScore; 
@property (nonatomic,readonly) SASportsEntity * ACSportsSecondEntity; 
@property (nonatomic,readonly) NSArray * ACSportsSecondLineScores; 
@property (nonatomic,readonly) NSString * ACSportsSecondScore; 
@property (nonatomic,retain) SASportsEntity * awayEntity; 
@property (nonatomic,copy) NSArray * awayLineScores; 
@property (nonatomic,copy) NSString * awayScore; 
@property (nonatomic,copy) NSNumber * awayShootoutPoints; 
@property (nonatomic,copy) NSString * awayTeamRecordSummary; 
@property (nonatomic,copy) NSString * currentPeriod; 
@property (nonatomic,copy) NSNumber * expectedLineScoreCount; 
@property (nonatomic,copy) NSString * favoredEntity; 
@property (nonatomic,retain) SASportsEntity * homeEntity; 
@property (nonatomic,copy) NSArray * homeLineScores; 
@property (nonatomic,copy) NSString * homeScore; 
@property (nonatomic,copy) NSNumber * homeShootoutPoints; 
@property (nonatomic,copy) NSString * homeTeamRecordSummary; 
@property (nonatomic,copy) NSNumber * isExplicitlyEndOfPeriod; 
@property (nonatomic,copy) NSString * line; 
@property (nonatomic,retain) SALCMLiveTuneInButton * liveTuneInButton; 
@property (nonatomic,copy) NSString * location; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) NSString * matchupOrder; 
@property (nonatomic,copy) NSString * overUnder; 
@property (nonatomic,copy) NSString * periodDescription; 
@property (nonatomic,copy) NSArray * playSummaries; 
@property (nonatomic,retain) SAUIAppPunchOut * punchout; 
@property (nonatomic,copy) NSDate * startTime; 
@property (nonatomic,copy) NSString * status; 
@property (nonatomic,copy) NSString * timeRemaining; 
@property (nonatomic,copy) NSNumber * timeTBD; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * tournamentSeriesDescription; 
@property (nonatomic,copy) NSArray * tvChannels; 
@property (nonatomic,copy) NSString * winningEntity; 
+(id)matchup;
+(id)matchupWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)ACSportsHomeIsFirst;
-(NSString *)ACSportsSecondScore;
-(SASportsEntity *)ACSportsSecondEntity;
-(NSArray *)ACSportsSecondLineScores;
-(NSString *)ACSportsFirstScore;
-(NSArray *)ACSportsFirstLineScores;
-(id)localizedScheduleStatusForLeague:(id)arg1 sport:(id)arg2 showTimeIfToday:(BOOL)arg3 ;
-(SASportsEntity *)ACSportsFirstEntity;
-(BOOL)isInTheFuture;
-(BOOL)siriui_homeIsFirst;
-(BOOL)siriui_isInTheFuture;
-(id)siriui_localizedScheduleStatusForLeague:(id)arg1 sport:(id)arg2 showTimeIfToday:(BOOL)arg3 ;
-(id)siriui_venueLocation;
-(id)siriui_firstEntity;
-(id)siriui_firstLineScores;
-(id)siriui_firstScore;
-(id)siriui_secondEntity;
-(id)siriui_secondLineScores;
-(id)siriui_secondScore;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setStartTime:(NSDate *)arg1 ;
-(NSString *)location;
-(NSString *)line;
-(void)setLine:(NSString *)arg1 ;
-(void)setLocation:(NSString *)arg1 ;
-(NSDate *)startTime;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)locationName;
-(id)encodedClassName;
-(SALCMLiveTuneInButton *)liveTuneInButton;
-(SASportsEntity *)awayEntity;
-(void)setAwayEntity:(SASportsEntity *)arg1 ;
-(NSArray *)awayLineScores;
-(void)setAwayLineScores:(NSArray *)arg1 ;
-(NSString *)awayScore;
-(void)setAwayScore:(NSString *)arg1 ;
-(NSNumber *)awayShootoutPoints;
-(void)setAwayShootoutPoints:(NSNumber *)arg1 ;
-(NSString *)awayTeamRecordSummary;
-(void)setAwayTeamRecordSummary:(NSString *)arg1 ;
-(NSString *)currentPeriod;
-(void)setCurrentPeriod:(NSString *)arg1 ;
-(NSNumber *)expectedLineScoreCount;
-(void)setExpectedLineScoreCount:(NSNumber *)arg1 ;
-(NSString *)favoredEntity;
-(void)setFavoredEntity:(NSString *)arg1 ;
-(SASportsEntity *)homeEntity;
-(void)setHomeEntity:(SASportsEntity *)arg1 ;
-(NSArray *)homeLineScores;
-(void)setHomeLineScores:(NSArray *)arg1 ;
-(NSString *)homeScore;
-(void)setHomeScore:(NSString *)arg1 ;
-(NSNumber *)homeShootoutPoints;
-(void)setHomeShootoutPoints:(NSNumber *)arg1 ;
-(NSString *)homeTeamRecordSummary;
-(void)setHomeTeamRecordSummary:(NSString *)arg1 ;
-(NSNumber *)isExplicitlyEndOfPeriod;
-(void)setIsExplicitlyEndOfPeriod:(NSNumber *)arg1 ;
-(void)setLiveTuneInButton:(SALCMLiveTuneInButton *)arg1 ;
-(NSString *)matchupOrder;
-(void)setMatchupOrder:(NSString *)arg1 ;
-(NSString *)overUnder;
-(void)setOverUnder:(NSString *)arg1 ;
-(NSString *)periodDescription;
-(void)setPeriodDescription:(NSString *)arg1 ;
-(NSArray *)playSummaries;
-(void)setPlaySummaries:(NSArray *)arg1 ;
-(NSString *)timeRemaining;
-(void)setTimeRemaining:(NSString *)arg1 ;
-(NSNumber *)timeTBD;
-(void)setTimeTBD:(NSNumber *)arg1 ;
-(NSString *)tournamentSeriesDescription;
-(void)setTournamentSeriesDescription:(NSString *)arg1 ;
-(NSArray *)tvChannels;
-(void)setTvChannels:(NSArray *)arg1 ;
-(NSString *)winningEntity;
-(void)setWinningEntity:(NSString *)arg1 ;
-(SAUIAppPunchOut *)punchout;
-(void)setPunchout:(SAUIAppPunchOut *)arg1 ;
-(void)setLocationName:(NSString *)arg1 ;
@end

