/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKit/_HMCameraControl.h>

@protocol _HMCameraStreamControlDelegate;
@class HMCameraStream, NSString;

@interface _HMCameraStreamControl : _HMCameraControl {

	unsigned long long _streamState;
	HMCameraStream* _cameraStream;
	id<_HMCameraStreamControlDelegate> _delegate;
	NSString* _streamSessionID;

}

@property (assign,nonatomic) unsigned long long streamState;                                  //@synthesize streamState=_streamState - In the implementation block
@property (nonatomic,retain) NSString * streamSessionID;                                      //@synthesize streamSessionID=_streamSessionID - In the implementation block
@property (assign,nonatomic,__weak) id<_HMCameraStreamControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) HMCameraStream * cameraStream;                                 //@synthesize cameraStream=_cameraStream - In the implementation block
-(void)setDelegate:(id<_HMCameraStreamControlDelegate>)arg1 ;
-(void)dealloc;
-(id<_HMCameraStreamControlDelegate>)delegate;
-(id)initWithCameraProfile:(id)arg1 service:(id)arg2 profileUniqueIdentifier:(id)arg3 ;
-(void)homedRestarted;
-(void)_resetState:(id)arg1 ;
-(void)setStreamSessionID:(NSString *)arg1 ;
-(void)_callVideoStoppedDelegate:(id)arg1 ;
-(void)_handleVideoStreamStopped:(id)arg1 ;
-(void)_startStream;
-(void)_handleNegotiateStreamResponse:(id)arg1 error:(id)arg2 ;
-(void)_handleVideoStreamStartResponse:(id)arg1 error:(id)arg2 ;
-(void)_callVideoStartedDelegate;
-(void)_registerNotificationHandlers;
-(void)stopStream;
-(void)_stopStream;
-(NSString *)streamSessionID;
-(unsigned long long)streamState;
-(void)setStreamState:(unsigned long long)arg1 ;
-(void)setCameraStream:(HMCameraStream *)arg1 ;
-(void)startStream;
-(HMCameraStream *)cameraStream;
@end

