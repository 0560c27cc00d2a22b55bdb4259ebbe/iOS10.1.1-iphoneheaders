/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>

@protocol OS_dispatch_queue;
@class EKAvailabilityCache, NSDate, NSString, NSArray, NSObject, NSError;

@interface EKRequestAvailabilityOperation : NSOperation {

	BOOL _isFinished;
	BOOL _isExecuting;
	EKAvailabilityCache* _availabilityCache;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _ignoredEventID;
	NSArray* _addresses;
	/*^block*/id _resultsBlock;
	id _requestID;
	NSObject*<OS_dispatch_queue> _queue;
	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(id)init;
-(void)cancel;
-(id)description;
-(void)start;
-(void)main;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(BOOL)isConcurrent;
-(id)initWithSource:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ignoredEventID:(id)arg4 addresses:(id)arg5 resultsBlock:(/*^block*/id)arg6 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)_finishWithError:(id)arg1 ;
@end

