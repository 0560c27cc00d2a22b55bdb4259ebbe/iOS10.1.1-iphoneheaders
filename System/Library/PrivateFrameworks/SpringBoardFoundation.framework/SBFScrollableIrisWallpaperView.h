/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFScrollableStaticWallpaperView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/ISPlayerViewDelegate.h>
#import <libobjc.A.dylib/SBFIrisWallpaperView.h>

@protocol SBFIrisWallpaperViewDelegate;
@class AVAsset, ISPlayerView, NSString;

@interface SBFScrollableIrisWallpaperView : SBFScrollableStaticWallpaperView <UIGestureRecognizerDelegate, ISPlayerViewDelegate, SBFIrisWallpaperView> {

	AVAsset* _video;
	ISPlayerView* _playerView;
	long long _playbackState;
	id<SBFIrisWallpaperViewDelegate> _irisDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<SBFIrisWallpaperViewDelegate> irisDelegate;              //@synthesize irisDelegate=_irisDelegate - In the implementation block
@property (nonatomic,readonly) long long irisPlaybackState; 
@property (nonatomic,readonly) BOOL isIrisInteracting; 
-(void)dealloc;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id<SBFIrisWallpaperViewDelegate>)irisDelegate;
-(void)playerViewPlaybackStateDidChange:(id)arg1 ;
-(void)playerViewIsInteractingDidChange:(id)arg1 ;
-(id)irisGestureRecognizer;
-(void)setIrisDelegate:(id<SBFIrisWallpaperViewDelegate>)arg1 ;
-(long long)irisPlaybackState;
-(BOOL)isIrisInteracting;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 variant:(long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 wallpaperImage:(id)arg2 wallpaperVideo:(id)arg3 stillTimeInVideo:(double)arg4 variant:(long long)arg5 ;
-(id)_newImageView;
@end

