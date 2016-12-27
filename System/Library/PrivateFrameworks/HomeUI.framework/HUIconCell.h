/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>
#import <libobjc.A.dylib/HUDisableableCellProtocol.h>

@class HFItem, UIColor, NSArray, UIView, HUIconView, UILabel, NSString;

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol> {

	BOOL _disabled;
	BOOL _hideIcon;
	BOOL _iconForegroundColorFollowsTintColor;
	HFItem* _item;
	UIColor* _iconForegroundColor;
	double _iconAlpha;
	unsigned long long _iconDisplayStyle;
	NSArray* _dynamicConstraints;
	UIView* _containerView;
	UIView* _iconContainerView;
	HUIconView* _iconView;
	CGSize _iconSize;

}

@property (nonatomic,retain) NSArray * dynamicConstraints;                          //@synthesize dynamicConstraints=_dynamicConstraints - In the implementation block
@property (nonatomic,retain) UIView * containerView;                                //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,retain) UIView * iconContainerView;                            //@synthesize iconContainerView=_iconContainerView - In the implementation block
@property (nonatomic,retain) HUIconView * iconView;                                 //@synthesize iconView=_iconView - In the implementation block
@property (assign,nonatomic) BOOL hideIcon;                                         //@synthesize hideIcon=_hideIcon - In the implementation block
@property (nonatomic,retain) UIColor * iconForegroundColor;                         //@synthesize iconForegroundColor=_iconForegroundColor - In the implementation block
@property (assign,nonatomic) BOOL iconForegroundColorFollowsTintColor;              //@synthesize iconForegroundColorFollowsTintColor=_iconForegroundColorFollowsTintColor - In the implementation block
@property (assign,nonatomic) double iconAlpha;                                      //@synthesize iconAlpha=_iconAlpha - In the implementation block
@property (assign,nonatomic) CGSize iconSize;                                       //@synthesize iconSize=_iconSize - In the implementation block
@property (assign,nonatomic) unsigned long long iconDisplayStyle;                   //@synthesize iconDisplayStyle=_iconDisplayStyle - In the implementation block
@property (nonatomic,readonly) UILabel * textLabel; 
@property (nonatomic,readonly) UILabel * detailTextLabel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                         //@synthesize item=_item - In the implementation block
@property (assign,getter=isDisabled,nonatomic) BOOL disabled;                       //@synthesize disabled=_disabled - In the implementation block
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UIView *)containerView;
-(HFItem *)item;
-(void)setContainerView:(UIView *)arg1 ;
-(void)updateConstraints;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg1 ;
-(void)setItem:(HFItem *)arg1 ;
-(void)setIconSize:(CGSize)arg1 ;
-(BOOL)isDisabled;
-(CGSize)iconSize;
-(HUIconView *)iconView;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)setHideIcon:(BOOL)arg1 ;
-(void)_createIconViews;
-(id)_immutableVerticalConstraintsForContentSubview:(id)arg1 ;
-(void)setIconForegroundColor:(UIColor *)arg1 ;
-(void)setIconForegroundColorFollowsTintColor:(BOOL)arg1 ;
-(void)setIconAlpha:(double)arg1 ;
-(void)setIconDisplayStyle:(unsigned long long)arg1 ;
-(void)_updateIcon;
-(UIView *)iconContainerView;
-(NSArray *)dynamicConstraints;
-(void)setDynamicConstraints:(NSArray *)arg1 ;
-(unsigned long long)iconDisplayStyle;
-(BOOL)iconForegroundColorFollowsTintColor;
-(UIColor *)iconForegroundColor;
-(double)iconAlpha;
-(BOOL)hideIcon;
-(void)setIconContainerView:(UIView *)arg1 ;
-(void)setIconView:(HUIconView *)arg1 ;
@end

