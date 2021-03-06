/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSeriesSampleEntity.h>

@interface HDLocationSeriesSampleEntity : HDSeriesSampleEntity
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)insertLocationData:(id)arg1 seriesIdentifier:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)createTableSQL;
+(BOOL)performPostJournalMergeCleanupForDatabase:(id)arg1 error:(id*)arg2 ;
+(BOOL)supportsObjectMerging;
+(id)mergeDataObject:(id)arg1 provenance:(id)arg2 database:(id)arg3 error:(id*)arg4 insertHandler:(/*^block*/id)arg5 ;
+(BOOL)participatesInInsertion;
+(BOOL)isBackedByTable;
+(void)didDeleteEntityWithPersistentID:(long long)arg1 database:(id)arg2 ;
+(BOOL)_insertCodableSeriesDataFromObject:(id)arg1 persistentID:(id)arg2 database:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteFromDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateLocationDataInDatabase:(id)arg1 error:(id*)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)freezeWithDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)insertLocationData:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
-(id)sampleCountForSeriesInDatabase:(id)arg1 error:(id*)arg2 ;
-(id)timePeriodForSeriesInDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)enumerateLocationDataFromTimestamp:(double)arg1 toTimestamp:(double)arg2 database:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
@end

