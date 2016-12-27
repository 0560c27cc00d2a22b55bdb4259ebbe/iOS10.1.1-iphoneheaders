/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol PKPassFooterContentViewDelegate;
@class PKPass, PKLinkedAppIconView, UIButton, UIView, PKPaymentPass;

@interface PKPassFooterContentView : UIView {

	BOOL _isVisibleAsFooter;
	BOOL _isPassAuthorized;
	long long _style;
	id<PKPassFooterContentViewDelegate> _delegate;
	PKPass* _pass;
	PKLinkedAppIconView* _appIconView;
	UIButton* _infoButton;
	UIView* _bottomRule;

}

@property (nonatomic,readonly) long long style;                                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) id<PKPassFooterContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKPass * pass;                                           //@synthesize pass=_pass - In the implementation block
@property (nonatomic,readonly) PKPaymentPass * paymentPass; 
@property (nonatomic,readonly) PKLinkedAppIconView * appIconView;                       //@synthesize appIconView=_appIconView - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton;                                   //@synthesize infoButton=_infoButton - In the implementation block
@property (nonatomic,readonly) UIView * bottomRule;                                     //@synthesize bottomRule=_bottomRule - In the implementation block
@property (nonatomic,readonly) BOOL isVisibleAsFooter;                                  //@synthesize isVisibleAsFooter=_isVisibleAsFooter - In the implementation block
@property (nonatomic,readonly) BOOL isPassAuthorized;                                   //@synthesize isPassAuthorized=_isPassAuthorized - In the implementation block
-(void)layoutSubviews;
-(void)setDelegate:(id<PKPassFooterContentViewDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPassFooterContentViewDelegate>)delegate;
-(long long)style;
-(UIButton *)infoButton;
-(PKPass *)pass;
-(PKPaymentPass *)paymentPass;
-(BOOL)isPassAuthorized;
-(void)willBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)willBecomeHiddenAnimated:(BOOL)arg1 ;
-(void)didBecomeVisibleAnimated:(BOOL)arg1 ;
-(void)didBecomeHiddenAnimated:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 pass:(id)arg2 ;
-(UIView *)bottomRule;
-(PKLinkedAppIconView *)appIconView;
-(void)_infoButtonPressed:(id)arg1 ;
-(double)_bottomRulePadding;
-(BOOL)isVisibleAsFooter;
@end

