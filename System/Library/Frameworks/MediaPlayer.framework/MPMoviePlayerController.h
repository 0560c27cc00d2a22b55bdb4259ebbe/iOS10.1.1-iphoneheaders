/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <libobjc.A.dylib/MPMediaPlayback.h>

@class NSURL, UIView;

@interface MPMoviePlayerController : NSObject <MPMediaPlayback> {

	id _implementation;

}

@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) UIView * backgroundView; 
@property (nonatomic,readonly) long long playbackState; 
@property (nonatomic,readonly) unsigned long long loadState; 
@property (assign,nonatomic) long long controlStyle; 
@property (assign,nonatomic) long long repeatMode; 
@property (assign,nonatomic) BOOL shouldAutoplay; 
@property (assign,getter=isFullscreen,nonatomic) BOOL fullscreen; 
@property (assign,nonatomic) long long scalingMode; 
@property (nonatomic,readonly) BOOL readyForDisplay; 
@property (nonatomic,readonly) BOOL isPreparedToPlay; 
@property (assign,nonatomic) double currentPlaybackTime; 
@property (assign,nonatomic) float currentPlaybackRate; 
+(void)preparePrerollAds;
+(void)allInstancesResignActive;
-(id)_iAd_prerollController;
-(void)set_iAd_prerollController:(id)arg1 ;
-(void)playPrerollAdWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)cancelPreroll;
-(id)init;
-(void)dealloc;
-(UIView *)view;
-(double)duration;
-(void)stop;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(UIView *)backgroundView;
-(void)forwardInvocation:(id)arg1 ;
-(id)initWithAsset:(id)arg1 ;
-(void)play;
-(void)pause;
-(CGSize)naturalSize;
-(BOOL)isFullscreen;
-(unsigned long long)loadState;
-(long long)controlStyle;
-(void)setControlStyle:(long long)arg1 ;
-(long long)repeatMode;
-(void)setRepeatMode:(long long)arg1 ;
-(BOOL)shouldAutoplay;
-(void)setShouldAutoplay:(BOOL)arg1 ;
-(void)setFullscreen:(BOOL)arg1 ;
-(long long)scalingMode;
-(void)setScalingMode:(long long)arg1 ;
-(BOOL)allowsAirPlay;
-(void)setAllowsAirPlay:(BOOL)arg1 ;
-(BOOL)isAirPlayVideoActive;
-(BOOL)isPreparedToPlay;
-(void)beginSeekingForward;
-(void)beginSeekingBackward;
-(void)endSeeking;
-(void)skipToNextItem;
-(void)skipToBeginning;
-(void)skipToPreviousItem;
-(unsigned long long)movieMediaTypes;
-(void)setMovieSourceType:(long long)arg1 ;
-(long long)movieSourceType;
-(double)playableDuration;
-(double)endPlaybackTime;
-(float)currentPlaybackRate;
-(void)setCurrentPlaybackRate:(float)arg1 ;
-(void)_resignActive;
-(BOOL)_isReadyForDisplay;
-(id)initWithPlayerItem:(id)arg1 ;
-(BOOL)readyForDisplay;
-(double)initialPlaybackTime;
-(id)initWithContentURL:(id)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
-(void)setInitialPlaybackTime:(double)arg1 ;
-(void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)playbackState;
-(void)setEndPlaybackTime:(double)arg1 ;
-(double)currentPlaybackTime;
-(void)setCurrentPlaybackTime:(double)arg1 ;
-(void)prepareToPlay;
@end

