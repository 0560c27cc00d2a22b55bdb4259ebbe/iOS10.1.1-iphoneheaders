/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUISettingDescriptionView.h>

@class UIActivityIndicatorView, UIImageView, UILabel, SKUIViewElementLayoutContext, SKUISettingsFamilyViewElement;

@interface SKUIFamilySettingDescriptionView : SKUISettingDescriptionView {

	UIActivityIndicatorView* _activityIndicator;
	UIImageView* _iconImageView;
	UILabel* _labelView;
	SKUIViewElementLayoutContext* _layoutContext;
	SKUISettingsFamilyViewElement* _viewElement;
	long long _viewState;

}
+(BOOL)prefetchResourcesForSettingDescription:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForSettingDescription:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 settingDescription:(id)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)_setViewState:(long long)arg1 ;
-(void)_layoutWithActivityIndicator;
-(void)_layoutWithLockup;
-(id)_attributedStringForKey:(id)arg1 ;
-(id)_attributedStringForViewState;
-(void)reloadWithSettingDescription:(id)arg1 width:(double)arg2 context:(id)arg3 ;
@end

