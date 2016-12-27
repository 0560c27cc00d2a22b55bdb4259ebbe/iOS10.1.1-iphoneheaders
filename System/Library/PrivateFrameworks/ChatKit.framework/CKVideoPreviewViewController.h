/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol CKVideoPreviewViewControllerDelegate;
@class AVPlayerItem, AVPlayer, AVPlayerLayer;

@interface CKVideoPreviewViewController : UIViewController {

	BOOL _redisplayStatusBar;
	BOOL _reachedEnd;
	id<CKVideoPreviewViewControllerDelegate> _videoPreviewDelegate;
	AVPlayerItem* _avPlayerItem;
	AVPlayer* _avPlayer;
	AVPlayerLayer* _avPlayerLayer;

}

@property (nonatomic,retain) AVPlayerItem * avPlayerItem;                                                       //@synthesize avPlayerItem=_avPlayerItem - In the implementation block
@property (nonatomic,retain) AVPlayer * avPlayer;                                                               //@synthesize avPlayer=_avPlayer - In the implementation block
@property (nonatomic,retain) AVPlayerLayer * avPlayerLayer;                                                     //@synthesize avPlayerLayer=_avPlayerLayer - In the implementation block
@property (assign,nonatomic) BOOL reachedEnd;                                                                   //@synthesize reachedEnd=_reachedEnd - In the implementation block
@property (assign,nonatomic,__weak) id<CKVideoPreviewViewControllerDelegate> videoPreviewDelegate;              //@synthesize videoPreviewDelegate=_videoPreviewDelegate - In the implementation block
@property (assign,nonatomic) BOOL redisplayStatusBar;                                                           //@synthesize redisplayStatusBar=_redisplayStatusBar - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
-(id)init;
-(void)dealloc;
-(BOOL)prefersStatusBarHidden;
-(void)loadView;
-(BOOL)isPlaying;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)play;
-(void)pause;
-(AVPlayer *)avPlayer;
-(void)setAvPlayer:(AVPlayer *)arg1 ;
-(AVPlayerLayer *)avPlayerLayer;
-(void)videoDidReachEnd:(id)arg1 ;
-(AVPlayerItem *)avPlayerItem;
-(void)setAvPlayerLayer:(AVPlayerLayer *)arg1 ;
-(void)setAvPlayerItem:(AVPlayerItem *)arg1 ;
-(BOOL)reachedEnd;
-(void)setReachedEnd:(BOOL)arg1 ;
-(id<CKVideoPreviewViewControllerDelegate>)videoPreviewDelegate;
-(void)setVideoFileURL:(id)arg1 ;
-(BOOL)togglePlayPause;
-(void)setVideoPreviewDelegate:(id<CKVideoPreviewViewControllerDelegate>)arg1 ;
-(BOOL)redisplayStatusBar;
-(void)setRedisplayStatusBar:(BOOL)arg1 ;
@end

