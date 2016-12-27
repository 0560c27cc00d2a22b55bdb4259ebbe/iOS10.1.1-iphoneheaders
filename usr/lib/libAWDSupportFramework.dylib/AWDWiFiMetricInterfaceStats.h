/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDWiFiMetricInterfaceStats : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _a2dpAssocMinutes;
	unsigned _cellularDataRxBytes;
	unsigned _cellularDataTxBytes;
	unsigned _hidAssocMinutes;
	unsigned _scoAssocMinutes;
	unsigned _statsCollectionMinutes;
	unsigned _wifiA2dpRxBytes;
	unsigned _wifiA2dpTxBytes;
	unsigned _wifiAssocMinutes;
	unsigned _wifiHidRxBytes;
	unsigned _wifiHidTxBytes;
	unsigned _wifiRxBytes;
	unsigned _wifiScoRxBytes;
	unsigned _wifiScoTxBytes;
	unsigned _wifiTxBytes;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasWifiA2dpRxBytes; 
@property (assign,nonatomic) unsigned wifiA2dpRxBytes;                     //@synthesize wifiA2dpRxBytes=_wifiA2dpRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiScoRxBytes; 
@property (assign,nonatomic) unsigned wifiScoRxBytes;                      //@synthesize wifiScoRxBytes=_wifiScoRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiRxBytes; 
@property (assign,nonatomic) unsigned wifiRxBytes;                         //@synthesize wifiRxBytes=_wifiRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiHidRxBytes; 
@property (assign,nonatomic) unsigned wifiHidRxBytes;                      //@synthesize wifiHidRxBytes=_wifiHidRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasCellularDataRxBytes; 
@property (assign,nonatomic) unsigned cellularDataRxBytes;                 //@synthesize cellularDataRxBytes=_cellularDataRxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiA2dpTxBytes; 
@property (assign,nonatomic) unsigned wifiA2dpTxBytes;                     //@synthesize wifiA2dpTxBytes=_wifiA2dpTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiScoTxBytes; 
@property (assign,nonatomic) unsigned wifiScoTxBytes;                      //@synthesize wifiScoTxBytes=_wifiScoTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiTxBytes; 
@property (assign,nonatomic) unsigned wifiTxBytes;                         //@synthesize wifiTxBytes=_wifiTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiHidTxBytes; 
@property (assign,nonatomic) unsigned wifiHidTxBytes;                      //@synthesize wifiHidTxBytes=_wifiHidTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasCellularDataTxBytes; 
@property (assign,nonatomic) unsigned cellularDataTxBytes;                 //@synthesize cellularDataTxBytes=_cellularDataTxBytes - In the implementation block
@property (assign,nonatomic) BOOL hasStatsCollectionMinutes; 
@property (assign,nonatomic) unsigned statsCollectionMinutes;              //@synthesize statsCollectionMinutes=_statsCollectionMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasWifiAssocMinutes; 
@property (assign,nonatomic) unsigned wifiAssocMinutes;                    //@synthesize wifiAssocMinutes=_wifiAssocMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasA2dpAssocMinutes; 
@property (assign,nonatomic) unsigned a2dpAssocMinutes;                    //@synthesize a2dpAssocMinutes=_a2dpAssocMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasScoAssocMinutes; 
@property (assign,nonatomic) unsigned scoAssocMinutes;                     //@synthesize scoAssocMinutes=_scoAssocMinutes - In the implementation block
@property (assign,nonatomic) BOOL hasHidAssocMinutes; 
@property (assign,nonatomic) unsigned hidAssocMinutes;                     //@synthesize hidAssocMinutes=_hidAssocMinutes - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setWifiA2dpRxBytes:(unsigned)arg1 ;
-(void)setHasWifiA2dpRxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiA2dpRxBytes;
-(void)setWifiScoRxBytes:(unsigned)arg1 ;
-(void)setHasWifiScoRxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiScoRxBytes;
-(void)setWifiRxBytes:(unsigned)arg1 ;
-(void)setHasWifiRxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiRxBytes;
-(void)setWifiHidRxBytes:(unsigned)arg1 ;
-(void)setHasWifiHidRxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiHidRxBytes;
-(void)setCellularDataRxBytes:(unsigned)arg1 ;
-(void)setHasCellularDataRxBytes:(BOOL)arg1 ;
-(BOOL)hasCellularDataRxBytes;
-(void)setWifiA2dpTxBytes:(unsigned)arg1 ;
-(void)setHasWifiA2dpTxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiA2dpTxBytes;
-(void)setWifiScoTxBytes:(unsigned)arg1 ;
-(void)setHasWifiScoTxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiScoTxBytes;
-(void)setWifiTxBytes:(unsigned)arg1 ;
-(void)setHasWifiTxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiTxBytes;
-(void)setWifiHidTxBytes:(unsigned)arg1 ;
-(void)setHasWifiHidTxBytes:(BOOL)arg1 ;
-(BOOL)hasWifiHidTxBytes;
-(void)setCellularDataTxBytes:(unsigned)arg1 ;
-(void)setHasCellularDataTxBytes:(BOOL)arg1 ;
-(BOOL)hasCellularDataTxBytes;
-(void)setStatsCollectionMinutes:(unsigned)arg1 ;
-(void)setHasStatsCollectionMinutes:(BOOL)arg1 ;
-(BOOL)hasStatsCollectionMinutes;
-(void)setWifiAssocMinutes:(unsigned)arg1 ;
-(void)setHasWifiAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasWifiAssocMinutes;
-(void)setA2dpAssocMinutes:(unsigned)arg1 ;
-(void)setHasA2dpAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasA2dpAssocMinutes;
-(void)setScoAssocMinutes:(unsigned)arg1 ;
-(void)setHasScoAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasScoAssocMinutes;
-(void)setHidAssocMinutes:(unsigned)arg1 ;
-(void)setHasHidAssocMinutes:(BOOL)arg1 ;
-(BOOL)hasHidAssocMinutes;
-(unsigned)wifiA2dpRxBytes;
-(unsigned)wifiScoRxBytes;
-(unsigned)wifiRxBytes;
-(unsigned)wifiHidRxBytes;
-(unsigned)cellularDataRxBytes;
-(unsigned)wifiA2dpTxBytes;
-(unsigned)wifiScoTxBytes;
-(unsigned)wifiTxBytes;
-(unsigned)wifiHidTxBytes;
-(unsigned)cellularDataTxBytes;
-(unsigned)statsCollectionMinutes;
-(unsigned)wifiAssocMinutes;
-(unsigned)a2dpAssocMinutes;
-(unsigned)scoAssocMinutes;
-(unsigned)hidAssocMinutes;
@end

