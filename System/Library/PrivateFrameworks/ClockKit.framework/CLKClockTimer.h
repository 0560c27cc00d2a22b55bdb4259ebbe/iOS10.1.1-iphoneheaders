/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
#import <ClockKit/ClockKit-Structs.h>
@class CADisplayLink, NSMutableDictionary, NSObject;

@interface CLKClockTimer : NSObject {

	CADisplayLink* _displayLink;
	CADisplayLink* _30fpsDisplayLink;
	NSMutableDictionary* _minuteHandlers;
	NSMutableDictionary* _secondHandlers;
	NSMutableDictionary* _subsecondHandlers;
	NSMutableDictionary* _30fpsHandlers;
	unsigned long long _nextToken;
	long long _lastHour;
	long long _lastMinute;
	long long _lastSecond;
	double _lastSubsecondFraction;
	BOOL _inForeground;
	NSObject*<OS_dispatch_source> _signalSource;
	NSMutableDictionary* _identificationLogsByToken;

}
+(id)sharedInstance;
+(id)now;
+(void)_forceDate:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)_updateDisplayLink;
-(void)_onDisplayLink:(id)arg1 ;
-(void)stop30fpsUpdatesForToken:(NSNumber*)arg1 ;
-(NSNumber*)start30fpsUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)stopMinuteUpdatesForToken:(NSNumber*)arg1 ;
-(void)stopSecondUpdatesForToken:(NSNumber*)arg1 ;
-(NSNumber*)startSecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)_backgrounded:(id)arg1 ;
-(void)_foregrounded:(id)arg1 ;
-(void)_dumpIndentificationLogs;
-(NSNumber*)_nextTokenWithIdentificationLog:(/*^block*/id)arg1 ;
-(void)_removeToken:(NSNumber*)arg1 ;
-(void)_maybeClearLastSeenTimeComponents;
-(NSNumber*)startSubsecondUpdatesWithHandler:(/*^block*/id)arg1 identificationLog:(/*^block*/id)arg2 ;
-(void)_update30fpsDisplayLink;
-(void)_on30fpsDisplayLink:(id)arg1 ;
-(void)_handleTimePassed;
-(void)_updateDisplayLinkFrameIntervalAccuracyIfNecessaryForTimePastMinuteInSeconds:(double)arg1 ;
-(NSNumber*)startMinuteUpdatesWithHandler:(/*^block*/id)arg1 ;
-(NSNumber*)startSecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(NSNumber*)startSubsecondUpdatesWithHandler:(/*^block*/id)arg1 ;
-(void)stopSubsecondUpdatesForToken:(id)arg1 ;
@end

