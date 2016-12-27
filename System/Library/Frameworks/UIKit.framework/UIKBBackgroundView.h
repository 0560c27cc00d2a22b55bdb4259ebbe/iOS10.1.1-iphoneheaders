/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBSplitImageView.h>
#import <UIKit/UIKBCacheableView.h>

@class NSString, UIKBTree, UITextInputTraits, NSObject, UIKBRenderConfig;

@interface UIKBBackgroundView : UIKBSplitImageView <UIKBCacheableView> {

	UIKBTree* _keyplane;
	UITextInputTraits* _inputTraits;
	int _visualStyle;
	NSObject* _geometryCacheKey;
	CGRect _splitLeftRect;
	CGRect _splitLeftCacheRect;
	CGRect _splitRightRect;
	CGRect _splitRightCacheRect;
	int _topCorners;
	BOOL _isSplit;
	BOOL _centerFilled;
	BOOL _hasCandidateKeys;
	UIKBRenderConfig* _renderConfig;

}

@property (nonatomic,retain) NSObject * geometryCacheKey;                  //@synthesize geometryCacheKey=_geometryCacheKey - In the implementation block
@property (nonatomic,retain) UIKBRenderConfig * renderConfig;              //@synthesize renderConfig=_renderConfig - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * cacheKey; 
@property (nonatomic,readonly) BOOL cacheDeferable; 
@property (nonatomic,readonly) double cachedWidth; 
@property (nonatomic,readonly) BOOL keepNonPersistent; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIKBRenderConfig *)renderConfig;
-(void)setRenderConfig:(UIKBRenderConfig *)arg1 ;
-(BOOL)_canDrawContent;
-(void)displayLayer:(id)arg1 ;
-(void)refreshStyleForKeyplane:(id)arg1 inputTraits:(id)arg2 ;
-(void)setGeometryCacheKey:(NSObject *)arg1 ;
-(NSString *)cacheKey;
-(double)cachedWidth;
-(id)cacheKeysForRenderFlags:(id)arg1 ;
-(void)drawContentsOfRenderers:(id)arg1 ;
-(BOOL)cacheDeferable;
-(BOOL)keepNonPersistent;
-(NSObject *)geometryCacheKey;
@end

