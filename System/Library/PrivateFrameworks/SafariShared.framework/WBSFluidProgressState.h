/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface WBSFluidProgressState : NSObject {

	double _webKitProgressValue;
	double _linearFunctionM;
	double _linearFunctionB;
	double _startTimeForFluidProgress;
	double _lastTimeProgressValueWasUpdated;
	long long _fluidProgressAnimationPhase;
	double _previousDestinationPosition;
	double _animationDuration;
	double _minProgressPosition;
	BOOL _hasCompletedLoad;
	BOOL _hasCanceledLoad;
	BOOL _hasCommittedLoad;
	BOOL _shouldAnimateUsingInitialPosition;
	long long _fluidProgressType;
	NSString* _loadURL;

}

@property (assign,nonatomic) long long fluidProgressType;                         //@synthesize fluidProgressType=_fluidProgressType - In the implementation block
@property (nonatomic,copy) NSString * loadURL;                                    //@synthesize loadURL=_loadURL - In the implementation block
@property (assign,nonatomic) double minProgressPosition; 
@property (assign,nonatomic) long long fluidProgressAnimationPhase; 
@property (assign,nonatomic) BOOL hasCompletedLoad;                               //@synthesize hasCompletedLoad=_hasCompletedLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCanceledLoad;                                //@synthesize hasCanceledLoad=_hasCanceledLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCommittedLoad;                               //@synthesize hasCommittedLoad=_hasCommittedLoad - In the implementation block
@property (assign,nonatomic) BOOL shouldAnimateUsingInitialPosition;              //@synthesize shouldAnimateUsingInitialPosition=_shouldAnimateUsingInitialPosition - In the implementation block
+(double)_estimatedLoadTimeRemainingFromProgressValue:(double)arg1 ;
-(id)description;
-(id)initWithType:(long long)arg1 ;
-(double)_animationDuration;
-(NSString *)loadURL;
-(void)setFluidProgressAnimationPhase:(long long)arg1 ;
-(long long)fluidProgressAnimationPhase;
-(BOOL)hasCompletedLoad;
-(void)setWebKitProgressValue:(double)arg1 ;
-(BOOL)hasCommittedLoad;
-(void)setHasCompletedLoad:(BOOL)arg1 ;
-(void)setHasCanceledLoad:(BOOL)arg1 ;
-(BOOL)isFluidProgressStalled;
-(void)setShouldAnimateUsingInitialPosition:(BOOL)arg1 ;
-(void)setFluidProgressType:(long long)arg1 ;
-(void)setHasCommittedLoad:(BOOL)arg1 ;
-(BOOL)hasCanceledLoad;
-(void)setMinProgressPosition:(double)arg1 ;
-(void)_updateLinearFunction;
-(double)secondsElapsedSinceLoadBegan;
-(double)_fractionCompleteAtElapsedTime:(double)arg1 ;
-(double)_adjustProgressPosition:(double)arg1 ;
-(double)fluidProgressValue;
-(double)_nextProgressPosition:(double)arg1 ;
-(double)minProgressPosition;
-(id)nextFluidProgressAnimation;
-(long long)fluidProgressType;
-(void)setLoadURL:(NSString *)arg1 ;
-(BOOL)shouldAnimateUsingInitialPosition;
-(double)_estimatedLoadTimeRemaining;
@end

