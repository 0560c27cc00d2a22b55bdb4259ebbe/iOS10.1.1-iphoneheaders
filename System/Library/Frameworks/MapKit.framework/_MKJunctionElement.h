/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@interface _MKJunctionElement : NSObject {

	CGPoint _leftBasePoint;
	CGPoint _rightBasePoint;
	double _angle;

}

@property (assign) CGPoint leftBasePoint;               //@synthesize leftBasePoint=_leftBasePoint - In the implementation block
@property (assign) CGPoint rightBasePoint;              //@synthesize rightBasePoint=_rightBasePoint - In the implementation block
@property (assign) double angle;                        //@synthesize angle=_angle - In the implementation block
-(void)setAngle:(double)arg1 ;
-(double)angle;
-(CGPoint)leftEdgePointAtDistanceFromBase:(double)arg1 ;
-(CGPoint)rightEdgePointAtDistanceFromBase:(double)arg1 ;
-(CGPoint)leftBasePoint;
-(void)setLeftBasePoint:(CGPoint)arg1 ;
-(CGPoint)rightBasePoint;
-(void)setRightBasePoint:(CGPoint)arg1 ;
@end

