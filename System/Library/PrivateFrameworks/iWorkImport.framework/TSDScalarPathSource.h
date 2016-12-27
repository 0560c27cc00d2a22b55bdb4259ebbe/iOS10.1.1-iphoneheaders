/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDMixing.h>
#import <iWorkImport/TSDSmartPathSource.h>

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource> {

	int mType;
	double mScalar;
	CGSize mNaturalSize;
	BOOL mIsCurveContinuous;

}

@property (assign,nonatomic) int type; 
@property (assign,nonatomic) double scalar; 
@property (nonatomic,readonly) double maxScalar; 
@property (assign,nonatomic) CGSize naturalSize; 
@property (assign,nonatomic) BOOL isCurveContinuous; 
+(id)roundedRectangleWithScalar:(double)arg1 naturalSize:(CGSize)arg2 continuousCurve:(BOOL)arg3 ;
+(id)regularPolygonWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
+(id)pathSourceWithType:(int)arg1 scalar:(double)arg2 naturalSize:(CGSize)arg3 ;
+(id)rectangleWithNaturalSize:(CGSize)arg1 ;
+(id)chevronWithScalar:(double)arg1 naturalSize:(CGSize)arg2 ;
-(double)scalar;
-(void)setScalar:(double)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGSize)scaleFactorForInscribedRectangle;
-(id)initWithType:(int)arg1 scalar:(double)arg2 naturalSize:(CGSize)arg3 continuousCurve:(BOOL)arg4 ;
-(void)setIsCurveContinuous:(BOOL)arg1 ;
-(BOOL)isCurveContinuous;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(CGPoint)p_getControlKnobPointForRegularPolygon;
-(CGPoint)p_getControlKnobPointForChevron;
-(CGPathRef)p_newRoundedRectPath;
-(CGPathRef)p_newRegularPolygonPath;
-(CGPathRef)p_newChevronPath;
-(double)maxScalar;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForRegularPolygon:(CGPoint)arg1 ;
-(void)p_setControlKnobPointForChevron:(CGPoint)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
-(void)setScalarValue:(id)arg1 ;
@end

