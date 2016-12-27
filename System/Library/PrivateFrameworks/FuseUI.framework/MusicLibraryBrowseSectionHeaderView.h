/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UITableViewHeaderFooterView.h>
#import <libobjc.A.dylib/MusicActionableHeaderViewDelegate.h>

@protocol MusicLibraryBrowseSectionHeaderViewDelegate;
@class MusicActionableHeaderView, _UIBackdropView, UIView, NSString, UIColor;

@interface MusicLibraryBrowseSectionHeaderView : UITableViewHeaderFooterView <MusicActionableHeaderViewDelegate> {

	MusicActionableHeaderView* _actionableHeaderView;
	_UIBackdropView* _floatingBackdropView;
	UIView* _hairlineView;
	BOOL _shouldSkipLayout;
	NSString* _backdropGroupName;
	UIColor* _backgroundColorForNonFloatingState;
	long long _hairlineStyleForNonFloatingState;
	UIColor* _headerTextColorForNonFloatingState;
	double _topContentInset;
	id<MusicLibraryBrowseSectionHeaderViewDelegate> _delegate;

}

@property (assign,getter=isActionable,nonatomic) BOOL actionable; 
@property (nonatomic,copy) NSString * backdropGroupName;                                                   //@synthesize backdropGroupName=_backdropGroupName - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColorForNonFloatingState;                                 //@synthesize backgroundColorForNonFloatingState=_backgroundColorForNonFloatingState - In the implementation block
@property (assign,nonatomic) long long hairlineStyleForNonFloatingState;                                   //@synthesize hairlineStyleForNonFloatingState=_hairlineStyleForNonFloatingState - In the implementation block
@property (nonatomic,copy) NSString * headerText; 
@property (nonatomic,retain) UIColor * headerTextColorForNonFloatingState;                                 //@synthesize headerTextColorForNonFloatingState=_headerTextColorForNonFloatingState - In the implementation block
@property (assign,nonatomic) double topContentInset;                                                       //@synthesize topContentInset=_topContentInset - In the implementation block
@property (assign,nonatomic,__weak) id<MusicLibraryBrowseSectionHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(SCD_Struct_Mu6)_actionableHeaderMetricsForDisplayScale:(double)arg1 ;
+(double)heightForTraitCollection:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MusicLibraryBrowseSectionHeaderViewDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id<MusicLibraryBrowseSectionHeaderViewDelegate>)delegate;
-(void)layoutBelowIfNeeded;
-(void)setFloating:(BOOL)arg1 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)headerText;
-(void)setHeaderText:(NSString *)arg1 ;
-(NSString *)backdropGroupName;
-(void)setBackdropGroupName:(NSString *)arg1 ;
-(BOOL)isActionable;
-(void)music_inheritedLayoutInsetsDidChange;
-(void)_setupForCurrentFloatingState;
-(void)setActionable:(BOOL)arg1 ;
-(void)actionableHeaderViewDidSelectButton:(id)arg1 ;
-(void)setBackgroundColorForNonFloatingState:(UIColor *)arg1 ;
-(void)setHairlineStyleForNonFloatingState:(long long)arg1 ;
-(void)setTopContentInset:(double)arg1 ;
-(UIColor *)backgroundColorForNonFloatingState;
-(long long)hairlineStyleForNonFloatingState;
-(UIColor *)headerTextColorForNonFloatingState;
-(void)setHeaderTextColorForNonFloatingState:(UIColor *)arg1 ;
-(double)topContentInset;
@end

