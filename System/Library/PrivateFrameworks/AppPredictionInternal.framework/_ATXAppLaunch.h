/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate, NSTimeZone;

@interface _ATXAppLaunch : NSObject {

	NSString* _bundleId;
	NSDate* _date;
	NSTimeZone* _timeZone;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * bundleId;                //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) NSTimeZone * timeZone;              //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) NSString * reason;                  //@synthesize reason=_reason - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSDate *)date;
-(NSString *)reason;
-(NSTimeZone *)timeZone;
-(NSString *)bundleId;
-(id)initWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 ;
-(BOOL)isEqualToLaunch:(id)arg1 ;
@end

