/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/0AppMigrator.migrator/0AppMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <0AppMigrator/0AppMigrator-Structs.h>
#import <DataMigration/DataClassMigrator.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface MIAppMigrator : DataClassMigrator {

	unsigned long long _countItemsMigrated;
	NSArray* _itemsToMigrate;
	NSDictionary* _harborMap;
	NSMutableDictionary* _groupContainerMap;

}

@property (assign) unsigned long long countItemsMigrated;                            //@synthesize countItemsMigrated=_countItemsMigrated - In the implementation block
@property (nonatomic,readonly) NSArray * itemsToMigrate;                             //@synthesize itemsToMigrate=_itemsToMigrate - In the implementation block
@property (nonatomic,readonly) NSDictionary * harborMap;                             //@synthesize harborMap=_harborMap - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * groupContainerMap;              //@synthesize groupContainerMap=_groupContainerMap - In the implementation block
-(NSDictionary *)harborMap;
-(NSMutableDictionary *)groupContainerMap;
-(NSArray *)itemsToMigrate;
-(void)setCountItemsMigrated:(unsigned long long)arg1 ;
-(BOOL)_writeIconForBundle:(CFBundleRef)arg1 toURL:(id)arg2 ;
-(id)_bundleIdentifierForBundle:(id)arg1 ;
-(BOOL)_migrateSafeHarbors;
-(unsigned long long)countItemsMigrated;
-(BOOL)_migrateContainerWithInfo:(id)arg1 ;
-(BOOL)_moveAllItemsInGroupContainerURL:(id)arg1 toGroupContainerURL:(id)arg2 ;
-(BOOL)_stageAndInstallPlaceholderForBundleAtURL:(id)arg1 withIdentifier:(id)arg2 inContainerURL:(id)arg3 ;
-(BOOL)_migrateDataContainerForIdentifier:(id)arg1 fromURL:(id)arg2 toURL:(id)arg3 ;
-(BOOL)_stageAndInstallBundleAtURL:(id)arg1 withIdentifier:(id)arg2 andVPNPluginAtURL:(id)arg3 inContainerURL:(id)arg4 ;
-(BOOL)_migrateGroupContainersForIdentifier:(id)arg1 ;
-(BOOL)_containerHasMissedItems:(id)arg1 withIdentifier:(id)arg2 ;
-(id)_loadAndValidateMigrationMarkerAtURL:(id)arg1 ;
-(id)_introspectContainer:(id)arg1 orderResultEarly:(BOOL*)arg2 ;
-(float)migrationProgress;
-(id)init;
-(float)estimatedDuration;
-(id)dataClassName;
-(BOOL)performMigration;
@end

