/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/PreferencesMigrator.migrator/PreferencesMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataMigration/DataClassMigrator.h>

@interface PreferencesDataMigrator : DataClassMigrator {

	BOOL _done;

}
-(void)_performMonarchLocationSettingsMigration;
-(float)migrationProgress;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

