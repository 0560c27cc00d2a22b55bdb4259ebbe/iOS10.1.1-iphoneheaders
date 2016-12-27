/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface PLPowerNode : NSObject {

	NSString* _name;
	double _fgEnergy;
	double _bgEnergy;
	double _fgTime;
	double _bgTime;
	double _bgAudioTime;
	double _bgLocationTime;
	NSArray* _rootNodeEnergyRows;

}

@property (retain) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign) double fgEnergy;                           //@synthesize fgEnergy=_fgEnergy - In the implementation block
@property (assign) double bgEnergy;                           //@synthesize bgEnergy=_bgEnergy - In the implementation block
@property (assign) double fgTime;                             //@synthesize fgTime=_fgTime - In the implementation block
@property (assign) double bgTime;                             //@synthesize bgTime=_bgTime - In the implementation block
@property (assign) double bgAudioTime;                        //@synthesize bgAudioTime=_bgAudioTime - In the implementation block
@property (assign) double bgLocationTime;                     //@synthesize bgLocationTime=_bgLocationTime - In the implementation block
@property (retain) NSArray * rootNodeEnergyRows;              //@synthesize rootNodeEnergyRows=_rootNodeEnergyRows - In the implementation block
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)time;
-(NSArray *)rootNodeEnergyRows;
-(double)fgTime;
-(double)bgTime;
-(double)bgAudioTime;
-(double)bgLocationTime;
-(double)fgEnergy;
-(void)setFgEnergy:(double)arg1 ;
-(double)bgEnergy;
-(void)setBgEnergy:(double)arg1 ;
-(void)setFgTime:(double)arg1 ;
-(void)setBgTime:(double)arg1 ;
-(void)setBgAudioTime:(double)arg1 ;
-(void)setBgLocationTime:(double)arg1 ;
-(void)setRootNodeEnergyRows:(NSArray *)arg1 ;
-(id)energy;
-(id)initWithName:(id)arg1 withFGEnergy:(double)arg2 withBGEnergy:(double)arg3 withFGTime:(double)arg4 withBGTime:(double)arg5 withBGAudioTime:(double)arg6 withBGLocationTime:(double)arg7 withRootNodeEnergyRows:(id)arg8 ;
-(id)serialize;
@end

