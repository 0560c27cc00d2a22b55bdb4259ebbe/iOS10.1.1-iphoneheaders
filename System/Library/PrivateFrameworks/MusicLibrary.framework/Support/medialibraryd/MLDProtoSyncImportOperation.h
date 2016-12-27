/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/Support/medialibraryd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <medialibraryd/medialibraryd-Structs.h>
#import <medialibraryd/MLDImportOperation.h>

@class ML3DatabaseConnection, NSMutableSet;

@interface MLDProtoSyncImportOperation : MLDImportOperation {

	unsigned _totalSyncPackageCount;
	unsigned _syncPackageNum;
	BOOL _syncSessionStarted;
	int _syncType;
	ML3DatabaseConnection* _connection;
	BOOL _isServerImport;
	NSMutableSet* _syncIdsToUnlink;

}
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_processSyncPackage:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)_unlinkUnavailableMediaItems;
-(BOOL)_processSyncHeader:(id)arg1 ;
-(BOOL)_processSyncError:(id)arg1 ;
-(BOOL)_processSyncOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processMediaItemOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(BOOL)_processPlaylistOperation:(id)arg1 withImportSession:(ML3ImportSession*)arg2 ;
-(void)main;
@end

