/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBRenderEffect.h>

@class UIKBGradient, NSString;

@interface UIKBEdgeEffect : NSObject <UIKBRenderEffect> {

	NSString* _colorName;
	unsigned long long _edges;
	double _weight;
	UIKBGradient* _gradient;
	double _opacity;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) unsigned long long edges;              //@synthesize edges=_edges - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                   //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIKBGradient * gradient;               //@synthesize gradient=_gradient - In the implementation block
@property (assign,nonatomic) double opacity;                        //@synthesize opacity=_opacity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL renderUnder; 
@property (nonatomic,readonly) SEL renderSelector; 
@property (assign,nonatomic) double weight;                         //@synthesize weight=_weight - In the implementation block
@property (nonatomic,readonly) BOOL usesRGBColors; 
+(id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 inset:(double)arg3 weight:(double)arg4 ;
+(id)effectWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(void)setEdges:(unsigned long long)arg1 ;
-(BOOL)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setGradient:(UIKBGradient *)arg1 ;
-(unsigned long long)edges;
-(UIKBGradient *)gradient;
-(double)weight;
-(BOOL)usesRGBColors;
-(id)initWithColor:(id)arg1 edges:(unsigned long long)arg2 insets:(UIEdgeInsets)arg3 weight:(double)arg4 ;
-(UIEdgeInsets)insets;
-(BOOL)renderUnder;
-(SEL)renderSelector;
-(void)setWeight:(double)arg1 ;
-(void)setInsets:(UIEdgeInsets)arg1 ;
@end

