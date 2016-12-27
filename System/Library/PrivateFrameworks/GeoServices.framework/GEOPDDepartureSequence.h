/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface GEOPDDepartureSequence : PBCodable <NSCopying> {

	SCD_Struct_GE85* _nextStopIds;
	unsigned long long _lineId;
	GEOPDTimeRange* _operatingHours;
	unsigned long long _operatingHoursCount;
	unsigned long long _operatingHoursSpace;
	unsigned long long _stopId;
	NSMutableArray* _departureFrequencys;
	NSMutableArray* _departures;
	NSString* _directionNameString;
	NSString* _headsignString;
	SCD_Struct_GE45 _has;

}

@property (assign,nonatomic) BOOL hasLineId; 
@property (assign,nonatomic) unsigned long long lineId;                             //@synthesize lineId=_lineId - In the implementation block
@property (assign,nonatomic) BOOL hasStopId; 
@property (assign,nonatomic) unsigned long long stopId;                             //@synthesize stopId=_stopId - In the implementation block
@property (nonatomic,retain) NSMutableArray * departures;                           //@synthesize departures=_departures - In the implementation block
@property (nonatomic,retain) NSMutableArray * departureFrequencys;                  //@synthesize departureFrequencys=_departureFrequencys - In the implementation block
@property (nonatomic,readonly) unsigned long long operatingHoursCount; 
@property (nonatomic,readonly) GEOPDTimeRange* operatingHours; 
@property (nonatomic,readonly) BOOL hasDirectionNameString; 
@property (nonatomic,retain) NSString * directionNameString;                        //@synthesize directionNameString=_directionNameString - In the implementation block
@property (nonatomic,readonly) BOOL hasHeadsignString; 
@property (nonatomic,retain) NSString * headsignString;                             //@synthesize headsignString=_headsignString - In the implementation block
@property (nonatomic,readonly) unsigned long long nextStopIdsCount; 
@property (nonatomic,readonly) unsigned long long* nextStopIds; 
+(Class)departureType;
+(Class)departureFrequencyType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLineId:(unsigned long long)arg1 ;
-(void)setHasLineId:(BOOL)arg1 ;
-(BOOL)hasLineId;
-(void)setStopId:(unsigned long long)arg1 ;
-(void)setHasStopId:(BOOL)arg1 ;
-(BOOL)hasStopId;
-(void)clearDepartures;
-(void)addDeparture:(id)arg1 ;
-(unsigned long long)departuresCount;
-(id)departureAtIndex:(unsigned long long)arg1 ;
-(void)clearDepartureFrequencys;
-(void)addDepartureFrequency:(id)arg1 ;
-(unsigned long long)departureFrequencysCount;
-(id)departureFrequencyAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)operatingHoursCount;
-(GEOPDTimeRange*)operatingHours;
-(void)clearOperatingHours;
-(void)addOperatingHours:(GEOPDTimeRange)arg1 ;
-(GEOPDTimeRange)operatingHoursAtIndex:(unsigned long long)arg1 ;
-(void)setOperatingHours:(GEOPDTimeRange*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasDirectionNameString;
-(BOOL)hasHeadsignString;
-(unsigned long long)nextStopIdsCount;
-(unsigned long long*)nextStopIds;
-(void)clearNextStopIds;
-(void)addNextStopId:(unsigned long long)arg1 ;
-(unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1 ;
-(void)setNextStopIds:(unsigned long long*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)lineId;
-(unsigned long long)stopId;
-(NSMutableArray *)departures;
-(void)setDepartures:(NSMutableArray *)arg1 ;
-(NSMutableArray *)departureFrequencys;
-(void)setDepartureFrequencys:(NSMutableArray *)arg1 ;
-(NSString *)directionNameString;
-(void)setDirectionNameString:(NSString *)arg1 ;
-(NSString *)headsignString;
-(void)setHeadsignString:(NSString *)arg1 ;
@end

