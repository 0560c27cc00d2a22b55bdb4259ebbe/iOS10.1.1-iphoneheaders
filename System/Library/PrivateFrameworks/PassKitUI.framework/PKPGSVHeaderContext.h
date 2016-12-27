/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class UIView;

@interface PKPGSVHeaderContext : NSObject {

	UIView* _headerView;
	UIView* _subheaderView;
	UIEdgeInsets _headerMargins;
	UIEdgeInsets _subheaderMargins;

}

@property (nonatomic,readonly) UIView * headerView;                      //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets headerMargins;                 //@synthesize headerMargins=_headerMargins - In the implementation block
@property (nonatomic,readonly) UIView * subheaderView;                   //@synthesize subheaderView=_subheaderView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets subheaderMargins;              //@synthesize subheaderMargins=_subheaderMargins - In the implementation block
@property (nonatomic,readonly) double totalHeight; 
@property (nonatomic,readonly) double headerHeight; 
+(id)createUpdatedHeaderContextForGroupStackView:(id)arg1 passType:(unsigned long long)arg2 currentContext:(id)arg3 allowSubheader:(BOOL)arg4 ;
+(void)animateAppearanceForLayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
+(void)animateDisappearanceForLayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(UIView *)headerView;
-(double)headerHeight;
-(double)_headerHeight;
-(UIView *)subheaderView;
-(id)initWithHeaderView:(id)arg1 headerMargins:(UIEdgeInsets)arg2 subheaderView:(id)arg3 subheaderMargins:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)headerMargins;
-(UIEdgeInsets)subheaderMargins;
-(CGRect)boundsForHeaderViewInContainerFrame:(CGRect)arg1 ;
-(CGRect)boundsForSubheaderViewInContainerFrame:(CGRect)arg1 ;
-(double)_subheaderHeight;
-(CGPoint)positionForHeaderViewInContainerFrame:(CGRect)arg1 ;
-(CGPoint)positionForSubheaderViewInContainerFrame:(CGRect)arg1 ;
-(double)totalHeight;
-(void)setHeaderMargins:(UIEdgeInsets)arg1 ;
-(void)setSubheaderMargins:(UIEdgeInsets)arg1 ;
@end

