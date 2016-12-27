/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDPathSource.h>
#import <iWorkImport/TSDSmartPathSource.h>
#import <iWorkImport/TSDMixing.h>

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing> {

	double mCornerRadius;
	double mTailSize;
	CGPoint mTailPosition;
	CGSize mNaturalSize;
	BOOL mIsTailAtCenter;

}

@property (assign,nonatomic) double cornerRadius; 
@property (nonatomic,readonly) double maxCornerRadius; 
@property (assign,nonatomic) CGPoint tailKnobPosition; 
@property (assign,nonatomic) double tailSize; 
@property (nonatomic,readonly) double maxTailSize; 
@property (assign,nonatomic) CGPoint tailSizeKnobPosition; 
@property (nonatomic,readonly) CGPoint tailCenter; 
@property (nonatomic,readonly) BOOL isTailAtCenter; 
+(id)quoteBubbleWithTailPosition:(CGPoint)arg1 tailSize:(double)arg2 naturalSize:(CGSize)arg3 ;
+(id)calloutWithCornerRadius:(double)arg1 tailPosition:(CGPoint)arg2 tailSize:(double)arg3 naturalSize:(CGSize)arg4 ;
-(CGPoint)tailCenter;
-(double)tailSize;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 context:(id)arg2 ;
-(id)bezierPathWithoutFlips;
-(id)interiorWrapPath;
-(void)scaleToNaturalSize:(CGSize)arg1 ;
-(id)valueForSetSelector:(SEL)arg1 ;
-(CGPoint)getControlKnobPosition:(unsigned long long)arg1 ;
-(unsigned long long)numberOfControlKnobs;
-(CGPoint)p_getControlKnobPointForRoundedRect;
-(void)p_setControlKnobPointForRoundedRect:(CGPoint)arg1 ;
-(id)initWithCornerRadius:(double)arg1 tailPosition:(CGPoint)arg2 tailSize:(double)arg3 naturalSize:(CGSize)arg4 tailAtCenter:(BOOL)arg5 ;
-(void)p_setNaturalSize:(CGSize)arg1 ;
-(void)p_setCornerRadius:(double)arg1 ;
-(void)p_setTailPosition:(CGPoint)arg1 ;
-(void)p_setTailSize:(double)arg1 ;
-(void)p_setTailAtCenter:(BOOL)arg1 ;
-(CGPoint)p_tailPosition;
-(CGPoint)tailKnobPosition;
-(CGPoint)tailSizeKnobPosition;
-(double)maxCornerRadius;
-(id)p_basePath;
-(void)p_getTailPath:(id)arg1 center:(CGPoint*)arg2 tailSize:(double*)arg3 intersections:(CGPoint)arg4 ;
-(CGPoint)p_adjustedCenterForPath:(id)arg1 ;
-(void)setTailSizeKnobPosition:(CGPoint)arg1 ;
-(id)p_buildPath;
-(double)maxTailSize;
-(void)setTailSize:(double)arg1 ;
-(void)setTailKnobPosition:(CGPoint)arg1 ;
-(BOOL)isTailAtCenter;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)naturalSize;
-(BOOL)isOval;
-(void)saveToArchive:(PathSourceArchive*)arg1 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)isRectangular;
-(BOOL)isCircular;
-(id)initWithArchive:(const PathSourceArchive*)arg1 ;
@end

