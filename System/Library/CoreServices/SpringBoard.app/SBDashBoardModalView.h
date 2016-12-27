/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBDashBoardViewBase.h>
#import <SpringBoard/SBLockScreenModalView.h>

@protocol SBDashBoardModalViewDelegate;
@class _UILegibilitySettings, NSString, UIImage, UILabel, UIImageView, SBDashBoardModalButton, UIButton, SBDashBoardStatusTextViewController;

@interface SBDashBoardModalView : SBDashBoardViewBase <SBLockScreenModalView> {

	id<SBDashBoardModalViewDelegate> _delegate;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UIImageView* _imageView;
	SBDashBoardModalButton* _primaryActionButton;
	UIButton* _secondaryActionButton;
	NSString* _overrideFooterText;
	SBDashBoardStatusTextViewController* _statusTextViewController;
	_UILegibilitySettings* _legibilitySettings;
	BOOL _showsStatusText;
	BOOL _needsTitleConstraints;
	BOOL _needsSubTitleConstraints;
	BOOL _needsPrimaryActionConstraints;
	BOOL _needsSecondaryActionConstraints;
	BOOL _needsImageConstraints;
	BOOL _showsDateView;

}

@property (setter=_setTitleLabel:,getter=_titleLabel,nonatomic,retain) UILabel * titleLabel;                                                        //@synthesize titleLabel=_titleLabel - In the implementation block
@property (setter=_setSubtitleLabel:,getter=_subtitleLabel,nonatomic,retain) UILabel * subtitleLabel;                                               //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (setter=_setSecondaryActionButton:,getter=_secondaryActionButton,nonatomic,retain) UIButton * secondaryActionButton;                      //@synthesize secondaryActionButton=_secondaryActionButton - In the implementation block
@property (setter=_setPrimaryActionButton:,getter=_primaryActionButton,nonatomic,retain) SBDashBoardModalButton * primaryActionButton;              //@synthesize primaryActionButton=_primaryActionButton - In the implementation block
@property (setter=_setImageView:,getter=_imageView,nonatomic,retain) UIImageView * imageView;                                                       //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic,__weak) id<SBDashBoardModalViewDelegate> delegate;                                                                      //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDateView;                                                                                                    //@synthesize showsDateView=_showsDateView - In the implementation block
@property (assign,nonatomic) BOOL showsStatusText;                                                                                                  //@synthesize showsStatusText=_showsStatusText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                                            //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,copy) NSString * titleText; 
@property (nonatomic,copy) NSString * subtitleText; 
@property (nonatomic,copy) NSString * primaryActionButtonText; 
@property (nonatomic,copy) NSString * secondaryActionButtonText; 
@property (nonatomic,copy) NSString * footerText; 
@property (nonatomic,retain) UIImage * image; 
-(void)setShowsDateView:(BOOL)arg1 ;
-(void)setShowsStatusText:(BOOL)arg1 ;
-(id)_primaryActionFont;
-(void)_setPrimaryActionButton:(id)arg1 ;
-(id)_secondaryActionFont;
-(void)_setSecondaryActionButton:(id)arg1 ;
-(void)_positionBottomElementWithLayoutAnchor:(id)arg1 lessThanOrEqual:(BOOL)arg2 ;
-(id)_primaryActionButton;
-(id)_secondaryActionButton;
-(NSString *)primaryActionButtonText;
-(void)setPrimaryActionButtonText:(NSString *)arg1 ;
-(NSString *)secondaryActionButtonText;
-(void)setSecondaryActionButtonText:(NSString *)arg1 ;
-(BOOL)showsStatusText;
-(BOOL)showsDateView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(void)setDelegate:(id<SBDashBoardModalViewDelegate>)arg1 ;
-(id<SBDashBoardModalViewDelegate>)delegate;
-(UIImage *)image;
-(void)updateConstraints;
-(id)_imageView;
-(id)_titleLabel;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setTitleText:(NSString *)arg1 ;
-(id)_titleFont;
-(NSString *)titleText;
-(id)_subtitleFont;
-(void)_buttonTapped:(id)arg1 ;
-(id)_subtitleLabel;
-(void)_setSubtitleLabel:(id)arg1 ;
-(void)_setTitleLabel:(id)arg1 ;
-(void)_setImageView:(id)arg1 ;
-(void)setSubtitleText:(NSString *)arg1 ;
-(NSString *)footerText;
-(void)setFooterText:(NSString *)arg1 ;
-(NSString *)subtitleText;
@end

