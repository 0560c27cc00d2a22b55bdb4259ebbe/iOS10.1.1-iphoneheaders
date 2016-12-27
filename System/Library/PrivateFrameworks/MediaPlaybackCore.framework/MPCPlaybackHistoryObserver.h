/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPModelPlayEvent, NSOperationQueue, MPCPlayer;

@interface MPCPlaybackHistoryObserver : NSObject {

	MPModelPlayEvent* _lastRecordedPlayEvent;
	NSOperationQueue* _operationQueue;
	MPCPlayer* _player;

}

@property (nonatomic,readonly) MPCPlayer * player;              //@synthesize player=_player - In the implementation block
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithPlayer:(id)arg1 ;
-(MPCPlayer *)player;
-(void)_handleChangeFromItem:(id)arg1 toItem:(id)arg2 ;
@end

