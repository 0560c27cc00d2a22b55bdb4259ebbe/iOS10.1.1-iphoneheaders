/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadHandlerObserver.h>

@protocol OS_dispatch_source;
@class SSSQLiteDatabase, NSMutableDictionary, NSObject, ExternalDownloadState, DownloadPipeline, DownloadPolicyManager, NSString;

@interface DownloadsDatabase : NSObject <DownloadHandlerObserver> {

	SSSQLiteDatabase* _database;
	NSMutableDictionary* _dirtyProgressByID;
	NSObject*<OS_dispatch_source> _dirtyProgressTimer;
	ExternalDownloadState* _externalState;
	DownloadPipeline* _pipeline;
	DownloadPolicyManager* _policyManager;
	NSObject*<OS_dispatch_source> _progressTickTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)downloadsDatabase;
+(void)_setupDatabase:(id)arg1 ;
-(void)_notifyProgressTickTimer;
-(id)modifyUsingPurchaseTransactionBlock:(/*^block*/id)arg1 ;
-(id)modifyExternalUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)_newSessionDescription;
-(id)_modifyUsingTransaction:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_commitExternalChangesForChangeset:(id)arg1 ;
-(void)downloadHandlerManagerHandlersDidChange:(id)arg1 ;
-(void)downloadHandlerManager:(id)arg1 sessionsDidChange:(id)arg2 ;
-(void)modifyAsyncUsingPurchaseTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyExternalAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyUsingUpdatesTransactionBlock:(/*^block*/id)arg1 ;
-(void)readUpdatesUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)modifyUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)modifyAsyncUsingTransactionBlock:(/*^block*/id)arg1 ;
-(void)dispatchBlockAsync:(/*^block*/id)arg1 ;
-(void)dispatchAfter:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(void)dispatchBlockSync:(/*^block*/id)arg1 ;
-(id)newDispatchSourceWithType:(dispatch_source_type_sRef)arg1 ;
-(void)readUsingTransactionBlock:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
@end

