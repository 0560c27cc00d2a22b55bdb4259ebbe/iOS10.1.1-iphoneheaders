/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPAVController, RadioStation, MPAVItem;

@interface MusicRadioRemoteControlContext : NSObject {

	MPAVController* _player;
	RadioStation* _radioStation;
	long long _trackID;
	MPAVItem* _currentlyPlayingItem;

}

@property (nonatomic,readonly) MPAVController * player;                      //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) RadioStation * radioStation;                  //@synthesize radioStation=_radioStation - In the implementation block
@property (nonatomic,readonly) long long trackID;                            //@synthesize trackID=_trackID - In the implementation block
@property (nonatomic,readonly) MPAVItem * currentlyPlayingItem;              //@synthesize currentlyPlayingItem=_currentlyPlayingItem - In the implementation block
-(id)init;
-(RadioStation *)radioStation;
-(long long)trackID;
-(MPAVController *)player;
-(id)initWithPlayer:(id)arg1 mediaRemoteOptions:(id)arg2 ;
-(MPAVItem *)currentlyPlayingItem;
@end

