/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InputContext/_ICPredictedItem.h>

@class NSString, NSData;

@interface _ICEventItem : _ICPredictedItem {

	BOOL _isAllDay;
	BOOL _isFreeTime;
	NSString* _eventIdentifier;
	NSString* _eventTitle;
	NSString* _calendarTitle;
	NSData* _imageData;

}

@property (nonatomic,readonly) NSString * eventIdentifier;              //@synthesize eventIdentifier=_eventIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * eventTitle;                   //@synthesize eventTitle=_eventTitle - In the implementation block
@property (nonatomic,readonly) NSString * calendarTitle;                //@synthesize calendarTitle=_calendarTitle - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                      //@synthesize imageData=_imageData - In the implementation block
@property (nonatomic,readonly) BOOL isAllDay;                           //@synthesize isAllDay=_isAllDay - In the implementation block
@property (nonatomic,readonly) BOOL isFreeTime;                         //@synthesize isFreeTime=_isFreeTime - In the implementation block
-(NSString *)eventTitle;
-(BOOL)isAllDay;
-(NSString *)eventIdentifier;
-(NSString *)calendarTitle;
-(NSData *)imageData;
-(BOOL)isFreeTime;
-(id)initWithIdentifier:(id)arg1 score:(double)arg2 proactiveTrigger:(id)arg3 eventTitle:(id)arg4 calendarTitle:(id)arg5 value:(id)arg6 imageData:(id)arg7 isAllDay:(BOOL)arg8 isFreeTime:(BOOL)arg9 ;
@end
