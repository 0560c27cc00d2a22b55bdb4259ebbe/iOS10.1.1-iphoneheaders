/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeSharing/HSResponse.h>

@class NSDictionary;

@interface HSPlayStatusUpdateResponse : HSResponse {

	unsigned _nextRevisionID;
	unsigned long long _nowPlayingContainerID;
	unsigned long long _nowPlayingContainerItemID;
	unsigned long long _nowPlayingDatabaseID;
	unsigned long long _nowPlayingItemID;
	NSDictionary* _playStatusInformation;

}

@property (assign,nonatomic) unsigned nextRevisionID;                                   //@synthesize nextRevisionID=_nextRevisionID - In the implementation block
@property (assign,nonatomic) unsigned long long nowPlayingContainerID;                  //@synthesize nowPlayingContainerID=_nowPlayingContainerID - In the implementation block
@property (assign,nonatomic) unsigned long long nowPlayingContainerItemID;              //@synthesize nowPlayingContainerItemID=_nowPlayingContainerItemID - In the implementation block
@property (assign,nonatomic) unsigned long long nowPlayingDatabaseID;                   //@synthesize nowPlayingDatabaseID=_nowPlayingDatabaseID - In the implementation block
@property (assign,nonatomic) unsigned long long nowPlayingItemID;                       //@synthesize nowPlayingItemID=_nowPlayingItemID - In the implementation block
@property (nonatomic,copy) NSDictionary * playStatusInformation;                        //@synthesize playStatusInformation=_playStatusInformation - In the implementation block
-(id)description;
-(void)setNextRevisionID:(unsigned)arg1 ;
-(void)setNowPlayingDatabaseID:(unsigned long long)arg1 ;
-(void)setNowPlayingContainerID:(unsigned long long)arg1 ;
-(void)setNowPlayingContainerItemID:(unsigned long long)arg1 ;
-(void)setNowPlayingItemID:(unsigned long long)arg1 ;
-(void)setPlayStatusInformation:(NSDictionary *)arg1 ;
-(unsigned)nextRevisionID;
-(unsigned long long)nowPlayingContainerID;
-(unsigned long long)nowPlayingContainerItemID;
-(unsigned long long)nowPlayingDatabaseID;
-(unsigned long long)nowPlayingItemID;
-(NSDictionary *)playStatusInformation;
@end

