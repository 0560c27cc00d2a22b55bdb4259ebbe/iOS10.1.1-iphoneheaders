/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class UIImage, NSString, NSURL, NSAttributedString;

@interface SKUIBadgeViewElement : SKUIViewElement {

	UIImage* _fallbackImage;
	BOOL _hasValidFallbackImage;
	NSString* _resourceName;
	CGSize _size;
	NSString* _text;
	NSURL* _url;

}

@property (nonatomic,readonly) NSAttributedString * attributedString; 
@property (nonatomic,readonly) long long badgeType; 
@property (nonatomic,readonly) UIImage * fallbackImage;                            //@synthesize fallbackImage=_fallbackImage - In the implementation block
@property (nonatomic,readonly) NSString * resourceName;                            //@synthesize resourceName=_resourceName - In the implementation block
@property (nonatomic,readonly) CGSize size;                                        //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                                        //@synthesize url=_url - In the implementation block
-(CGSize)size;
-(NSURL *)URL;
-(NSAttributedString *)attributedString;
-(NSString *)resourceName;
-(id)accessibilityText;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(UIImage *)fallbackImage;
-(long long)badgeType;
@end

