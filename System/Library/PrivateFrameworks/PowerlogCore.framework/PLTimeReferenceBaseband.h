/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLTimeReferenceDynamic.h>

@class PLNSNotificationOperatorComposition;

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic {

	BOOL _followupCurrentTimeRunning;
	PLNSNotificationOperatorComposition* _basebandTimeNotification;

}

@property (retain) PLNSNotificationOperatorComposition * basebandTimeNotification;              //@synthesize basebandTimeNotification=_basebandTimeNotification - In the implementation block
@property (assign) BOOL followupCurrentTimeRunning;                                             //@synthesize followupCurrentTimeRunning=_followupCurrentTimeRunning - In the implementation block
-(void)dealloc;
-(id)currentTime;
-(id)initWithTimeManager:(id)arg1 entryDefinitionKey:(id)arg2 timeReferenceType:(long long)arg3 ;
-(void)timeChangedNotificationReceived:(id)arg1 ;
-(BOOL)followupCurrentTimeRunning;
-(void)setFollowupCurrentTimeRunning:(BOOL)arg1 ;
-(void)registerForTimeChangedNotification;
-(PLNSNotificationOperatorComposition *)basebandTimeNotification;
-(void)setBasebandTimeNotification:(PLNSNotificationOperatorComposition *)arg1 ;
@end

