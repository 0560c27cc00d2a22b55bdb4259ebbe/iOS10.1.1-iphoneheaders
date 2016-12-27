/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSArray;

@interface _DKEventIntersection : NSObject {

	NSDate* _startDate;
	NSDate* _endDate;
	NSArray* _events;

}

@property (readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
@property (readonly) NSArray * events;                //@synthesize events=_events - In the implementation block
+(id)eventIntersectionWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 events:(id)arg3 ;
-(NSArray *)events;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

