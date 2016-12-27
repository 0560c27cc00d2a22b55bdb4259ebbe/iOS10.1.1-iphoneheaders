/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BRCModule.h>
#import <libobjc.A.dylib/CSSearchableIndexDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue, BRCIndexingArbiter;
@class CSSearchableIndex, BRCAccountSession, BRCThrottle, NSObject, br_pacer, NSString;

@interface BRCSpotlightIndexer : NSObject <BRCModule, CSSearchableIndexDelegate> {

	CSSearchableIndex* _index;
	BRCAccountSession* _session;
	BRCThrottle* _failureThrottle;
	NSObject*<OS_dispatch_source> _failureTimer;
	NSObject*<OS_dispatch_queue> _queue;
	br_pacer* _pacer;
	BOOL _readyForIndexing;
	unsigned long long _minNotifRank;
	unsigned long long _flushedNotifRank;
	unsigned long long _clientState;
	NSString* _loggedInUserDisplayName;
	id<BRCIndexingArbiter> _indexingArbiter;

}

@property (assign,nonatomic,__weak) id<BRCIndexingArbiter> indexingArbiter;              //@synthesize indexingArbiter=_indexingArbiter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled; 
+(void)dropAllContainersIndexForSession:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancel;
-(void)dealloc;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(void)garbageCollectSupersededRanks;
-(void)maxNotifRankWasFlushed;
-(id)initWithAccountSession:(id)arg1 ;
-(void)dropIndexForClientZone:(id)arg1 ;
-(void)docID:(unsigned long long)arg1 wasDeletedForNotifRank:(unsigned long long)arg2 ;
-(void)_scheduleIndexing;
-(void)_signalIndexing;
-(void)_deleteAllRanks;
-(void)_readyForIndexingWithAckedRank:(unsigned long long)arg1 ;
-(void)_scheduleThrottledTask:(/*^block*/id)arg1 taskName:(const char*)arg2 ;
-(void)_failedIndexing;
-(void)_saveStateForNotifRank:(unsigned long long)arg1 ;
-(id)_deletedDocIdResultSetWithMinNotifRank:(unsigned long long)arg1 maxNotifRank:(unsigned long long)arg2 ;
-(void)_handleResetForRowID:(long long)arg1 notifRank:(unsigned long long)arg2 ;
-(id<BRCIndexingArbiter>)indexingArbiter;
-(void)_deleteAllItemsAndReindexResumingIndexing:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_indexNextBatch;
-(void)searchableIndex:(id)arg1 reindexAllSearchableItemsWithAcknowledgementHandler:(/*^block*/id)arg2 ;
-(void)searchableIndex:(id)arg1 reindexSearchableItemsWithIdentifiers:(id)arg2 acknowledgementHandler:(/*^block*/id)arg3 ;
-(void)setIndexingArbiter:(id<BRCIndexingArbiter>)arg1 ;
@end
