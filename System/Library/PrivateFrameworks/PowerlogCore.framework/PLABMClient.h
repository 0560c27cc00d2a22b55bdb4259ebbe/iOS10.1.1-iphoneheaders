/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLABMClientMessageDelegate;
@interface PLABMClient : NSObject {

	id<PLABMClientMessageDelegate> _delegate;

}

@property (retain) id<PLABMClientMessageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedABMClient;
-(id)init;
-(void)setDelegate:(id<PLABMClientMessageDelegate>)arg1 ;
-(id<PLABMClientMessageDelegate>)delegate;
-(void)startListening;
-(void)addICEDeviceConfigWith:(id)arg1 ;
-(void)sendBootStateChangInfoToLoggerUsing:(id)arg1 ;
-(void)sendTriggerToLoggerUsing:(id)arg1 ;
-(void)sendMetricToLoggerUsing:(id)arg1 ;
-(void)sendWakeInfoToLoggerUsing:(id)arg1 ;
-(void)regTriggerListener;
-(void)removeDeviceConfig;
-(void)addICEDeviceConfig;
-(void)regMetricListener;
-(void)regBBWakeListener;
-(void)regBootStateListener;
-(void)addICEDeviceConfigDebug;
-(void)triggerPeriodicMetrics;
-(id)getLTESleepManagerStats;
-(id)getBasebandTimeAndLatency;
@end

