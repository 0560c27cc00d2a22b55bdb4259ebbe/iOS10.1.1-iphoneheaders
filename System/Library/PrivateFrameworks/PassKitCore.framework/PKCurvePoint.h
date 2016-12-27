/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitCore/PassKitCore-Structs.h>
@interface PKCurvePoint : NSObject {

	double _x;
	double _y;
	double _roundness;
	double _smoothness;
	CGPoint _leftTangentPoint;
	CGPoint _rightTangentPoint;

}

@property (x) double x;                                    //@synthesize x=_x - In the implementation block
@property (y) double y;                                    //@synthesize y=_y - In the implementation block
@property (assign) CGPoint leftTangentPoint;               //@synthesize leftTangentPoint=_leftTangentPoint - In the implementation block
@property (assign) CGPoint rightTangentPoint;              //@synthesize rightTangentPoint=_rightTangentPoint - In the implementation block
@property (assign) double roundness;                       //@synthesize roundness=_roundness - In the implementation block
@property (assign) double smoothness;                      //@synthesize smoothness=_smoothness - In the implementation block
@property (assign) CGPoint CGPoint; 
+(id)pointWithX:(double)arg1 y:(double)arg2 ;
+(id)pointWithCGPoint:(CGPoint)arg1 ;
-(double)x;
-(void)setX:(double)arg1 ;
-(double)y;
-(void)setY:(double)arg1 ;
-(void)setSmoothness:(double)arg1 ;
-(double)smoothness;
-(id)initWithX:(double)arg1 y:(double)arg2 ;
-(void)setCGPoint:(CGPoint)arg1 ;
-(CGPoint)CGPoint;
-(CGPoint)leftTangentPoint;
-(void)setLeftTangentPoint:(CGPoint)arg1 ;
-(CGPoint)rightTangentPoint;
-(void)setRightTangentPoint:(CGPoint)arg1 ;
-(double)roundness;
-(void)setRoundness:(double)arg1 ;
@end

