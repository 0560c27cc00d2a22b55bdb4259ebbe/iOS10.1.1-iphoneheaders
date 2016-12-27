/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class GKChallengeInternal, NSString, NSOrderedSet, GKGame, GKPlayer, NSDate;

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding> {

	GKChallengeInternal* _internal;

}

@property (retain) GKChallengeInternal * internal;                                   //@synthesize internal=_internal - In the implementation block
@property (nonatomic,copy,readonly) NSString * challengeID; 
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSOrderedSet * compatibleBundleIDs; 
@property (nonatomic,readonly) GKGame * game; 
@property (nonatomic,readonly) BOOL detailsLoaded; 
@property (nonatomic,copy,readonly) NSString * issuingPlayerID; 
@property (nonatomic,copy,readonly) NSString * receivingPlayerID; 
@property (nonatomic,copy,readonly) GKPlayer * issuingPlayer; 
@property (nonatomic,copy,readonly) GKPlayer * receivingPlayer; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,retain,readonly) NSDate * issueDate; 
@property (nonatomic,retain,readonly) NSDate * completionDate; 
@property (nonatomic,copy,readonly) NSString * message; 
+(BOOL)supportsSecureCoding;
+(BOOL)instancesRespondToSelector:(SEL)arg1 ;
+(id)instanceMethodSignatureForSelector:(SEL)arg1 ;
+(id)stringForState:(long long)arg1 ;
+(id)challengeForInternalRepresentation:(id)arg1 ;
+(void)loadChallengesForGame:(id)arg1 receivingPlayer:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withScore:(id)arg3 ;
+(id)challengeForGame:(id)arg1 andPlayer:(id)arg2 withAchievement:(id)arg3 ;
+(void)getCountOfChallenges:(/*^block*/id)arg1 ;
+(void)loadChallengesForReceivingPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)loadReceivedChallengesWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)loadImageWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)alertGoalText;
-(void)loadBannerImageWithHandler:(/*^block*/id)arg1 ;
-(id)iconSource;
-(id)smallIconURLString;
-(void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)iconURLString;
-(id)listTitleText;
-(id)listGoalText;
-(id)composeGoalText;
-(id)detailGoalText;
-(id)detailFromText;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)initWithInternalRepresentation:(id)arg1 ;
-(void)setInternal:(GKChallengeInternal *)arg1 ;
-(GKPlayer *)issuingPlayer;
-(GKPlayer *)receivingPlayer;
-(void)declineWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)issueToPlayers:(id)arg1 message:(id)arg2 ;
-(NSString *)issuingPlayerID;
-(NSString *)receivingPlayerID;
-(BOOL)hasLoadedUIDetails;
-(void)loadUIDetailsWithHandler:(/*^block*/id)arg1 ;
-(id)infoTextForIssuingPlayer:(id)arg1 ;
-(BOOL)detailsLoaded;
-(void)loadDetailsWithCompletionHandler:(/*^block*/id)arg1 ;
-(GKGame *)game;
-(GKChallengeInternal *)internal;
-(void)decline;
@end

