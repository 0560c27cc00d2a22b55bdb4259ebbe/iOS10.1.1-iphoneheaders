/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKTitledBuddyHeaderViewDelegate.h>

@class UIScrollView, UIStackView, UIVisualEffectView, HKTitledLogoBuddyHeaderView, NSArray, UIActivityIndicatorView;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {

	UIScrollView* _scrollView;
	UIStackView* _bodyStackView;
	UIVisualEffectView* _anchoredButtonContainerView;
	UIStackView* _containerStackView;
	HKTitledLogoBuddyHeaderView* _header;
	NSArray* _buttons;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
+(id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(UIEdgeInsets)arg2 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(id)headerView;
-(NSArray *)buttons;
-(id)titleString;
-(id)titleImage;
-(UIActivityIndicatorView *)loadingIndicator;
-(id)_createHeaderView;
-(id)subsequentViews;
-(id)bottomAnchoredButtons;
-(void)_createAnchoredButtons;
-(BOOL)shouldHideNavigationBar;
-(id)linkButtonTitle;
-(id)bodyString;
-(void)linkButtonTapped:(id)arg1 ;
-(void)_anchoredButtonTapped:(id)arg1 ;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
-(void)reloadViews;
@end
