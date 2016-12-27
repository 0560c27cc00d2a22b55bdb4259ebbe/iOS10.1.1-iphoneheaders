/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitDatabaseLastWeekUsageEvent : PBCodable <NSCopying> {

	long long _databaseSizeMB;
	long long _highFrequencyDataSizeMB;
	long long _manuallyEnteredTypesCount;
	long long _percentageDeletedObjects;
	long long _rowCountObjects;
	long long _thirdPartyAppsCount;
	long long _thirdPartyAppsWroteDataCount;
	unsigned long long _timestamp;
	int _rowCountCDA;
	BOOL _hasWatchSource;
	SCD_Struct_HD40 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                        //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasThirdPartyAppsCount; 
@property (assign,nonatomic) long long thirdPartyAppsCount;                       //@synthesize thirdPartyAppsCount=_thirdPartyAppsCount - In the implementation block
@property (assign,nonatomic) BOOL hasThirdPartyAppsWroteDataCount; 
@property (assign,nonatomic) long long thirdPartyAppsWroteDataCount;              //@synthesize thirdPartyAppsWroteDataCount=_thirdPartyAppsWroteDataCount - In the implementation block
@property (assign,nonatomic) BOOL hasDatabaseSizeMB; 
@property (assign,nonatomic) long long databaseSizeMB;                            //@synthesize databaseSizeMB=_databaseSizeMB - In the implementation block
@property (assign,nonatomic) BOOL hasRowCountObjects; 
@property (assign,nonatomic) long long rowCountObjects;                           //@synthesize rowCountObjects=_rowCountObjects - In the implementation block
@property (assign,nonatomic) BOOL hasPercentageDeletedObjects; 
@property (assign,nonatomic) long long percentageDeletedObjects;                  //@synthesize percentageDeletedObjects=_percentageDeletedObjects - In the implementation block
@property (assign,nonatomic) BOOL hasManuallyEnteredTypesCount; 
@property (assign,nonatomic) long long manuallyEnteredTypesCount;                 //@synthesize manuallyEnteredTypesCount=_manuallyEnteredTypesCount - In the implementation block
@property (assign,nonatomic) BOOL hasHighFrequencyDataSizeMB; 
@property (assign,nonatomic) long long highFrequencyDataSizeMB;                   //@synthesize highFrequencyDataSizeMB=_highFrequencyDataSizeMB - In the implementation block
@property (assign,nonatomic) BOOL hasHasWatchSource; 
@property (assign,nonatomic) BOOL hasWatchSource;                                 //@synthesize hasWatchSource=_hasWatchSource - In the implementation block
@property (assign,nonatomic) BOOL hasRowCountCDA; 
@property (assign,nonatomic) int rowCountCDA;                                     //@synthesize rowCountCDA=_rowCountCDA - In the implementation block
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
-(void)setThirdPartyAppsCount:(long long)arg1 ;
-(void)setHasThirdPartyAppsCount:(BOOL)arg1 ;
-(BOOL)hasThirdPartyAppsCount;
-(void)setThirdPartyAppsWroteDataCount:(long long)arg1 ;
-(void)setHasThirdPartyAppsWroteDataCount:(BOOL)arg1 ;
-(BOOL)hasThirdPartyAppsWroteDataCount;
-(void)setDatabaseSizeMB:(long long)arg1 ;
-(void)setHasDatabaseSizeMB:(BOOL)arg1 ;
-(BOOL)hasDatabaseSizeMB;
-(void)setRowCountObjects:(long long)arg1 ;
-(void)setHasRowCountObjects:(BOOL)arg1 ;
-(BOOL)hasRowCountObjects;
-(void)setPercentageDeletedObjects:(long long)arg1 ;
-(void)setHasPercentageDeletedObjects:(BOOL)arg1 ;
-(BOOL)hasPercentageDeletedObjects;
-(void)setManuallyEnteredTypesCount:(long long)arg1 ;
-(void)setHasManuallyEnteredTypesCount:(BOOL)arg1 ;
-(BOOL)hasManuallyEnteredTypesCount;
-(void)setHighFrequencyDataSizeMB:(long long)arg1 ;
-(void)setHasHighFrequencyDataSizeMB:(BOOL)arg1 ;
-(BOOL)hasHighFrequencyDataSizeMB;
-(void)setHasWatchSource:(BOOL)arg1 ;
-(void)setHasHasWatchSource:(BOOL)arg1 ;
-(BOOL)hasHasWatchSource;
-(int)rowCountCDA;
-(void)setRowCountCDA:(int)arg1 ;
-(void)setHasRowCountCDA:(BOOL)arg1 ;
-(BOOL)hasRowCountCDA;
-(id)rowCountCDAAsString:(int)arg1 ;
-(int)StringAsRowCountCDA:(id)arg1 ;
-(long long)thirdPartyAppsCount;
-(long long)thirdPartyAppsWroteDataCount;
-(long long)databaseSizeMB;
-(long long)rowCountObjects;
-(long long)percentageDeletedObjects;
-(long long)manuallyEnteredTypesCount;
-(long long)highFrequencyDataSizeMB;
-(BOOL)hasWatchSource;
@end

