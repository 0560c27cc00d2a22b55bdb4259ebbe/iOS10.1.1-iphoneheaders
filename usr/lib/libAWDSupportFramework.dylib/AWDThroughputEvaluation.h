/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDThroughputEvaluation : PBCodable <NSCopying> {

	long long _wifiRssi;
	unsigned _actualHighBandwidth;
	unsigned _actualLowBandwidth;
	unsigned _cca;
	int _deviation;
	unsigned _estimatedHighBandwidth;
	unsigned _estimatedLowBandwidth;
	unsigned _maxOfActualLowBandwidth;
	unsigned _movingAvgHighBandwidth;
	unsigned _movingAvgLowBandwidth;
	unsigned _phyRate;
	unsigned _qbssLoad;
	SCD_Struct_AW32 _has;

}

@property (assign,nonatomic) BOOL hasWifiRssi; 
@property (assign,nonatomic) long long wifiRssi;                            //@synthesize wifiRssi=_wifiRssi - In the implementation block
@property (assign,nonatomic) BOOL hasPhyRate; 
@property (assign,nonatomic) unsigned phyRate;                              //@synthesize phyRate=_phyRate - In the implementation block
@property (assign,nonatomic) BOOL hasQbssLoad; 
@property (assign,nonatomic) unsigned qbssLoad;                             //@synthesize qbssLoad=_qbssLoad - In the implementation block
@property (assign,nonatomic) BOOL hasCca; 
@property (assign,nonatomic) unsigned cca;                                  //@synthesize cca=_cca - In the implementation block
@property (assign,nonatomic) BOOL hasActualLowBandwidth; 
@property (assign,nonatomic) unsigned actualLowBandwidth;                   //@synthesize actualLowBandwidth=_actualLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasActualHighBandwidth; 
@property (assign,nonatomic) unsigned actualHighBandwidth;                  //@synthesize actualHighBandwidth=_actualHighBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedLowBandwidth; 
@property (assign,nonatomic) unsigned estimatedLowBandwidth;                //@synthesize estimatedLowBandwidth=_estimatedLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasEstimatedHighBandwidth; 
@property (assign,nonatomic) unsigned estimatedHighBandwidth;               //@synthesize estimatedHighBandwidth=_estimatedHighBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasMovingAvgLowBandwidth; 
@property (assign,nonatomic) unsigned movingAvgLowBandwidth;                //@synthesize movingAvgLowBandwidth=_movingAvgLowBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasMovingAvgHighBandwidth; 
@property (assign,nonatomic) unsigned movingAvgHighBandwidth;               //@synthesize movingAvgHighBandwidth=_movingAvgHighBandwidth - In the implementation block
@property (assign,nonatomic) BOOL hasDeviation; 
@property (assign,nonatomic) int deviation;                                 //@synthesize deviation=_deviation - In the implementation block
@property (assign,nonatomic) BOOL hasMaxOfActualLowBandwidth; 
@property (assign,nonatomic) unsigned maxOfActualLowBandwidth;              //@synthesize maxOfActualLowBandwidth=_maxOfActualLowBandwidth - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setWifiRssi:(long long)arg1 ;
-(void)setHasWifiRssi:(BOOL)arg1 ;
-(BOOL)hasWifiRssi;
-(void)setPhyRate:(unsigned)arg1 ;
-(void)setHasPhyRate:(BOOL)arg1 ;
-(BOOL)hasPhyRate;
-(void)setQbssLoad:(unsigned)arg1 ;
-(void)setHasQbssLoad:(BOOL)arg1 ;
-(BOOL)hasQbssLoad;
-(void)setCca:(unsigned)arg1 ;
-(void)setHasCca:(BOOL)arg1 ;
-(BOOL)hasCca;
-(void)setActualLowBandwidth:(unsigned)arg1 ;
-(void)setHasActualLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasActualLowBandwidth;
-(void)setActualHighBandwidth:(unsigned)arg1 ;
-(void)setHasActualHighBandwidth:(BOOL)arg1 ;
-(BOOL)hasActualHighBandwidth;
-(void)setEstimatedLowBandwidth:(unsigned)arg1 ;
-(void)setHasEstimatedLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasEstimatedLowBandwidth;
-(void)setEstimatedHighBandwidth:(unsigned)arg1 ;
-(void)setHasEstimatedHighBandwidth:(BOOL)arg1 ;
-(BOOL)hasEstimatedHighBandwidth;
-(void)setMovingAvgLowBandwidth:(unsigned)arg1 ;
-(void)setHasMovingAvgLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasMovingAvgLowBandwidth;
-(void)setMovingAvgHighBandwidth:(unsigned)arg1 ;
-(void)setHasMovingAvgHighBandwidth:(BOOL)arg1 ;
-(BOOL)hasMovingAvgHighBandwidth;
-(void)setDeviation:(int)arg1 ;
-(void)setHasDeviation:(BOOL)arg1 ;
-(BOOL)hasDeviation;
-(void)setMaxOfActualLowBandwidth:(unsigned)arg1 ;
-(void)setHasMaxOfActualLowBandwidth:(BOOL)arg1 ;
-(BOOL)hasMaxOfActualLowBandwidth;
-(long long)wifiRssi;
-(unsigned)phyRate;
-(unsigned)qbssLoad;
-(unsigned)cca;
-(unsigned)actualLowBandwidth;
-(unsigned)actualHighBandwidth;
-(unsigned)estimatedLowBandwidth;
-(unsigned)estimatedHighBandwidth;
-(unsigned)movingAvgLowBandwidth;
-(unsigned)movingAvgHighBandwidth;
-(int)deviation;
-(unsigned)maxOfActualLowBandwidth;
@end

