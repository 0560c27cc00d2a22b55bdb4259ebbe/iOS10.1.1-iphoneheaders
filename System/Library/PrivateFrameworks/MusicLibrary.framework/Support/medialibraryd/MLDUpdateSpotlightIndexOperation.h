/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/MLDDatabaseOperation.h>

@class CSSearchableIndex, NSString;

@interface MLDUpdateSpotlightIndexOperation : MLDDatabaseOperation {

	CSSearchableIndex* _index;
	NSString* _bundleIdentifier;
	unsigned long long _bundle;
	unsigned long long _batchCount;

}

@property (nonatomic,retain) CSSearchableIndex * index;                  //@synthesize index=_index - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long bundle;                  //@synthesize bundle=_bundle - In the implementation block
@property (assign,nonatomic) unsigned long long batchCount;              //@synthesize batchCount=_batchCount - In the implementation block
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(id*)arg1 ;
-(BOOL)_updateIndexedItemsWithIdentifiers:(id)arg1 error:(id*)arg2 ;
-(BOOL)_indexItemsFromLibrarySinceRevision:(long long)arg1 targetRevision:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteAllIndexedItemsWithError:(id*)arg1 ;
-(BOOL)_deleteIndexedItemsWithEntityStringIDs:(id)arg1 error:(id*)arg2 ;
-(BOOL)_indexTracksWithPersistentIDs:(id)arg1 playlistsWithPersistentIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg1 playlistsPersistentIDsToUpdateSet:(id)arg2 entityStringsToDelete:(id)arg3 currentRevision:(id)arg4 targetRevision:(id)arg5 error:(id*)arg6 ;
-(BOOL)_enumerateSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 mediaType:(id)arg3 error:(id*)arg4 usingBlock:(/*^block*/id)arg5 ;
-(id)_createSearchableItemsWithPersistentIDs:(id)arg1 entityType:(long long)arg2 mediaType:(id)arg3 error:(id*)arg4 ;
-(id)_createSearchableItemsForTracksWithQuery:(id)arg1 error:(id*)arg2 ;
-(id)_createSearchableItemsForPlaylistsWithQuery:(id)arg1 error:(id*)arg2 ;
-(NSString *)bundleIdentifier;
-(unsigned long long)type;
-(CSSearchableIndex *)index;
-(unsigned long long)bundle;
-(void)setBundle:(unsigned long long)arg1 ;
-(void)main;
-(void)setIndex:(CSSearchableIndex *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBatchCount:(unsigned long long)arg1 ;
-(unsigned long long)batchCount;
@end

