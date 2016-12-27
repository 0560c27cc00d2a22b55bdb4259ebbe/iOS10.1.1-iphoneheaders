/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewElement.h>

@class NSString, NSURL, SKUIImageViewElementCacheKey, UIColor;

@interface SKUIImageViewElement : SKUIViewElement {

	NSString* _alt;
	NSString* _entityResourceName;
	NSURL* _entityURL;
	char _enabled;
	BOOL _hasValidEntityValues;
	SKUIImageViewElementCacheKey* _resourceCacheKey;
	NSString* _resourceName;
	CGSize _shadowOffset;
	double _shadowRadius;
	UIColor* _shadowColor;
	CGSize _size;
	SKUIImageViewElementCacheKey* _transientResourceCacheKey;
	NSURL* _url;
	float _layerShadowOpacity;
	double _layerShadowRadius;
	CGSize _layerShadowOffset;

}

@property (assign,nonatomic) float layerShadowOpacity;                    //@synthesize layerShadowOpacity=_layerShadowOpacity - In the implementation block
@property (assign,nonatomic) CGSize layerShadowOffset;                    //@synthesize layerShadowOffset=_layerShadowOffset - In the implementation block
@property (assign,nonatomic) double layerShadowRadius;                    //@synthesize layerShadowRadius=_layerShadowRadius - In the implementation block
@property (assign,nonatomic) CGSize shadowOffset;                         //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (assign,nonatomic) double shadowRadius;                         //@synthesize shadowRadius=_shadowRadius - In the implementation block
@property (nonatomic,retain) UIColor * shadowColor;                       //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) id resourceCacheKey; 
@property (nonatomic,readonly) id transientResourceCacheKey;              //@synthesize transientResourceCacheKey=_transientResourceCacheKey - In the implementation block
@property (nonatomic,readonly) NSString * resourceName; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSURL * URL;                               //@synthesize url=_url - In the implementation block
-(void)setShadowColor:(UIColor *)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(CGSize)size;
-(BOOL)isEnabled;
-(NSURL *)URL;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(double)shadowRadius;
-(NSString *)resourceName;
-(id)accessibilityText;
-(id)resourceCacheKey;
-(BOOL)rendersWithParallax;
-(BOOL)rendersWithPerspective;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(long long)pageComponentType;
-(void)entityValueProviderDidChange;
-(void)_loadEntityValuesIfNeeded;
-(id)uniquingMapKey;
-(id)entityValueProperties;
-(id)transientResourceCacheKey;
-(float)layerShadowOpacity;
-(void)setLayerShadowOpacity:(float)arg1 ;
-(CGSize)layerShadowOffset;
-(void)setLayerShadowOffset:(CGSize)arg1 ;
-(double)layerShadowRadius;
-(void)setLayerShadowRadius:(double)arg1 ;
@end

