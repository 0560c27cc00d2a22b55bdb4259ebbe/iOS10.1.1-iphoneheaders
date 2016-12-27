/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewReuseView.h>

@class NSArray;

@interface SKUINavigationBarMenusView : SKUIViewReuseView {

	SEL _buttonAction;
	id _buttonTarget;
	UIEdgeInsets _contentInset;
	NSArray* _menuViewElements;

}

@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
+(id)_attributedStringWithMenuItem:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)reloadWithMenus:(id)arg1 width:(long long)arg2 context:(id)arg3 ;
-(void)setButtonTarget:(id)arg1 action:(SEL)arg2 ;
@end

