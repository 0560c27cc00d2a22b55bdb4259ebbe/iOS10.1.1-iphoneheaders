/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIButton;

@interface PLCropOverlayPreviewBottomBar : UIView {

	long long _backgroundStyle;
	UIButton* _cancelButton;
	UIButton* _doneButton;
	UIButton* _playbackButton;

}

@property (assign,nonatomic) long long backgroundStyle;                //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (nonatomic,readonly) UIButton * cancelButton;                //@synthesize cancelButton=_cancelButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                  //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIButton * playbackButton;              //@synthesize playbackButton=_playbackButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(long long)backgroundStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(UIButton *)cancelButton;
-(UIButton *)doneButton;
-(void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(UIButton *)playbackButton;
-(void)_updateBackgroundStyle;
-(void)_commonPLCropOverlayEditPhotoBottomBarInitialization;
@end

