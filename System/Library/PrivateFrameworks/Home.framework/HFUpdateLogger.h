/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_os_activity;
@class NSObject, NSString, NSDate, NSTimer;

@interface HFUpdateLogger : NSObject {

	BOOL _didReachSoftTimeout;
	NSObject*<OS_os_activity> _loggerActivity;
	NSString* _clientDescription;
	NSDate* _startDate;
	double _softTimeoutInterval;
	NSTimer* _softTimeoutTimer;

}

@property (nonatomic,retain) NSObject*<OS_os_activity> loggerActivity;              //@synthesize loggerActivity=_loggerActivity - In the implementation block
@property (nonatomic,retain) NSString * clientDescription;                          //@synthesize clientDescription=_clientDescription - In the implementation block
@property (nonatomic,retain) NSDate * startDate;                                    //@synthesize startDate=_startDate - In the implementation block
@property (assign,nonatomic) double softTimeoutInterval;                            //@synthesize softTimeoutInterval=_softTimeoutInterval - In the implementation block
@property (nonatomic,retain) NSTimer * softTimeoutTimer;                            //@synthesize softTimeoutTimer=_softTimeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL didReachSoftTimeout;                              //@synthesize didReachSoftTimeout=_didReachSoftTimeout - In the implementation block
+(id)runningLoggers;
+(id)history;
-(id)description;
-(void)finish;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
-(NSObject*<OS_os_activity>)loggerActivity;
-(id)initWithTimeout:(double)arg1 description:(id)arg2 ;
-(void)setClientDescription:(NSString *)arg1 ;
-(void)setLoggerActivity:(NSObject*<OS_os_activity>)arg1 ;
-(void)setSoftTimeoutInterval:(double)arg1 ;
-(void)_handleTimeout:(id)arg1 ;
-(void)setSoftTimeoutTimer:(NSTimer *)arg1 ;
-(NSTimer *)softTimeoutTimer;
-(void)setDidReachSoftTimeout:(BOOL)arg1 ;
-(NSString *)clientDescription;
-(double)softTimeoutInterval;
-(BOOL)didReachSoftTimeout;
@end

