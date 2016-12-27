/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogAccounting.framework/PowerlogAccounting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLAccountingQualificationManagerDelegate <NSObject>
@property (readonly) NSObject*<OS_dispatch_queue> workQueue; 
@required
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)didQualifyEnergyEvent:(id)arg1 withRootNodeID:(id)arg2 withQualificationID:(id)arg3;
-(void)addQualificationEventIntervalWithLastQualificationEventForward:(id)arg1 withQualificationEventForward:(id)arg2;
-(void)addQualificationEventIntervalWithLastQualificationEventBackward:(id)arg1 withQualificationEventBackward:(id)arg2;
-(void)addQualificationEventInterval:(id)arg1;
-(void)addQualificationEventPoint:(id)arg1;

@end

