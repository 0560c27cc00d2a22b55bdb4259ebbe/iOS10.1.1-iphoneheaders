/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>

@class SKUIGiftConfiguration, SKUIGift, UIImageView, SKUIGiftItemView, UILabel, SKUIGiftTheme, UIImage;

@interface SKUIGiftThemeCollectionViewCell : UICollectionViewCell {

	SKUIGiftConfiguration* _giftConfiguration;
	SKUIGift* _gift;
	UIImageView* _headerImageView;
	SKUIGiftItemView* _itemView;
	UILabel* _messageLabel;
	UILabel* _priceLabel;
	UILabel* _senderNameLabel;
	UILabel* _senderNameLabelLabel;
	SKUIGiftTheme* _theme;

}

@property (nonatomic,retain) SKUIGiftConfiguration * giftConfiguration;              //@synthesize giftConfiguration=_giftConfiguration - In the implementation block
@property (nonatomic,retain) SKUIGift * gift;                                        //@synthesize gift=_gift - In the implementation block
@property (nonatomic,retain) SKUIGiftTheme * theme;                                  //@synthesize theme=_theme - In the implementation block
@property (nonatomic,retain) UIImage * itemImage; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)_setMessage:(id)arg1 ;
-(SKUIGift *)gift;
-(SKUIGiftTheme *)theme;
-(void)setTheme:(SKUIGiftTheme *)arg1 ;
-(SKUIGiftConfiguration *)giftConfiguration;
-(id)_itemView;
-(void)setGift:(SKUIGift *)arg1 ;
-(void)reloadThemeHeaderImage;
-(void)setGiftConfiguration:(SKUIGiftConfiguration *)arg1 ;
-(void)_setHeaderImage:(id)arg1 ;
-(void)_setSenderName:(id)arg1 ;
-(void)_setPrice:(id)arg1 ;
-(void)_reloadItemView;
-(UIImage *)itemImage;
-(void)setItemImage:(UIImage *)arg1 ;
@end

