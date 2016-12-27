/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarUIKit/CUIKUserActivity.h>

@class NSDate;

@interface CUIKUserActivityCalendarDate : CUIKUserActivity {

	NSDate* _date;
	unsigned long long _view;

}

@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long view;              //@synthesize view=_view - In the implementation block
-(id)initWithDictionary:(id)arg1 ;
-(unsigned long long)view;
-(id)dictionary;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 calendar:(id)arg3 ;
-(id)initWithDate:(id)arg1 view:(unsigned long long)arg2 ;
@end

