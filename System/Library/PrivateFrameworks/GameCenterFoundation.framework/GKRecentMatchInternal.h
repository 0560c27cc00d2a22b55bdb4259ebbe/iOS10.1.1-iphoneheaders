/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterFoundation/GKInternalRepresentation.h>

@class GKPlayerInternal, GKGameRecordInternal, NSDate;

@interface GKRecentMatchInternal : GKInternalRepresentation {

	GKPlayerInternal* _player;
	GKGameRecordInternal* _game;
	NSDate* _date;

}

@property (nonatomic,retain) GKPlayerInternal * player;                //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) GKGameRecordInternal * game;              //@synthesize game=_game - In the implementation block
@property (nonatomic,retain) NSDate * date;                            //@synthesize date=_date - In the implementation block
+(id)secureCodedPropertyKeys;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(GKPlayerInternal *)player;
-(void)setPlayer:(GKPlayerInternal *)arg1 ;
-(void)setGame:(GKGameRecordInternal *)arg1 ;
-(GKGameRecordInternal *)game;
@end

