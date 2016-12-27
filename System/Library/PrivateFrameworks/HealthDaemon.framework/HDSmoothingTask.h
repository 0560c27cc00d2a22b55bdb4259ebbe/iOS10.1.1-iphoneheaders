/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKLocationSeriesSample, NSArray;

@interface HDSmoothingTask : NSObject {

	HKLocationSeriesSample* _sample;
	NSArray* _unsmoothedLocations;

}

@property (nonatomic,retain) HKLocationSeriesSample * sample;              //@synthesize sample=_sample - In the implementation block
@property (nonatomic,retain) NSArray * unsmoothedLocations;                //@synthesize unsmoothedLocations=_unsmoothedLocations - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setSample:(HKLocationSeriesSample *)arg1 ;
-(HKLocationSeriesSample *)sample;
-(NSArray *)unsmoothedLocations;
-(void)setUnsmoothedLocations:(NSArray *)arg1 ;
@end
