/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDTrigger.h>

@class NSDate, NSTimeZone, NSString, NSDateComponents, NSArray, NSTimer;

@interface HMDTimerTrigger : HMDTrigger {

	NSDate* _fireDate;
	NSTimeZone* _fireDateTimeZone;
	NSString* _significantEvent;
	NSDateComponents* _significantEventOffset;
	NSDateComponents* _fireRepeatInterval;
	NSArray* _recurrences;
	NSString* _timerID;
	NSDate* _currentFireDate;
	NSTimer* _timer;

}

@property (nonatomic,copy) NSDate * fireDate;                                      //@synthesize fireDate=_fireDate - In the implementation block
@property (nonatomic,copy) NSTimeZone * fireDateTimeZone;                          //@synthesize fireDateTimeZone=_fireDateTimeZone - In the implementation block
@property (nonatomic,copy) NSString * significantEvent;                            //@synthesize significantEvent=_significantEvent - In the implementation block
@property (nonatomic,copy) NSDateComponents * significantEventOffset;              //@synthesize significantEventOffset=_significantEventOffset - In the implementation block
@property (nonatomic,copy) NSDateComponents * fireRepeatInterval;                  //@synthesize fireRepeatInterval=_fireRepeatInterval - In the implementation block
@property (nonatomic,copy) NSArray * recurrences;                                  //@synthesize recurrences=_recurrences - In the implementation block
@property (nonatomic,retain) NSString * timerID;                                   //@synthesize timerID=_timerID - In the implementation block
@property (nonatomic,retain) NSDate * currentFireDate;                             //@synthesize currentFireDate=_currentFireDate - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                      //@synthesize timer=_timer - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)validateWholeMinuteDate:(id)arg1 onCalendar:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(void)setFireDate:(NSDate *)arg1 ;
-(void)_startTimer:(id)arg1 ;
-(NSDate *)fireDate;
-(id)initWithName:(id)arg1 ;
-(void)_stopTimer;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)dumpState;
-(void)activate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerForMessages;
-(void)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3 ;
-(void)completeConfiguration;
-(NSString *)timerID;
-(void)timerTriggered;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrences:(id)arg4 ;
-(id)initWithName:(id)arg1 fireDate:(id)arg2 timeZone:(id)arg3 recurrence:(id)arg4 ;
-(id)initWithName:(id)arg1 significantEvent:(id)arg2 significantEventOffset:(id)arg3 recurrences:(id)arg4 ;
-(id)validateRecurrence:(id)arg1 ;
-(id)validateRecurrences:(id)arg1 ;
-(id)validateSignificantOffset:(id)arg1 ;
-(NSString *)significantEvent;
-(NSTimeZone *)fireDateTimeZone;
-(NSDateComponents *)significantEventOffset;
-(NSDateComponents *)fireRepeatInterval;
-(NSArray *)recurrences;
-(void)setTimerID:(NSString *)arg1 ;
-(void)_timerTriggered;
-(id)getCalendar;
-(NSDate *)currentFireDate;
-(id)getFireInterval;
-(void)setCurrentFireDate:(NSDate *)arg1 ;
-(void)_handleUpdateTimerTriggerPropertiesRequest:(id)arg1 ;
-(void)setSignificantEvent:(NSString *)arg1 ;
-(void)setSignificantEventOffset:(NSDateComponents *)arg1 ;
-(void)setFireDateTimeZone:(NSTimeZone *)arg1 ;
-(void)setFireRepeatInterval:(NSDateComponents *)arg1 ;
-(void)setRecurrences:(NSArray *)arg1 ;
-(BOOL)_reactivateTrigger:(id)arg1 ;
-(id)_serializeForAdd;
-(BOOL)_reactivateFireDateTrigger:(id)arg1 ;
-(BOOL)_reactivateSignificantEventTrigger:(id)arg1 ;
-(id)_nextFireDate;
-(void)_disableTimer:(id)arg1 ;
-(void)_startTimerWithFireDate:(id)arg1 ;
-(id)_nextSignificantEventFireDate;
-(void)_startTimerWithSignificantEventDate:(id)arg1 ;
-(void)_activateFireDateTrigger:(id*)arg1 ;
-(void)_activateSignificantEventTrigger:(id*)arg1 ;
-(void)_closestDatesForStartDate:(id)arg1 earliestDate:(id)arg2 timeZone:(id)arg3 deliveryRepeatInterval:(id)arg4 returnDateBefore:(id*)arg5 returnDateAfter:(id*)arg6 ;
-(BOOL)_shouldExecuteActionSet;
-(void)_reactiveTriggerAfterDelay;
-(void)nsTimerTriggered:(id)arg1 ;
-(unsigned long long)triggerType;
@end

