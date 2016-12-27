/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MUPoolObject.h>

@interface MURandom : MUPoolObject {

	long long _state[31];
	long long* _frontPtr;
	long long* _rearPtr;
	long long* _endPtr;

}
+(BOOL)clearVars;
+(id)randomGeneratorWithSeed:(unsigned long long)arg1 ;
+(SCD_Struct_MU3*)poolInfo;
-(long long)randomInt;
-(void)_seed:(unsigned long long)arg1 ;
-(double)randomFloatInRange:(double)arg1 :(double)arg2 ;
@end
