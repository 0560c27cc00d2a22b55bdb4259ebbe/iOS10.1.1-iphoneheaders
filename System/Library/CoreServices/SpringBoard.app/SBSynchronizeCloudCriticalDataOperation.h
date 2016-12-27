/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_group;
@class SBBootDefaults, NSOperationQueue, NSObject, NSMutableArray;

@interface SBSynchronizeCloudCriticalDataOperation : NSObject {

	BOOL _needsSync;
	SBBootDefaults* _queue_bootDefaults;
	NSOperationQueue* _operationQueue;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_group> _queue_operationGroup;
	unsigned long long _queue_operationCount;
	BOOL _queue_isComplete;
	double _queue_startTime;
	NSMutableArray* _testOperations;

}

@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(void)startSynchronize;
-(BOOL)waitForSynchronizeToCompleteWithTimeout:(double)arg1 ;
-(id)initWithDefaults:(id)arg1 userManager:(id)arg2 ;
-(BOOL)_queue_isComplete;
-(void)_queue_startFetchingCloudCriticalData;
-(id)_queue_fetchCloudAccountOperation;
-(id)_queue_fetchCloudDefaultsOperation;
-(id)_queue_fetchMDMProfilesOperation;
-(id)_queue_migrateSoundPreferencesOperation;
-(void)_queue_addOperation:(id)arg1 ;
-(unsigned long long)_pendingOperationCount;
-(void)_addTestOperation:(id)arg1 ;
-(id)init;
-(BOOL)isComplete;
@end

