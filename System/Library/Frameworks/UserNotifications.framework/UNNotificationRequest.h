/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UserNotifications.framework/UserNotifications
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserNotifications/UserNotifications-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UNNotificationContent, UNNotificationTrigger, NSString;

@interface UNNotificationRequest : NSObject <NSCopying, NSSecureCoding> {

	UNNotificationContent* _content;
	UNNotificationTrigger* _trigger;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) UNNotificationTrigger * trigger;              //@synthesize trigger=_trigger - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)requestWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 ;
+(id)requestWithPushPayload:(id)arg1 bundleIdentifier:(id)arg2 ;
+(id)requestWithIdentifier:(id)arg1 pushPayload:(id)arg2 bundleIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(UNNotificationContent *)content;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UNNotificationTrigger *)trigger;
-(id)_initWithIdentifier:(id)arg1 content:(id)arg2 trigger:(id)arg3 ;
@end

