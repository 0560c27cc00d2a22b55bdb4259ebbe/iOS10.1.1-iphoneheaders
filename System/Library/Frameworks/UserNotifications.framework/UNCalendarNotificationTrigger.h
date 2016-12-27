/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger {

	NSDateComponents* _dateComponents;

}

@property (nonatomic,copy,readonly) NSDateComponents * dateComponents;              //@synthesize dateComponents=_dateComponents - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)triggerWithDateMatchingComponents:(id)arg1 repeats:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDateComponents *)dateComponents;
-(id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2 ;
-(id)nextTriggerDate;
-(id)_initWithDateComponents:(id)arg1 repeats:(BOOL)arg2 ;
@end

