/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PhotosPlayer/PhotosPlayer-Structs.h>
@class ISWrappedAVPlayer, ISLayerPlayer, ISCrossfadeItem;

@interface ISPlayerOutputContent : NSObject {

	int _photoEXIFOrientation;
	CGImageRef _photo;
	ISWrappedAVPlayer* _videoPlayer;
	ISLayerPlayer* _crossfadePlayer;
	ISCrossfadeItem* _crossfadeItem;
	CGSize _videoSize;

}

@property (nonatomic,readonly) CGImageRef photo;                             //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) int photoEXIFOrientation;                     //@synthesize photoEXIFOrientation=_photoEXIFOrientation - In the implementation block
@property (nonatomic,readonly) ISWrappedAVPlayer * videoPlayer;              //@synthesize videoPlayer=_videoPlayer - In the implementation block
@property (nonatomic,readonly) CGSize videoSize;                             //@synthesize videoSize=_videoSize - In the implementation block
@property (nonatomic,readonly) ISLayerPlayer * crossfadePlayer;              //@synthesize crossfadePlayer=_crossfadePlayer - In the implementation block
@property (nonatomic,readonly) ISCrossfadeItem * crossfadeItem;              //@synthesize crossfadeItem=_crossfadeItem - In the implementation block
-(void)dealloc;
-(id)description;
-(CGSize)videoSize;
-(ISWrappedAVPlayer *)videoPlayer;
-(CGImageRef)photo;
-(ISCrossfadeItem *)crossfadeItem;
-(int)photoEXIFOrientation;
-(ISLayerPlayer *)crossfadePlayer;
-(id)initWithPhoto:(CGImageRef)arg1 photoEXIFOrientation:(int)arg2 videoPlayer:(id)arg3 videoSize:(CGSize)arg4 crossfadePlayer:(id)arg5 crossfadeItem:(id)arg6 ;
@end

