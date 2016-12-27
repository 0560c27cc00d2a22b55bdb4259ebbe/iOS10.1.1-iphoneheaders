/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>

@class UIImageView, UIImage, NSArray;

@interface CAMIrisButton : UIButton {

	long long _layoutStyle;
	long long _irisMode;
	UIImageView* __padBackgroundView;
	UIImage* __baseImage;
	NSArray* __enablingAnimationImages;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _padBackgroundView;                                                //@synthesize _padBackgroundView=__padBackgroundView - In the implementation block
@property (nonatomic,readonly) UIImage * _baseImage;                                                            //@synthesize _baseImage=__baseImage - In the implementation block
@property (setter=_setEnablingAnimationImages:,nonatomic,copy) NSArray * _enablingAnimationImages;              //@synthesize _enablingAnimationImages=__enablingAnimationImages - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                             //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long irisMode;                                                                //@synthesize irisMode=_irisMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                   //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(id)irisButtonWithLayoutStyle:(long long)arg1 ;
+(double)enablingAnimationDuration;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(UIImage *)_baseImage;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(void)setIrisMode:(long long)arg1 ;
-(void)_updateForLayoutStyle;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(UIImageView *)_padBackgroundView;
-(long long)irisMode;
-(void)interruptEnablingAnimation;
-(void)preloadEnablingAnimation;
-(void)performEnablingAnimation;
-(void)_updateTintColorForMode:(long long)arg1 ;
-(void)_commonCAMIrisButtonConfiguration;
-(BOOL)_shouldLoadEnablingAnimationImages;
-(id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1 ;
-(void)_setEnablingAnimationImages:(id)arg1 ;
-(NSArray *)_enablingAnimationImages;
-(void)_ensureEnablingAnimationImages;
@end

