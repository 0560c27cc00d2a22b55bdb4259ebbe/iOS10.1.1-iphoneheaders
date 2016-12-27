/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSDate, NSDictionary;

@interface HDBackgroundTask : NSObject {

	NSObject*<OS_xpc_object> _job;

}

@property (nonatomic,retain) NSDate * startDate; 
@property (nonatomic,retain) NSDate * endDate; 
@property (nonatomic,retain) NSDictionary * userContext; 
-(id)init;
-(id)description;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)_initWithJob:(id)arg1 ;
-(NSDictionary *)userContext;
-(id)_job;
-(void)setUserContext:(NSDictionary *)arg1 ;
-(BOOL)taskValid;
-(BOOL)taskSatisfied;
-(BOOL)taskExpired;
@end

