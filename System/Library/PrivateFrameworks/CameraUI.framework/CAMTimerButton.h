/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraUI/CAMExpandableMenuButton.h>

@protocol CAMTimerButtonDelegate;
@class UIImageView;

@interface CAMTimerButton : CAMExpandableMenuButton {

	BOOL _hideOffWhenCollapsed;
	id<CAMTimerButtonDelegate> _delegate;
	UIImageView* __glyphView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;                              //@synthesize _glyphView=__glyphView - In the implementation block
@property (assign,nonatomic,__weak) id<CAMTimerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long duration; 
@property (assign,nonatomic) BOOL hideOffWhenCollapsed;                               //@synthesize hideOffWhenCollapsed=_hideOffWhenCollapsed - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<CAMTimerButtonDelegate>)arg1 ;
-(void)reloadData;
-(id<CAMTimerButtonDelegate>)delegate;
-(long long)duration;
-(void)setDuration:(long long)arg1 ;
-(id)headerView;
-(id)initWithLayoutStyle:(long long)arg1 ;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setHideOffWhenCollapsed:(BOOL)arg1 ;
-(id)_currentGlyphImage;
-(void)_commonCAMTimerButtonInitialization;
-(void)setDuration:(long long)arg1 animated:(BOOL)arg2 ;
-(UIImageView *)_glyphView;
-(void)_updateCurrentGlyphImage;
-(BOOL)hideOffWhenCollapsed;
-(double)padHeaderViewContentInsetLeft;
-(id)shownIndexesWhileCollapsed;
@end

