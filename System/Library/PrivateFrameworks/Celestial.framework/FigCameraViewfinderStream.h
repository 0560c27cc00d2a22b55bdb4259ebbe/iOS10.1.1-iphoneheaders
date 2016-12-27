/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@class FigDelegateStorage, FigStateMachine;

@interface FigCameraViewfinderStream : NSObject {

	FigDelegateStorage* _delegateStorage;
	FigStateMachine* _stateMachine;
	OpaqueFigEndpointRef _endpoint;
	OpaqueFigEndpointStreamRef _stream;
	OpaqueFigVirtualDisplaySourceRef _displaySource;
	id _endpointsChangedNotificationToken;
	id _streamsChangedNotificationToken;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(void)close;
-(void)_setupStateMachine;
-(void)openWithDestination:(id)arg1 ;
-(int)enqueueVideoSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
-(void)_handleEndpointsChanged:(id)arg1 ;
-(void)_handleStreamsChanged:(id)arg1 ;
-(void)_setEndpoint:(OpaqueFigEndpointRef)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
@end

