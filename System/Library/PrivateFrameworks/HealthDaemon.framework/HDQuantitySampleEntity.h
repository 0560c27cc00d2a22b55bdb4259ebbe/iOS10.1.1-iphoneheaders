/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSampleEntity.h>

@interface HDQuantitySampleEntity : HDSampleEntity
+(id)_databaseTable;
+(id)columnsDefinition;
+(id)insertDataObject:(id)arg1 withProvenance:(id)arg2 inDatabase:(id)arg3 persistentID:(id)arg4 error:(id*)arg5 ;
+(id)codableObjectsFromObjectCollection:(id)arg1 ;
+(BOOL)addCodableObject:(id)arg1 toCollection:(id)arg2 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(BOOL)enumerateQuantityValuesForPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
+(id)joinClausesForProperty:(id)arg1 ;
@end

