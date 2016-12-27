/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLObservation.h>

@interface CVMLHorizonObservation : CVMLObservation {

	float _angle;
	CGAffineTransform _transform;

}

@property (assign) CGAffineTransform transform;              //@synthesize transform=_transform - In the implementation block
@property (assign) float angle;                              //@synthesize angle=_angle - In the implementation block
-(void)setTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(void)setAngle:(float)arg1 ;
-(float)angle;
@end

