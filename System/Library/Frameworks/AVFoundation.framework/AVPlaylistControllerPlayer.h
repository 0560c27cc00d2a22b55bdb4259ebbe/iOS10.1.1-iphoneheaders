/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVQueuePlayer.h>

@interface AVPlaylistControllerPlayer : AVQueuePlayer {

	CFDictionaryRef _playerItemsForFigPlaybackItems;

}
-(void)dealloc;
-(id)_items;
-(SCD_Struct_AV2)currentTime;
-(id)currentItem;
-(id)initWithFigPlayer:(OpaqueFigPlayerRef)arg1 ;
-(void)_advanceCurrentItemAccordingToFigPlaybackItem:(OpaqueFigPlaybackItemRef)arg1 ;
-(OpaqueFigPlaybackItemRef)_copyCurrentFigPlaybackItem;
-(void)seekToTime:(SCD_Struct_AV2)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)finalize;
@end

