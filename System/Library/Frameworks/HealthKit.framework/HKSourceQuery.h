/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQuery.h>

@interface HKSourceQuery : HKQuery {

	/*^block*/id _completionHandler;
	/*^block*/id _updateHandler;

}

@property (nonatomic,readonly) id completionHandler;              //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id updateHandler;                      //@synthesize updateHandler=_updateHandler - In the implementation block
-(id)completionHandler;
-(void)setUpdateHandler:(id)arg1 ;
-(id)updateHandler;
-(void)_queue_cleanupAfterDeactivation;
-(void)_queue_validate;
-(BOOL)_queue_shouldStayAliveAfterInitialResults;
-(/*^block*/id)_queue_errorHandler;
-(id)initWithSampleType:(id)arg1 samplePredicate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)deliverSources:(id)arg1 forQuery:(id)arg2 ;
-(void)deliverUpdatedSources:(id)arg1 added:(id)arg2 forQuery:(id)arg3 ;
@end

