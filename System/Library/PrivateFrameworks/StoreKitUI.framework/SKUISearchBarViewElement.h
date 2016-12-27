/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUIInputViewElement.h>

@class NSString, SKUIViewElementText;

@interface SKUISearchBarViewElement : SKUIInputViewElement {

	NSString* _accessoryText;
	SKUIViewElementText* _defaultText;
	NSString* _placeholderString;
	NSString* _searchHintsURLString;
	NSString* _trendingSearchURLString;

}

@property (nonatomic,readonly) NSString * accessoryText;                        //@synthesize accessoryText=_accessoryText - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * defaultText;               //@synthesize defaultText=_defaultText - In the implementation block
@property (nonatomic,readonly) NSString * placeholderString;                    //@synthesize placeholderString=_placeholderString - In the implementation block
@property (nonatomic,readonly) NSString * searchHintsURLString;                 //@synthesize searchHintsURLString=_searchHintsURLString - In the implementation block
@property (nonatomic,readonly) NSString * trendingSearchURLString;              //@synthesize trendingSearchURLString=_trendingSearchURLString - In the implementation block
-(unsigned long long)elementType;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(NSString *)accessoryText;
-(SKUIViewElementText *)defaultText;
-(NSString *)placeholderString;
-(NSString *)searchHintsURLString;
-(NSString *)trendingSearchURLString;
-(long long)pageComponentType;
@end

