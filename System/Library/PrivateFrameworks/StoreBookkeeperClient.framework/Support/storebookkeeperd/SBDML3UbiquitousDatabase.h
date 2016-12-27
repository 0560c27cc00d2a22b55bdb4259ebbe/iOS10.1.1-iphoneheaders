/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:47:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/Support/storebookkeeperd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ML3DatabaseConnectionDelegate.h>
#import <libobjc.A.dylib/ML3DatabaseConnectionPoolDelegate.h>

@class ML3MusicLibrary, NSString, ML3DatabaseConnectionPool, NSDate;

@interface SBDML3UbiquitousDatabase : NSObject <ML3DatabaseConnectionDelegate, ML3DatabaseConnectionPoolDelegate> {

	BOOL _needsToPurgeOldEntries;
	ML3MusicLibrary* _musicLibrary;
	NSString* _databasePath;
	ML3DatabaseConnectionPool* _connectionPool;

}

@property (nonatomic,retain) NSString * databasePath;                                  //@synthesize databasePath=_databasePath - In the implementation block
@property (retain) ML3DatabaseConnectionPool * connectionPool;                         //@synthesize connectionPool=_connectionPool - In the implementation block
@property (__weak,readonly) ML3MusicLibrary * musicLibrary;                            //@synthesize musicLibrary=_musicLibrary - In the implementation block
@property (assign,nonatomic) unsigned long long lastSyncedEntityRevision; 
@property (nonatomic,copy) NSString * lastSyncedDomainVersion; 
@property (nonatomic,retain) NSDate * dateLastSynced; 
@property (nonatomic,copy) NSString * lastNotificationDomainVersion; 
@property (nonatomic,retain) NSDate * dateToSyncWithUbiquitousStore; 
@property (nonatomic,readonly) BOOL hasSyncedAtleastOnce; 
@property (nonatomic,readonly) BOOL hasRemoteChangesToPull; 
@property (nonatomic,readonly) BOOL hasLocalChangesToPush; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)currentUserVersion;
+(id)allSchemaSQL;
-(NSDate *)dateLastSynced;
-(BOOL)hasRemoteChangesToPull;
-(BOOL)hasLocalChangesToPush;
-(BOOL)hasSyncedAtleastOnce;
-(NSString *)lastNotificationDomainVersion;
-(void)setLastNotificationDomainVersion:(NSString *)arg1 ;
-(void)updateUbiquitousDatabaseByPerformingWriteTransactionWithBlock:(/*^block*/id)arg1 ;
-(void)setLastSyncedEntityRevision:(unsigned long long)arg1 ;
-(void)setLastSyncedDomainVersion:(NSString *)arg1 ;
-(void)setDateToSyncWithUbiquitousStore:(NSDate *)arg1 ;
-(BOOL)updateUbiquitousDatabaseByUpdatingUbiquitousMetadataValuesForChangedTrackWithPersistentID:(long long)arg1 ;
-(NSDate *)dateToSyncWithUbiquitousStore;
-(BOOL)_setupDatabaseConnection;
-(BOOL)requiresSchemaOnlyUpdates;
-(BOOL)coerceValidDatabase;
-(BOOL)_userVersionMatchesSystemVersion;
-(int)_fetchDatabaseUserVersion;
-(BOOL)_buildDatabaseTablesUsingTransaction:(BOOL)arg1 ;
-(BOOL)_migrateToCurrentUserVersion;
-(void)purgeOldEntriesIfNecessary;
-(BOOL)_deleteAndRecreateDatabase;
-(BOOL)_setValue:(id)arg1 forDatabaseProperty:(id)arg2 ;
-(id)_valueForDatabaseProperty:(id)arg1 ;
-(void)_updateUbiquitousDatabase_setBookmarkMetadataWithValuesFromTrackWithMetadataIdentifier:(id)arg1 propertyValues:(id)arg2 timestamp:(double)arg3 ;
-(void)updateUbiquitousDatabaseByInsertingUbiquitousMetadataForTrackWithMetadataIdentifier:(id)arg1 propertyValues:(id)arg2 timestamp:(double)arg3 ;
-(unsigned long long)lastSyncedEntityRevision;
-(BOOL)migrateFromVersion:(int)arg1 outUserVersion:(int*)arg2 ;
-(id)initWithMusicLibrary:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 path:(id)arg2 enableWrites:(BOOL)arg3 ;
-(void)setDateLastSynced:(NSDate *)arg1 ;
-(BOOL)connectionDetectedDatabaseCorruption:(id)arg1 ;
-(void)dumpUbiquitousMetadata;
-(void)setConnectionPool:(ML3DatabaseConnectionPool *)arg1 ;
-(id)init;
-(void)connectionPool:(id)arg1 createdNewConnection:(id)arg2 ;
-(ML3DatabaseConnectionPool *)connectionPool;
-(ML3MusicLibrary *)musicLibrary;
-(void)updateUbiquitousDatabaseByRemovingUbiquitousMetadataFromTrackWithPersistentID:(long long)arg1 ;
-(void)updateMusicLibraryByApplyingUbiquitousBookmarkMetadataToTrackWithPersistentID:(long long)arg1 ;
-(void)setDatabasePath:(NSString *)arg1 ;
-(NSString *)databasePath;
-(NSString *)lastSyncedDomainVersion;
-(int)userVersion;
@end

