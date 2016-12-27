/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogAccounting/PLAccountingDependency.h>

@class PLAccountingEnergyEventEntry;

@interface PLAccountingCorrectionDependency : PLAccountingDependency {

	PLAccountingEnergyEventEntry* _energyEvent;

}

@property (retain) PLAccountingEnergyEventEntry * energyEvent;              //@synthesize energyEvent=_energyEvent - In the implementation block
-(id)range;
-(id)ID;
-(id)activationDate;
-(PLAccountingEnergyEventEntry *)energyEvent;
-(id)initWithEnergyEvent:(id)arg1 ;
-(void)setEnergyEvent:(PLAccountingEnergyEventEntry *)arg1 ;
@end

