/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKit/ClockKit-Structs.h>
#import <ClockKit/CLKComplicationTemplate.h>

@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {

	long long _family;
	BOOL _hideDots;
	double _energyPercentComplete;
	double _briskMinutesPercentComplete;
	double _standHoursPercentComplete;

}

@property (assign,nonatomic) double energyPercentComplete;                    //@synthesize energyPercentComplete=_energyPercentComplete - In the implementation block
@property (assign,nonatomic) double briskMinutesPercentComplete;              //@synthesize briskMinutesPercentComplete=_briskMinutesPercentComplete - In the implementation block
@property (assign,nonatomic) double standHoursPercentComplete;                //@synthesize standHoursPercentComplete=_standHoursPercentComplete - In the implementation block
@property (assign,getter=dotsAreHidden,nonatomic) BOOL hideDots;              //@synthesize hideDots=_hideDots - In the implementation block
+(id)activityTemplateWithFamily:(long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCompatibleWithFamily:(long long)arg1 ;
-(BOOL)dotsAreHidden;
-(double)energyPercentComplete;
-(double)briskMinutesPercentComplete;
-(double)standHoursPercentComplete;
-(void)setHideDots:(BOOL)arg1 ;
-(void)setEnergyPercentComplete:(double)arg1 ;
-(void)setBriskMinutesPercentComplete:(double)arg1 ;
-(void)setStandHoursPercentComplete:(double)arg1 ;
@end

