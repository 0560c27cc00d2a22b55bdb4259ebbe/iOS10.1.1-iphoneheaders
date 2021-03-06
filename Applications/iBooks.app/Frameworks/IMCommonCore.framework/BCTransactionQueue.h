/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, _BCTransaction, NSMutableArray;

@interface BCTransactionQueue : NSObject {

	unsigned long long _options;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _sync;
	_BCTransaction* _activeTransaction;
	NSMutableArray* _pendingTransactions;
	NSMutableArray* _blocksToProcess;

}

@property (assign,nonatomic) unsigned long long options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sync;                 //@synthesize sync=_sync - In the implementation block
@property (nonatomic,retain) _BCTransaction * activeTransaction;                //@synthesize activeTransaction=_activeTransaction - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTransactions;              //@synthesize pendingTransactions=_pendingTransactions - In the implementation block
@property (nonatomic,retain) NSMutableArray * blocksToProcess;                  //@synthesize blocksToProcess=_blocksToProcess - In the implementation block
+(id)newWithOptions:(unsigned long long)arg1 queue:(id)arg2 ;
-(void)_processTransaction:(id)arg1 ;
-(id)initWithOptions:(unsigned long long)arg1 queue:(id)arg2 ;
-(id)newTransactionWithName:(id)arg1 info:(id)arg2 ;
-(NSMutableArray *)blocksToProcess;
-(void)_process;
-(void)sq_removeFinishedTransactions;
-(void)sq_activateTransactions;
-(id)newTransaction;
-(void)setBlocksToProcess:(NSMutableArray *)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSync:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)sync;
-(NSMutableArray *)pendingTransactions;
-(void)setPendingTransactions:(NSMutableArray *)arg1 ;
-(void)setActiveTransaction:(_BCTransaction *)arg1 ;
-(_BCTransaction *)activeTransaction;
@end

