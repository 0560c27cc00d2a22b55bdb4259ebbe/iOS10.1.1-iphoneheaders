/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CABehavior.h>

@class NSArray;

@interface CADynamicsBehavior : CABehavior

@property (copy) NSArray * springs; 
@property (copy) NSArray * forceFields; 
@property (assign) double timeStep; 
@property (assign) double minimumTimeStep; 
@property (assign) double stoppedVelocity; 
@property (assign) double stoppedAngularVelocity; 
@property (assign) double springScale; 
@property (assign) double drag; 
@property (assign) double angularDrag; 
@property (assign) BOOL reactsToCollisions; 
@property (assign) double collisionInterval; 
+(id)defaultValueForKey:(id)arg1 ;
-(Object*)CA_copyRenderValue;
-(NSArray *)springs;
-(NSArray *)forceFields;
-(double)minimumTimeStep;
-(double)stoppedVelocity;
-(double)stoppedAngularVelocity;
-(double)collisionInterval;
-(double)springScale;
-(double)drag;
-(double)angularDrag;
-(BOOL)reactsToCollisions;
-(void)setForceFields:(NSArray *)arg1 ;
-(void)setMinimumTimeStep:(double)arg1 ;
-(void)setStoppedVelocity:(double)arg1 ;
-(void)setStoppedAngularVelocity:(double)arg1 ;
-(void)setCollisionInterval:(double)arg1 ;
-(void)setSpringScale:(double)arg1 ;
-(void)setDrag:(double)arg1 ;
-(void)setAngularDrag:(double)arg1 ;
-(void)setSprings:(NSArray *)arg1 ;
-(void)setReactsToCollisions:(BOOL)arg1 ;
-(void)setTimeStep:(double)arg1 ;
-(double)timeStep;
@end

