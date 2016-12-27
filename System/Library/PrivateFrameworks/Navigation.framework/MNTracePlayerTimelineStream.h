/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTracePlayerTimelineStreamDelegate;
@class NSArray, NSString, NSTimer;

@interface MNTracePlayerTimelineStream : NSObject {

	id<MNTracePlayerTimelineStreamDelegate> _delegate;
	/*^block*/id _handler;
	NSArray* _data;
	NSString* _timestampKey;
	NSTimer* _timer;
	unsigned long long _lastReportedIndex;
	unsigned long long _nextIndex;
	double _timeUntilNextUpdate;

}

@property (assign,nonatomic,__weak) id<MNTracePlayerTimelineStreamDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id handler;                                                             //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long lastReportedIndex;                               //@synthesize lastReportedIndex=_lastReportedIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long nextIndex;                                       //@synthesize nextIndex=_nextIndex - In the implementation block
-(void)setDelegate:(id<MNTracePlayerTimelineStreamDelegate>)arg1 ;
-(id<MNTracePlayerTimelineStreamDelegate>)delegate;
-(void)stop;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_timerFired;
-(unsigned long long)nextIndex;
-(id)initWithData:(id)arg1 timestampKey:(id)arg2 ;
-(void)scheduleUpdateFromCurrentTime:(double)arg1 ;
-(unsigned long long)lastReportedIndex;
@end

