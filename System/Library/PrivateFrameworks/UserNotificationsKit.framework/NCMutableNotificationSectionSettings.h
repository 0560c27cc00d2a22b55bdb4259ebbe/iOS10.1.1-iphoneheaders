/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsKit.framework/UserNotificationsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotificationsKit/NCNotificationSectionSettings.h>

@class NSString, NSDictionary, NSSet;

@interface NCMutableNotificationSectionSettings : NCNotificationSectionSettings

@property (nonatomic,copy) NSString * sectionIdentifier; 
@property (nonatomic,copy) NSString * subSectionIdentifier; 
@property (nonatomic,copy) NSDictionary * settings; 
@property (nonatomic,copy) NSSet * subSectionSettings; 
-(void)setSettings:(NSDictionary *)arg1 ;
-(void)setSectionIdentifier:(NSString *)arg1 ;
-(void)setSubSectionIdentifier:(NSString *)arg1 ;
-(void)setSubSectionSettings:(NSSet *)arg1 ;
@end

