/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/AAAccountLegacyMigrator.migrator/AAAccountLegacyMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface AAAccountLegacyMigrator : DataClassMigrator
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)_oldAccountsPlistPath;
-(id)dataClassName;
-(BOOL)performMigration;
@end

