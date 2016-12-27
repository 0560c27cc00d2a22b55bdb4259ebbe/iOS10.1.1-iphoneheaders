/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@class NSDictionary;

@interface _HKCurrentActivitySummaryQuery : HKQuery {

	/*^block*/id _updateHandler;
	NSDictionary* _collectionIntervals;

}

@property (setter=_setCollectionIntervals:,getter=_collectionIntervals,nonatomic,copy) NSDictionary * collectionIntervals;              //@synthesize collectionIntervals=_collectionIntervals - In the implementation block
+(Class)_queryServerDataObjectClass;
-(void)_queue_configureQueryServerDataObject:(id)arg1 ;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(/*^block*/id)_queue_errorHandler;
-(BOOL)_requiresValidSampleType;
-(id)initWithUpdateHandler:(/*^block*/id)arg1 ;
-(void)_setCollectionIntervals:(id)arg1 ;
-(id)_collectionIntervals;
-(void)deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2 ;
@end

