/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSUtility/TSUProgress.h>

@protocol OS_dispatch_queue;
@class TSUScaledProgressStorage, TSUProgress, NSObject;

@interface TSUScaledProgress : TSUProgress {

	TSUScaledProgressStorage* mStorage;
	TSUProgress* mProgress;
	id mProgressObserver;
	NSObject*<OS_dispatch_queue> mProgressQueue;

}

@property (retain) TSUProgress * progress; 
@property (assign) double maxValue; 
-(id)init;
-(void)dealloc;
-(double)value;
-(void)setProgress:(TSUProgress *)arg1 ;
-(TSUProgress *)progress;
-(void)removeProgressObserver:(id)arg1 ;
-(BOOL)isIndeterminate;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(id)addProgressObserverWithValueInterval:(double)arg1 queue:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)p_removeProgressObserverFromProgressInQueue;
-(void)p_addProgressObserverToProgressInQueue;
@end

