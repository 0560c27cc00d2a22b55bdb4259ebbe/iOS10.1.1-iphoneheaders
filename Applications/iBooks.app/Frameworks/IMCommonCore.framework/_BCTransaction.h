/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCommonCore/BCTransaction.h>

@class BCTransactionQueue, NSString, NSDictionary, NSMutableArray;

@interface _BCTransaction : NSObject <BCTransaction> {

	BCTransactionQueue* _queue;
	NSString* _name;
	NSDictionary* _info;
	NSMutableArray* _pending;
	NSMutableArray* _rollbacks;
	NSMutableArray* _whenCancelledBlocks;
	NSMutableArray* _whenCompletedBlocks;
	unsigned long long _flags;

}

@property (assign,nonatomic,__weak) BCTransactionQueue * queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                 //@synthesize info=_info - In the implementation block
@property (nonatomic,retain) NSMutableArray * pending;                          //@synthesize pending=_pending - In the implementation block
@property (nonatomic,retain) NSMutableArray * rollbacks;                        //@synthesize rollbacks=_rollbacks - In the implementation block
@property (nonatomic,retain) NSMutableArray * whenCancelledBlocks;              //@synthesize whenCancelledBlocks=_whenCancelledBlocks - In the implementation block
@property (nonatomic,retain) NSMutableArray * whenCompletedBlocks;              //@synthesize whenCompletedBlocks=_whenCompletedBlocks - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                          //@synthesize flags=_flags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commit:(/*^block*/id)arg1 rollback:(/*^block*/id)arg2 ;
-(NSMutableArray *)rollbacks;
-(NSMutableArray *)whenCompletedBlocks;
-(void)whenCancelled:(/*^block*/id)arg1 ;
-(void)whenCompleted:(/*^block*/id)arg1 ;
-(id)sq_commitsToProcess;
-(id)sq_rollbacksToProcess;
-(void)sq_cancel;
-(BOOL)sq_isFinal;
-(id)sq_whenCancelledBlocks;
-(id)sq_whenCompletedBlocks;
-(void)setRollbacks:(NSMutableArray *)arg1 ;
-(NSMutableArray *)whenCancelledBlocks;
-(void)setWhenCancelledBlocks:(NSMutableArray *)arg1 ;
-(void)setWhenCompletedBlocks:(NSMutableArray *)arg1 ;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSDictionary *)info;
-(BCTransactionQueue *)queue;
-(void)setQueue:(BCTransactionQueue *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(void)setPending:(NSMutableArray *)arg1 ;
-(NSMutableArray *)pending;
-(void)commit:(/*^block*/id)arg1 ;
-(void)finalize;
-(void)setFlags:(unsigned long long)arg1 ;
-(unsigned long long)flags;
@end

