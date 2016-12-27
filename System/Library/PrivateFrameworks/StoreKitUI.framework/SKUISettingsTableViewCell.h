/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UIImageView, SKUISettingDescriptionView;

@interface SKUISettingsTableViewCell : UITableViewCell {

	UIEdgeInsets _contentInset;
	UIImageView* _disclosureChevron;
	BOOL _hasDisclosureChevron;
	SKUISettingDescriptionView* _settingDescriptionView;

}

@property (nonatomic,readonly) SKUISettingDescriptionView * settingDescriptionView; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(void)displaySettingDescriptionView:(id)arg1 ;
-(SKUISettingDescriptionView *)settingDescriptionView;
@end

