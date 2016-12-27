/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLAVPlayerView, UIView, AVPlayer;

@interface PLMoviePlayerView : UIView {

	PLAVPlayerView* _avPlayerView;
	BOOL _destinationPlaceholderHidden;
	long long _destinationPlaceholderStyle;

}

@property (nonatomic,retain,readonly) UIView * videoView; 
@property (nonatomic,retain) AVPlayer * player; 
@property (nonatomic,readonly) long long destinationPlaceholderStyle;                                              //@synthesize destinationPlaceholderStyle=_destinationPlaceholderStyle - In the implementation block
@property (assign,getter=isDestinationPlaceholderHidden,nonatomic) BOOL destinationPlaceholderHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIView *)videoView;
-(void)setScaleMode:(long long)arg1 ;
-(long long)destinationPlaceholderStyle;
-(void)setScaleMode:(long long)arg1 duration:(double)arg2 ;
-(void)setDestinationPlaceholderHidden:(BOOL)arg1 ;
-(void)reattachVideoView;
-(BOOL)isDestinationPlaceholderHidden;
-(void)_installBackgroundView:(id)arg1 ;
-(AVPlayer *)player;
-(void)setPlayer:(AVPlayer *)arg1 ;
@end

