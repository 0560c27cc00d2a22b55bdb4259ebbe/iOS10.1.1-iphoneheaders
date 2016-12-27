/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class NSString, GKPlayerInternal, NSDate;

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation {

	NSString* _sessionID;
	GKPlayerInternal* _player;
	GKPlayerInternal* _invitedBy;
	NSString* _inviteMessage;
	NSString* _status;
	NSDate* _lastTurnDate;
	NSDate* _timeoutDate;
	unsigned _matchOutcome;
	unsigned char _slot;

}

@property (nonatomic,readonly) NSString * playerID; 
@property (nonatomic,retain) NSString * sessionID;                      //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * player;                 //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKPlayerInternal * invitedBy;              //@synthesize invitedBy=_invitedBy - In the implementation block
@property (nonatomic,retain) NSString * inviteMessage;                  //@synthesize inviteMessage=_inviteMessage - In the implementation block
@property (nonatomic,retain) NSString * status;                         //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDate * lastTurnDate;                     //@synthesize lastTurnDate=_lastTurnDate - In the implementation block
@property (nonatomic,retain) NSDate * timeoutDate;                      //@synthesize timeoutDate=_timeoutDate - In the implementation block
@property (assign,nonatomic) unsigned matchOutcome;                     //@synthesize matchOutcome=_matchOutcome - In the implementation block
@property (assign,nonatomic) unsigned char slot;                        //@synthesize slot=_slot - In the implementation block
+(id)secureCodedPropertyKeys;
-(unsigned char)slot;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(id)serverRepresentation;
-(id)descriptionSubstitutionMap;
-(unsigned)matchOutcome;
-(NSDate *)timeoutDate;
-(void)setMatchOutcome:(unsigned)arg1 ;
-(void)setLastTurnDate:(NSDate *)arg1 ;
-(void)setTimeoutDate:(NSDate *)arg1 ;
-(void)setInvitedBy:(GKPlayerInternal *)arg1 ;
-(void)setInviteMessage:(NSString *)arg1 ;
-(void)setSlot:(unsigned char)arg1 ;
-(NSString *)playerID;
-(GKPlayerInternal *)invitedBy;
-(NSDate *)lastTurnDate;
-(NSString *)inviteMessage;
@end

