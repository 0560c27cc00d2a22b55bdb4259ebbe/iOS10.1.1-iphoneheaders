/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/OFAudioRecorderDelegate.h>

@protocol OFAudioCaptureManagerDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, OFAudioRecorder, NSURL;

@interface OFAudioCaptureManager : NSObject <OFAudioRecorderDelegate> {

	AVCaptureSession* _session;
	AVCaptureDeviceInput* _audioInput;
	OFAudioRecorder* _recorder;
	NSURL* _outputFileURL;
	id _deviceConnectedObserver;
	id _deviceDisconnectedObserver;
	unsigned long long _backgroundRecordingID;
	BOOL _isCancelled;
	id<OFAudioCaptureManagerDelegate> _delegate;

}

@property (nonatomic,retain) AVCaptureSession * session;                              //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) AVCaptureDeviceInput * audioInput;                       //@synthesize audioInput=_audioInput - In the implementation block
@property (nonatomic,retain) OFAudioRecorder * recorder;                              //@synthesize recorder=_recorder - In the implementation block
@property (nonatomic,copy) NSURL * outputFileURL;                                     //@synthesize outputFileURL=_outputFileURL - In the implementation block
@property (assign,nonatomic) id deviceConnectedObserver;                              //@synthesize deviceConnectedObserver=_deviceConnectedObserver - In the implementation block
@property (assign,nonatomic) id deviceDisconnectedObserver;                           //@synthesize deviceDisconnectedObserver=_deviceDisconnectedObserver - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundRecordingID;                //@synthesize backgroundRecordingID=_backgroundRecordingID - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
@property (assign,nonatomic) id<OFAudioCaptureManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<OFAudioCaptureManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<OFAudioCaptureManagerDelegate>)delegate;
-(BOOL)isCancelled;
-(void)setSession:(AVCaptureSession *)arg1 ;
-(AVCaptureSession *)session;
-(void)setRecorder:(OFAudioRecorder *)arg1 ;
-(OFAudioRecorder *)recorder;
-(BOOL)isRecording;
-(void)cancelRecording;
-(void)setAudioInput:(AVCaptureDeviceInput *)arg1 ;
-(void)stopRecording;
-(void)setOutputFileURL:(NSURL *)arg1 ;
-(NSURL *)outputFileURL;
-(AVCaptureDeviceInput *)audioInput;
-(void)startRecording;
-(id)_audioDevice;
-(id)_tempFileURL;
-(void)setBackgroundRecordingID:(unsigned long long)arg1 ;
-(void)_removeFile:(id)arg1 ;
-(void)recorderRecordingDidBegin:(id)arg1 ;
-(void)recorder:(id)arg1 recordingDidFinishToOutputFileURL:(id)arg2 error:(id)arg3 ;
-(id)initWithOutputFileURL:(id)arg1 ;
-(BOOL)openSession;
-(unsigned long long)micCount;
-(unsigned long long)backgroundRecordingID;
-(float)meanAudioLevel;
-(id)deviceConnectedObserver;
-(void)setDeviceConnectedObserver:(id)arg1 ;
-(id)deviceDisconnectedObserver;
-(void)setDeviceDisconnectedObserver:(id)arg1 ;
@end

