/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CDTrendLogic : NSObject {

	unsigned long long _slotCount;
	unsigned long long _cDelta;
	unsigned long long _cHighThreshold;
	unsigned long long _cLowThreshold;
	unsigned long long _cMax;
	unsigned long long _cEpsilon;
	unsigned long long _iecMinSeconds;
	unsigned long long _cMin;
	unsigned long long _timerMinSeconds;
	unsigned long long _iecMaxSeconds;
	unsigned long long _iecDecayMult;
	unsigned long long _iecMinMult;
	unsigned long long _iecAvgMult;
	unsigned long long _iecDiv;
	unsigned long long _timerLeewaySeconds;

}

@property (assign) unsigned long long slotCount;                       //@synthesize slotCount=_slotCount - In the implementation block
@property (assign) unsigned long long cDelta;                          //@synthesize cDelta=_cDelta - In the implementation block
@property (assign) unsigned long long cHighThreshold;                  //@synthesize cHighThreshold=_cHighThreshold - In the implementation block
@property (assign) unsigned long long cLowThreshold;                   //@synthesize cLowThreshold=_cLowThreshold - In the implementation block
@property (assign) unsigned long long cMax;                            //@synthesize cMax=_cMax - In the implementation block
@property (assign) unsigned long long cEpsilon;                        //@synthesize cEpsilon=_cEpsilon - In the implementation block
@property (assign) unsigned long long iecMinSeconds;                   //@synthesize iecMinSeconds=_iecMinSeconds - In the implementation block
@property (assign) unsigned long long cMin;                            //@synthesize cMin=_cMin - In the implementation block
@property (assign) unsigned long long timerMinSeconds;                 //@synthesize timerMinSeconds=_timerMinSeconds - In the implementation block
@property (assign) unsigned long long iecMaxSeconds;                   //@synthesize iecMaxSeconds=_iecMaxSeconds - In the implementation block
@property (assign) unsigned long long iecDecayMult;                    //@synthesize iecDecayMult=_iecDecayMult - In the implementation block
@property (assign) unsigned long long iecMinMult;                      //@synthesize iecMinMult=_iecMinMult - In the implementation block
@property (assign) unsigned long long iecAvgMult;                      //@synthesize iecAvgMult=_iecAvgMult - In the implementation block
@property (assign) unsigned long long iecDiv;                          //@synthesize iecDiv=_iecDiv - In the implementation block
@property (assign) unsigned long long timerLeewaySeconds;              //@synthesize timerLeewaySeconds=_timerLeewaySeconds - In the implementation block
-(id)initWithSlotCount:(unsigned long long)arg1 cDelta:(unsigned long long)arg2 cLowThreshold:(unsigned long long)arg3 cHighThreshold:(unsigned long long)arg4 cMin:(unsigned long long)arg5 cMax:(unsigned long long)arg6 cEpsilon:(unsigned long long)arg7 iecMinSeconds:(unsigned long long)arg8 iecMaxSeconds:(unsigned long long)arg9 iecDecayMult:(unsigned long long)arg10 iecMinMult:(unsigned long long)arg11 iecAvgMult:(unsigned long long)arg12 iecDiv:(unsigned long long)arg13 timerMinSeconds:(unsigned long long)arg14 timerLeewaySeconds:(unsigned long long)arg15 error:(id*)arg16 ;
-(id)initWithTrendLogicBand:(long long)arg1 error:(id*)arg2 ;
-(unsigned long long)slotCount;
-(void)setSlotCount:(unsigned long long)arg1 ;
-(unsigned long long)cDelta;
-(void)setCDelta:(unsigned long long)arg1 ;
-(unsigned long long)cHighThreshold;
-(void)setCHighThreshold:(unsigned long long)arg1 ;
-(unsigned long long)cLowThreshold;
-(void)setCLowThreshold:(unsigned long long)arg1 ;
-(unsigned long long)cMax;
-(void)setCMax:(unsigned long long)arg1 ;
-(unsigned long long)cEpsilon;
-(void)setCEpsilon:(unsigned long long)arg1 ;
-(unsigned long long)iecMinSeconds;
-(void)setIecMinSeconds:(unsigned long long)arg1 ;
-(unsigned long long)cMin;
-(void)setCMin:(unsigned long long)arg1 ;
-(unsigned long long)timerMinSeconds;
-(void)setTimerMinSeconds:(unsigned long long)arg1 ;
-(unsigned long long)iecMaxSeconds;
-(void)setIecMaxSeconds:(unsigned long long)arg1 ;
-(unsigned long long)iecDecayMult;
-(void)setIecDecayMult:(unsigned long long)arg1 ;
-(unsigned long long)iecMinMult;
-(void)setIecMinMult:(unsigned long long)arg1 ;
-(unsigned long long)iecAvgMult;
-(void)setIecAvgMult:(unsigned long long)arg1 ;
-(unsigned long long)iecDiv;
-(void)setIecDiv:(unsigned long long)arg1 ;
-(unsigned long long)timerLeewaySeconds;
-(void)setTimerLeewaySeconds:(unsigned long long)arg1 ;
@end

