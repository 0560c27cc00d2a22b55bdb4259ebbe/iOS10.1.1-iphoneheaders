/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class NSString, SKUIItem;

@interface SKUIGiftTemplateViewElement : SKUIViewElement {

	long long _giftType;
	NSString* _productBuyParams;
	long long _productItemIdentifier;

}

@property (nonatomic,readonly) long long giftType;                  //@synthesize giftType=_giftType - In the implementation block
@property (nonatomic,readonly) SKUIItem * productItem; 
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)giftType;
-(SKUIItem *)productItem;
@end
