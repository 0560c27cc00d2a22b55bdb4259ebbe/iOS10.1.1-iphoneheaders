/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UIImage, UIButton;

@interface MPUNowPlayingArtworkView : UIView {

	UIView* _artworkContainerView;
	UIImageView* _artworkImageView;
	UIView* _artworkHighlightOverlay;
	UIImage* _placeholderImage;
	UIButton* _button;
	BOOL _activated;

}

@property (nonatomic,retain) UIImage * artworkImage; 
@property (assign,nonatomic) BOOL activated;                      //@synthesize activated=_activated - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_init;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(BOOL)activated;
-(void)setActivated:(BOOL)arg1 ;
-(UIImage *)artworkImage;
-(void)setActivated:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_touchControlActivate:(id)arg1 ;
-(void)_touchControlDeactivate:(id)arg1 ;
-(void)setArtworkImage:(UIImage *)arg1 ;
@end

