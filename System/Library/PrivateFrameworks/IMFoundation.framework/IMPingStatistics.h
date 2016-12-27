/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@interface IMPingStatistics : NSObject {

	double _packetLossRate;
	double _medianRoundtripTime;
	double _averageRoundtripTime;
	double _minRoundtripTime;
	double _maxRoundtripTime;
	double _standardDeviationRoundtripTime;
	double _sumRoundtripTimes;
	int _numPingsTransmitted;
	int _numPingsReceived;
	int _numPacketsSuccessfullySent;

}

@property (assign,setter=_setMedianRoundtripTime:,nonatomic) double medianRoundtripTime;                                    //@synthesize medianRoundtripTime=_medianRoundtripTime - In the implementation block
@property (assign,setter=_setMinRoundtripTime:,nonatomic) double minRoundtripTime;                                          //@synthesize minRoundtripTime=_minRoundtripTime - In the implementation block
@property (assign,setter=_setMaxRoundtripTime:,nonatomic) double maxRoundtripTime;                                          //@synthesize maxRoundtripTime=_maxRoundtripTime - In the implementation block
@property (assign,setter=_setStandardDeviationRoundtripTime:,nonatomic) double standardDeviationRoundtripTime;              //@synthesize standardDeviationRoundtripTime=_standardDeviationRoundtripTime - In the implementation block
@property (nonatomic,readonly) double averageRoundtripTime;                                                                 //@synthesize averageRoundtripTime=_averageRoundtripTime - In the implementation block
@property (nonatomic,readonly) int numPingsTransmitted;                                                                     //@synthesize numPingsTransmitted=_numPingsTransmitted - In the implementation block
@property (nonatomic,readonly) int numPingsReceived;                                                                        //@synthesize numPingsReceived=_numPingsReceived - In the implementation block
@property (nonatomic,readonly) double packetLossRate;                                                                       //@synthesize packetLossRate=_packetLossRate - In the implementation block
@property (nonatomic,readonly) int packetsSuccessfullySent;                                                                 //@synthesize numPacketsSuccessfullySent=_numPacketsSuccessfullySent - In the implementation block
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithMaxRTT:(double)arg1 medianRTT:(double)arg2 avgRTT:(double)arg3 minRTT:(double)arg4 transmitted:(int)arg5 successful:(int)arg6 received:(int)arg7 ;
-(void)_addTransmittedPacket:(BOOL)arg1 ;
-(void)_addReceivedPacket:(double)arg1 ;
-(void)_setMaxRoundtripTime:(double)arg1 ;
-(double)medianRoundtripTime;
-(void)_setMedianRoundtripTime:(double)arg1 ;
-(void)_setMinRoundtripTime:(double)arg1 ;
-(int)numPingsReceived;
-(int)numPingsTransmitted;
-(void)_setStandardDeviationRoundtripTime:(double)arg1 ;
-(int)packetsSuccessfullySent;
-(double)minRoundtripTime;
-(double)maxRoundtripTime;
-(double)averageRoundtripTime;
-(double)standardDeviationRoundtripTime;
-(double)packetLossRate;
@end

