/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface _UIMotionAnalyzerSettings : _UISettings {

	BOOL _showIdleIndicator;
	BOOL _jumpEnabled;
	BOOL _playJumpSound;
	BOOL _directionalLockEnabled;
	BOOL _showDirectionalLockIndicators;
	BOOL _referenceShiftEnabled;
	double _inputSmoothingFactor;
	double _referenceShiftSpeed;
	double _idleLeeway;
	double _delayBeforeIdle;
	double _jumpThreshold;
	double _directionalLockThreshold;
	double _directionalLockStickiness;
	double _directionalLockSharpness;
	double _referenceShiftDistanceDependence;

}

@property (assign) double idleLeeway;                                    //@synthesize idleLeeway=_idleLeeway - In the implementation block
@property (assign) double delayBeforeIdle;                               //@synthesize delayBeforeIdle=_delayBeforeIdle - In the implementation block
@property (assign) BOOL showIdleIndicator;                               //@synthesize showIdleIndicator=_showIdleIndicator - In the implementation block
@property (assign) BOOL jumpEnabled;                                     //@synthesize jumpEnabled=_jumpEnabled - In the implementation block
@property (assign) double jumpThreshold;                                 //@synthesize jumpThreshold=_jumpThreshold - In the implementation block
@property (assign) BOOL playJumpSound;                                   //@synthesize playJumpSound=_playJumpSound - In the implementation block
@property (assign) BOOL directionalLockEnabled;                          //@synthesize directionalLockEnabled=_directionalLockEnabled - In the implementation block
@property (assign) double directionalLockThreshold;                      //@synthesize directionalLockThreshold=_directionalLockThreshold - In the implementation block
@property (assign) double directionalLockStickiness;                     //@synthesize directionalLockStickiness=_directionalLockStickiness - In the implementation block
@property (assign) double directionalLockSharpness;                      //@synthesize directionalLockSharpness=_directionalLockSharpness - In the implementation block
@property (assign) BOOL showDirectionalLockIndicators;                   //@synthesize showDirectionalLockIndicators=_showDirectionalLockIndicators - In the implementation block
@property (assign) BOOL referenceShiftEnabled;                           //@synthesize referenceShiftEnabled=_referenceShiftEnabled - In the implementation block
@property (assign) double referenceShiftDistanceDependence;              //@synthesize referenceShiftDistanceDependence=_referenceShiftDistanceDependence - In the implementation block
@property (assign) double inputSmoothingFactor;                          //@synthesize inputSmoothingFactor=_inputSmoothingFactor - In the implementation block
@property (assign) double referenceShiftSpeed;                           //@synthesize referenceShiftSpeed=_referenceShiftSpeed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDefaultValues;
-(void)setDirectionalLockEnabled:(BOOL)arg1 ;
-(BOOL)directionalLockEnabled;
-(double)directionalLockStickiness;
-(double)directionalLockThreshold;
-(double)directionalLockSharpness;
-(double)inputSmoothingFactor;
-(BOOL)referenceShiftEnabled;
-(double)referenceShiftSpeed;
-(double)referenceShiftDistanceDependence;
-(BOOL)jumpEnabled;
-(double)jumpThreshold;
-(BOOL)playJumpSound;
-(double)idleLeeway;
-(double)delayBeforeIdle;
-(BOOL)showIdleIndicator;
-(BOOL)showDirectionalLockIndicators;
-(void)setInputSmoothingFactor:(double)arg1 ;
-(void)setReferenceShiftEnabled:(BOOL)arg1 ;
-(void)setReferenceShiftSpeed:(double)arg1 ;
-(void)setReferenceShiftDistanceDependence:(double)arg1 ;
-(void)setIdleLeeway:(double)arg1 ;
-(void)setDelayBeforeIdle:(double)arg1 ;
-(void)setShowIdleIndicator:(BOOL)arg1 ;
-(void)setJumpEnabled:(BOOL)arg1 ;
-(void)setJumpThreshold:(double)arg1 ;
-(void)setPlayJumpSound:(BOOL)arg1 ;
-(void)setDirectionalLockThreshold:(double)arg1 ;
-(void)setDirectionalLockStickiness:(double)arg1 ;
-(void)setDirectionalLockSharpness:(double)arg1 ;
-(void)setShowDirectionalLockIndicators:(BOOL)arg1 ;
@end

