/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDSourceEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(id)databaseTable;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)sourceForLocalDeviceWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
+(id)indices;
+(id)_insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(id)arg4 isCurrentDevice:(id)arg5 productType:(id)arg6 deleted:(BOOL)arg7 modificationDate:(id)arg8 provenance:(long long)arg9 database:(id)arg10 error:(id*)arg11 ;
+(id)_predicateForSourceWithBundleIdentifier:(id)arg1 ;
+(id)_sourceWithPredicate:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)_sourceWithPredicate:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForSourceWithUUID:(id)arg1 ;
+(id)_predicateForLocalDeviceSource;
+(id)_allSourcesByIDWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForAppleWatchSource;
+(id)_predicateForNotDeletedSourceWithPredicate:(id)arg1 ;
+(id)_insertDeletedSourceWithUUID:(id)arg1 modificationDate:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)insertSourceWithUUID:(id)arg1 bundleIdentifier:(id)arg2 name:(id)arg3 options:(unsigned long long)arg4 isCurrentDevice:(BOOL)arg5 productType:(id)arg6 modificationDate:(id)arg7 provenance:(long long)arg8 healthDatabase:(id)arg9 error:(id*)arg10 ;
+(id)insertCodableSource:(id)arg1 provenance:(long long)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
+(id)sourceWithBundleIdentifier:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)sourceWithBundleIdentifier:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)sourceWithUUID:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
+(id)sourceWithUUID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)sourceForLocalDeviceWithDatabase:(id)arg1 error:(id*)arg2 ;
+(id)allSourcesByIDWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)allWatchSourcesByIDWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)sourceUUIDWithHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(id)sourceWithProfile:(id)arg1 error:(id*)arg2 ;
-(id)codableSourceWithEncoder:(id)arg1 error:(id*)arg2 ;
-(id)sourceBundleIdentifierInHealthDatabase:(id)arg1 error:(id*)arg2 ;
-(BOOL)setName:(id)arg1 healthDatabase:(id)arg2 error:(id*)arg3 ;
-(BOOL)setBundleIdentifier:(id)arg1 UUID:(id)arg2 healthDatabase:(id)arg3 error:(id*)arg4 ;
-(BOOL)deleteSourceWithDatabase:(id)arg1 error:(id*)arg2 ;
@end

