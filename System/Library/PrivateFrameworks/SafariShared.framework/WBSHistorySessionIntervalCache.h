/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <SafariShared/SafariShared-Structs.h>
@class NSObject, NSCalendar;

@interface WBSHistorySessionIntervalCache : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSCalendar* _calendar;
	Vector<double, 0, WTF::CrashOnOverflow, 16>* _intervalCache;

}
-(id)init;
-(id)initWithCalendar:(id)arg1 ;
-(double)beginningOfSessionContainingTime:(double)arg1 ;
-(double)_beginningOfSessionContainingTime:(double)arg1 ;
-(void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double*)arg2 beginningOfNextDay:(double*)arg3 ;
@end

