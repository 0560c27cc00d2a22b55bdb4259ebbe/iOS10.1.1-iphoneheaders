/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <UIKit/UIGestureRecognizer.h>

@class CAShapeLayer;

@interface OKCircleGestureRecognizer : UIGestureRecognizer {

	CGPoint _origin;
	double _lastAngle;
	double _angle;
	CAShapeLayer* _roundLayer;
	CAShapeLayer* _pointLayer;
	CAShapeLayer* _originLayer;
	double _continuousProgress;
	double _diffenceProgress;

}

@property (nonatomic,readonly) double diffenceProgress;                //@synthesize diffenceProgress=_diffenceProgress - In the implementation block
@property (nonatomic,readonly) double continuousProgress;              //@synthesize continuousProgress=_continuousProgress - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)reset;
-(void)initDebugLayer:(CGPoint)arg1 ;
-(void)updateDebug:(CGPoint)arg1 angle:(double)arg2 ;
-(void)resetDebug;
-(double)continuousProgress;
-(double)diffenceProgress;
@end

