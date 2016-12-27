/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
@interface TrackerPolicy : NSObject {

	unsigned _defaultDisposition;
	unsigned _numClassMaps;
	SCD_Struct_Tr26 _classMap[12];
	unsigned _numMgmtFlagsMaps;
	SCD_Struct_Tr26 _mgmtFlagsMap[4];
	unsigned long long _maximumConnectionsPerHour;

}

@property (assign) unsigned long long maximumConnectionsPerHour;              //@synthesize maximumConnectionsPerHour=_maximumConnectionsPerHour - In the implementation block
-(id)init;
-(id)description;
-(int)configureInstance:(id)arg1 ;
-(void)setMaximumConnectionsPerHour:(unsigned long long)arg1 ;
-(void)addDisposition:(unsigned)arg1 forTrafficClass:(unsigned)arg2 ;
-(void)addDisposition:(unsigned)arg1 forTrafficMgmtFlags:(unsigned)arg2 ;
-(unsigned)flowDispositionFor:(id)arg1 ;
-(unsigned long long)maximumConnectionsPerHour;
@end

