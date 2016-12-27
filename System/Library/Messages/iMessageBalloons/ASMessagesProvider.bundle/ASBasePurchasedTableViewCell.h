/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIItemTableViewCell.h>

@class ASPurchasedCellLayout;

@interface ASBasePurchasedTableViewCell : SKUIItemTableViewCell {

	ASPurchasedCellLayout* _layout;

}

@property (nonatomic,readonly) ASPurchasedCellLayout * layout;              //@synthesize layout=_layout - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(ASPurchasedCellLayout *)layout;
-(void)configureForItem:(id)arg1 clientContext:(id)arg2 rowIndex:(long long)arg3 ;
@end

