/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <SiriUI/SiriUIReusableView.h>

@protocol SiriUIReusableView;
@class SiriUIKeyline, SiriUIContentButton, UIView, UILabel, UICollectionReusableView, SiriUISnippetViewController, NSString;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {

	SiriUIKeyline* _bottomKeyline;
	SiriUIContentButton* _snippetPunchOutButton;
	UIView* _snippetBackgroundView;
	UIView* _clippingContainerView;
	UILabel* _cancelledLabel;
	BOOL _cellIsUsingPlatterStyle;
	UICollectionReusableView*<SiriUIReusableView> _headerView;
	UICollectionReusableView*<SiriUIReusableView> _footerView;
	UICollectionReusableView*<SiriUIReusableView> _transparentHeaderView;
	UICollectionReusableView*<SiriUIReusableView> _transparentFooterView;
	SiriUISnippetViewController* _snippetViewController;
	UIEdgeInsets _snippetEdgeInsets;

}

@property (assign,setter=_setSnippetEdgeInsets:,getter=_snippetEdgeInsets,nonatomic) UIEdgeInsets snippetEdgeInsets;              //@synthesize snippetEdgeInsets=_snippetEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;                                          //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(double)defaultHeight;
+(id)reuseIdentifier;
+(id)elementKind;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)_setHeaderView:(id)arg1 ;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)setShowBackgroundView:(BOOL)arg1 ;
-(void)_snippetPunchOutButtonTapped:(id)arg1 ;
-(void)_configureSubviewsForCurrentInset;
-(double)_heightForFooterView;
-(double)_heightForTransparentHeaderView;
-(double)_heightForTransparentFooterView;
-(double)_heightForHeaderView;
-(UIEdgeInsets)_snippetEdgeInsets;
-(void)_setFooterView:(id)arg1 ;
-(void)_setTransparentHeaderView:(id)arg1 ;
-(void)_setTransparentFooterView:(id)arg1 ;
-(void)_setSnippetEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)animateSnippetCancellationWithCompletion:(/*^block*/id)arg1 ;
-(void)animateSnippetConfirmationWithCompletion:(/*^block*/id)arg1 ;
@end

