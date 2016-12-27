/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDMetadataValueEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)indices;
+(id)deleteStatementForObjectMetadataWithDatabase:(id)arg1 ;
+(id)metadataValueStatementWithDatabase:(id)arg1 ;
+(id)_insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)_predicateForEntityWithObjectID:(id)arg1 ;
+(id)insertMetadataValueWithKeyID:(id)arg1 objectID:(id)arg2 value:(id)arg3 healthDatabase:(id)arg4 error:(id*)arg5 ;
+(BOOL)_deleteMetadataValuesWithObjectID:(id)arg1 database:(id)arg2 error:(id*)arg3 ;
+(id)_predicateForEntityWithKeyID:(id)arg1 ;
-(id)valueWithDatabase:(id)arg1 error:(id*)arg2 ;
@end

