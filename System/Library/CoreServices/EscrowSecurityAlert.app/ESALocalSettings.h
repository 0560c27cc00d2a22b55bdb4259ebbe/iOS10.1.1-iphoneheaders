/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/EscrowSecurityAlert.app/EscrowSecurityAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ESALocalSettings : NSObject

@property (assign,getter=isNotificationDisabled,nonatomic) BOOL notificationDisabled; 
@property (nonatomic,readonly) BOOL shouldAllowSnooze; 
@property (assign,nonatomic) int alertType; 
-(BOOL)isNotificationDisabled;
-(BOOL)shouldAllowSnooze;
-(void)notificationSnoozed;
-(void)setNotificationDisabled:(BOOL)arg1 ;
-(void)reset;
-(int)alertType;
-(void)setAlertType:(int)arg1 ;
@end

