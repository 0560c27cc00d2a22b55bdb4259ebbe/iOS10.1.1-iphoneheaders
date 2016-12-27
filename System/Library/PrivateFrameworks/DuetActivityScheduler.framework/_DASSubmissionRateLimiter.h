/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_os_log;
@class NSMutableDictionary, NSObject;

@interface _DASSubmissionRateLimiter : NSObject {

	NSMutableDictionary* _penaltyBox;
	NSObject*<OS_dispatch_queue> _delayedSubmissionQueue;
	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSMutableDictionary * penaltyBox;                                 //@synthesize penaltyBox=_penaltyBox - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delayedSubmissionQueue;              //@synthesize delayedSubmissionQueue=_delayedSubmissionQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                         //@synthesize log=_log - In the implementation block
-(void)activityCanceled:(id)arg1 ;
-(void)activityCompleted:(id)arg1 ;
-(id)init;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)removeFromPenaltyBox:(id)arg1 ;
-(void)addToPenaltyBox:(id)arg1 atDate:(id)arg2 ;
-(BOOL)shouldDelaySubmissionOfActivity:(id)arg1 ;
-(void)handleCanceledActivity:(id)arg1 ;
-(void)submitActivity:(id)arg1 withScheduler:(id)arg2 ;
-(void)submitActivity:(id)arg1 inGroup:(id)arg2 withScheduler:(id)arg3 ;
-(NSMutableDictionary *)penaltyBox;
-(void)setPenaltyBox:(NSMutableDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)delayedSubmissionQueue;
-(void)setDelayedSubmissionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

