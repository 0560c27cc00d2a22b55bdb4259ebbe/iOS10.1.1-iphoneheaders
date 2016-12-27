/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIView.h>

@protocol ADPrerollTopBarDelegate;
@class UIStatusBar, ADPrerollButton, ADProgressView;

@interface ADPrerollTopBar : UIView {

	id<ADPrerollTopBarDelegate> _delegate;
	BOOL _isFullscreen;
	BOOL _layoutForExpandedSize;
	UIStatusBar* _statusBar;
	ADPrerollButton* _doneButton;
	ADProgressView* _progressView;

}

@property (nonatomic,retain) UIStatusBar * statusBar;                                  //@synthesize statusBar=_statusBar - In the implementation block
@property (nonatomic,retain) ADPrerollButton * doneButton;                             //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) ADProgressView * progressView;                            //@synthesize progressView=_progressView - In the implementation block
@property (assign,nonatomic,__weak) id<ADPrerollTopBarDelegate> delegate; 
@property (assign,nonatomic) BOOL isFullscreen;                                        //@synthesize isFullscreen=_isFullscreen - In the implementation block
@property (assign,nonatomic) BOOL layoutForExpandedSize;                               //@synthesize layoutForExpandedSize=_layoutForExpandedSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<ADPrerollTopBarDelegate>)arg1 ;
-(void)dealloc;
-(id<ADPrerollTopBarDelegate>)delegate;
-(UIStatusBar *)statusBar;
-(void)setStatusBar:(UIStatusBar *)arg1 ;
-(void)setDoneButton:(ADPrerollButton *)arg1 ;
-(ADPrerollButton *)doneButton;
-(BOOL)isFullscreen;
-(void)setIsFullscreen:(BOOL)arg1 ;
-(void)_doneButtonTapped:(id)arg1 ;
-(ADProgressView *)progressView;
-(void)setProgressView:(ADProgressView *)arg1 ;
-(double)requiredHeight;
-(void)setElapsedTime:(double)arg1 totalTime:(double)arg2 ;
-(void)_scaleToFillButtonTapped:(id)arg1 ;
-(void)_scaleToFitButtonTapped:(id)arg1 ;
-(void)setLayoutForExpandedSize:(BOOL)arg1 ;
-(BOOL)layoutForExpandedSize;
@end
