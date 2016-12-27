/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIPageComponent.h>

@class NSMutableArray, SKUIExpandViewElement;

@interface SKUIExpandPageComponent : SKUIPageComponent {

	NSMutableArray* _childComponents;
	SKUIExpandViewElement* _viewElement;

}

@property (nonatomic,readonly) SKUIExpandViewElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
-(long long)componentType;
-(SKUIExpandViewElement *)viewElement;
-(id)initWithViewElement:(id)arg1 ;
-(id)metricsElementName;
-(id)childComponentForIndex:(long long)arg1 ;
-(id)childComponents;
@end

