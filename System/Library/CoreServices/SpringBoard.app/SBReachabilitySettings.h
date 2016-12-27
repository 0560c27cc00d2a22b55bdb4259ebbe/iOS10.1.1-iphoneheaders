/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@interface SBReachabilitySettings : SBUISettings {

	BOOL _allowOnAllDevices;
	double _reachabilityDefaultKeepAlive;
	double _reachabilityInteractiveKeepAlive;
	double _yOffsetFactor;
	double _mass;
	double _stiffness;
	double _damping;
	double _epsilon;
	double _reducedMotionSlideDuration;

}

@property (assign,nonatomic) double mass;                                          //@synthesize mass=_mass - In the implementation block
@property (assign,nonatomic) double stiffness;                                     //@synthesize stiffness=_stiffness - In the implementation block
@property (assign,nonatomic) double damping;                                       //@synthesize damping=_damping - In the implementation block
@property (assign,nonatomic) double epsilon;                                       //@synthesize epsilon=_epsilon - In the implementation block
@property (assign,nonatomic) double reducedMotionSlideDuration;                    //@synthesize reducedMotionSlideDuration=_reducedMotionSlideDuration - In the implementation block
@property (assign,nonatomic) BOOL allowOnAllDevices;                               //@synthesize allowOnAllDevices=_allowOnAllDevices - In the implementation block
@property (assign,nonatomic) double reachabilityDefaultKeepAlive;                  //@synthesize reachabilityDefaultKeepAlive=_reachabilityDefaultKeepAlive - In the implementation block
@property (assign,nonatomic) double reachabilityInteractiveKeepAlive;              //@synthesize reachabilityInteractiveKeepAlive=_reachabilityInteractiveKeepAlive - In the implementation block
@property (assign,nonatomic) double yOffsetFactor;                                 //@synthesize yOffsetFactor=_yOffsetFactor - In the implementation block
+(id)settingsControllerModule;
-(BOOL)allowOnAllDevices;
-(double)reachabilityInteractiveKeepAlive;
-(double)reachabilityDefaultKeepAlive;
-(void)setAllowOnAllDevices:(BOOL)arg1 ;
-(void)setReachabilityDefaultKeepAlive:(double)arg1 ;
-(void)setReachabilityInteractiveKeepAlive:(double)arg1 ;
-(void)setYOffsetFactor:(double)arg1 ;
-(void)setReducedMotionSlideDuration:(double)arg1 ;
-(double)reducedMotionSlideDuration;
-(void)setEpsilon:(double)arg1 ;
-(void)setStiffness:(double)arg1 ;
-(void)setDamping:(double)arg1 ;
-(void)setMass:(double)arg1 ;
-(void)setDefaultValues;
-(double)damping;
-(double)mass;
-(id)animationFactory;
-(double)stiffness;
-(double)yOffsetFactor;
-(double)epsilon;
@end

