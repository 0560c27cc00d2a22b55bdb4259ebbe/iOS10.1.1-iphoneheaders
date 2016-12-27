/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <PhysicsKit/PKPhysicsJoint.h>

@interface PKPhysicsJointRope : PKPhysicsJoint {

	unsigned* _jointDef : 2RopeJointDef;
	unsigned* _joint : 2RopeJoint;
	CGPoint _anchorA;
	CGPoint _anchorB;

}

@property (assign,nonatomic) double maxLength; 
+(id)jointWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(unsigned*)_joint;
-(void)set_joint:(unsigned*)arg1 ;
-(unsigned*)_jointDef;
-(id)initWithBodyA:(id)arg1 bodyB:(id)arg2 anchorA:(CGPoint)arg3 anchorB:(CGPoint)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMaxLength:(double)arg1 ;
-(void)create;
-(double)maxLength;
@end
