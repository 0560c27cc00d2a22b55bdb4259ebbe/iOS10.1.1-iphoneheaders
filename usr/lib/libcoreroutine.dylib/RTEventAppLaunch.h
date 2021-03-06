/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface RTEventAppLaunch : RTEvent <NSSecureCoding> {

	NSString* _bundleId;
	long long _appLaunchState;

}

@property (nonatomic,readonly) NSString * bundleId;                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long appLaunchState;              //@synthesize appLaunchState=_appLaunchState - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)stringFromAppLaunchState:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)bundleId;
-(long long)appLaunchState;
-(id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 source:(long long)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
@end

