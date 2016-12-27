/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIView, UIButton, SBUICallToActionLabel, NSString;

@interface SBDashBoardSetupView : UIView {

	UILabel* _titleLabel;
	int _viewState;
	UIView* _activationInfoView;
	UIButton* _infoButton;
	SBUICallToActionLabel* _callToActionLabel;
	NSString* _titleString;
	NSString* _language;
	UIView* _regulatoryInfoView;

}

@property (nonatomic,retain) NSString * titleString;                                 //@synthesize titleString=_titleString - In the implementation block
@property (assign,nonatomic) int viewState;                                          //@synthesize viewState=_viewState - In the implementation block
@property (assign,nonatomic) NSString * language;                                    //@synthesize language=_language - In the implementation block
@property (nonatomic,retain) UIButton * infoButton;                                  //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,retain) UIView * activationInfoView;                            //@synthesize activationInfoView=_activationInfoView - In the implementation block
@property (nonatomic,retain) UIView * regulatoryInfoView;                            //@synthesize regulatoryInfoView=_regulatoryInfoView - In the implementation block
@property (nonatomic,retain) SBUICallToActionLabel * callToActionLabel;              //@synthesize callToActionLabel=_callToActionLabel - In the implementation block
-(SBUICallToActionLabel *)callToActionLabel;
-(void)setTitleString:(id)arg1 forLanguage:(id)arg2 ;
-(void)setActivationInfoView:(UIView *)arg1 ;
-(void)setRegulatoryInfoView:(UIView *)arg1 ;
-(void)setCallToActionLabel:(SBUICallToActionLabel *)arg1 ;
-(void)_adjustTitleVisibilityForInfoViews;
-(void)_toggleViewState;
-(UIView *)activationInfoView;
-(UIView *)regulatoryInfoView;
-(void)_setLanguage:(id)arg1 forLabel:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIButton *)infoButton;
-(void)setInfoButton:(UIButton *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(int)viewState;
-(void)setViewState:(int)arg1 ;
-(void)_setupConstraints;
@end

