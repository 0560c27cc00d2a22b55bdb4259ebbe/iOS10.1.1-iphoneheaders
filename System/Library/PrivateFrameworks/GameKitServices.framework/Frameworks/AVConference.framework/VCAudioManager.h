/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSDictionary, NSObject, AVAudioDevice, NSNumber, NSString, NSMutableDictionary, NSMutableArray;

@interface VCAudioManager : NSObject {

	int direction;
	int audioRefCount;
	int connectionRefCount;
	int hardwareSampleRate;
	AudioStreamBasicDescription vpioFormat;
	BOOL usingFloat;
	BOOL isGKVoiceChat;
	BOOL isInMediaserverd;
	BOOL isMicrophoneMuted;
	BOOL enableSpeakerPhone;
	BOOL isUsingSuppression;
	BOOL isTetheredDisplayMode;
	int clientPID;
	NSDictionary* backMicSource;
	NSDictionary* frontMicSource;
	opaque_pthread_mutex_t audioLock;
	NSObject*<OS_dispatch_queue> cmSessionQueue;
	NSObject*<OS_dispatch_queue> inputDeviceQueue;
	tagHANDLE* hAUIO;
	AVAudioDevice* targetInputDevice;
	AVAudioDevice* targetOutputDevice;
	int inferredOperatingMode;
	int inferredDeviceRole;
	BOOL inferredUseSpeakerMode;
	id _weakAudioRelay;
	id _weakSafeViewAudioRelay;
	double preferredHWSampleRate;
	double preferredBlockSize;
	opaqueCMSessionRef cmSession;
	int cmSessionRefCount;
	float fLastStartAudioSessionCall;
	NSDictionary* requestedSessionParams;
	NSNumber* currentClientPriority;
	NSString* currentAudioCategory;
	NSString* currentAudioMode;
	NSMutableDictionary* audioManagerClients;
	unsigned currentVPOperatingMode;
	BOOL currentAudioRecordingMode;
	int currentSampleRate;
	int currentMinSamplesPerFrame;
	BOOL currentReceiverStatus;
	BOOL isUsingBBIO;
	int requestedVPOperatingMode;
	double requestedVPSampleRate;
	AudioEventQueue_tRef eventQ;
	NSMutableArray* spkrClientList;
	NSMutableArray* micClientList;

}

@property (retain) AVAudioDevice * targetInputDevice; 
@property (retain) AVAudioDevice * targetOutputDevice; 
@property (assign,nonatomic) BOOL isInMediaserverd; 
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone; 
@property (assign,nonatomic) int clientPID; 
@property (assign,nonatomic) BOOL isUsingSuppression; 
@property (assign,nonatomic) BOOL isGKVoiceChat; 
@property (nonatomic,readonly) BOOL usingFloat; 
@property (assign,getter=isMicrophoneMuted,nonatomic) BOOL microphoneMuted; 
@property (nonatomic,readonly) int inferredOperatingMode; 
+(id)defaultManager;
-(id)init;
-(void)dealloc;
-(void)setDirection:(int)arg1 ;
-(int)clientPID;
-(void)setClientPID:(int)arg1 ;
-(void)stopAudioSession;
-(id)currentInputDevice;
-(id)currentOutputDevice;
-(void)setEnableSpeakerPhone:(BOOL)arg1 ;
-(BOOL)isSpeakerPhoneEnabled;
-(void)startAudioIOWithFarEndVersionInfo:(VoiceIOFarEndVersionInfo*)arg1 minSamplesPerFrame:(int)arg2 internalFormat:(AudioStreamBasicDescription)arg3 allowAudioRecording:(BOOL)arg4 operatingMode:(int)arg5 deviceRole:(int)arg6 remoteBasebandCodecType:(id)arg7 remoteBasebandCodecSampleRate:(id)arg8 completionHandler:(/*^block*/id)arg9 ;
-(void)startRelayIOWithFormat:(AudioStreamBasicDescription)arg1 deviceRole:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)stopAudioIOWithDeviceRole:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)stopRelayIOWithDeviceRole:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getVpioFormat:(AudioStreamBasicDescription*)arg1 ;
-(void)addAudioIOClient:(id)arg1 ;
-(void)removeAudioIOClient:(id)arg1 ;
-(void)setIsInMediaserverd:(BOOL)arg1 ;
-(void)setAudioSessionMode:(id)arg1 ;
-(int)inferredOperatingMode;
-(void)setRemoteBasebandCodecType:(id)arg1 sampleRate:(id)arg2 ;
-(void)setIsGKVoiceChat:(BOOL)arg1 ;
-(BOOL)isGKVoiceChat;
-(void)setSamplesPerFrame:(int)arg1 ;
-(void)enableMetering:(BOOL)arg1 isInputMeter:(BOOL)arg2 ;
-(void)setIsUsingSuppression:(BOOL)arg1 ;
-(BOOL)usingFloat;
-(BOOL)isUsingSuppression;
-(void)getPreferredHWSampleRate:(double*)arg1 blockSize:(double*)arg2 ;
-(void)selectMicForDirection;
-(void)cleanupAUIOSetupWithResult:(int)arg1 completionHandler:(/*^block*/id)arg2 ignoreRefCount:(BOOL)arg3 ;
-(unsigned)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2 ;
-(int)resetAudioSessionProperties;
-(void)processEventQueue;
-(void)AUIOTeardown:(BOOL)arg1 ;
-(void)AUIOSetup:(VoiceIOFarEndVersionInfo*)arg1 minSamplesPerFrame:(int)arg2 allowAudioRecording:(BOOL)arg3 ignoreRefCount:(BOOL)arg4 operatingMode:(int)arg5 deviceRole:(int)arg6 remoteCodecType:(unsigned)arg7 remoteCodecSampleRate:(double)arg8 completionHandler:(/*^block*/id)arg9 ;
-(BOOL)isInMediaserverd;
-(unsigned long long)startAudioSessionWithCompletionHandler:(/*^block*/id)arg1 dispatchQueue:(id)arg2 ;
-(void)tearDownAudioSessionForced:(BOOL)arg1 ;
-(void)tearDownAudioIO:(BOOL)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)internalSetRemoteBasebandCodecType:(id)arg1 sampleRate:(id)arg2 ;
-(id)getAudioManagerClientWithPid:(id)arg1 create:(BOOL)arg2 ;
-(BOOL)setCurrentInputDevice:(id)arg1 ;
-(BOOL)setCurrentOutputDevice:(id)arg1 ;
-(void)resetAudioSessionOutputPortOverride;
-(void)stopAudioManagerClient:(id)arg1 ;
-(void)setAudioSessionParameters:(id)arg1 ;
-(void)setupAudioNotifications;
-(BOOL)projectionModeEnabledState;
-(void)setAudioSessionProperties;
-(unsigned long long)setupAudioSession;
-(void)invalidateCurrentAudioParams;
-(void)setupInputBeamforming;
-(void)setupVPBlockFormat;
-(void)setSampleRate;
-(void)setBlockSize:(BOOL)arg1 ;
-(BOOL)forceSampleRate:(double*)arg1 ;
-(BOOL)forceBufferFrames:(int*)arg1 ;
-(opaqueCMSessionRef)cmSessionRef;
-(BOOL)shouldCallAudioCallbackOnAudioIOClient:(id)arg1 forDeviceRole:(int)arg2 ;
-(void)setupAudioRelayWithIO:(id)arg1 deviceRole:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)audioRelayWithDeviceRole:(int)arg1 ;
-(void)internalSetupAudioRelayWithIO:(id)arg1 deviceRole:(int)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)handleAudioInterruption:(opaqueCMSessionRef)arg1 interruptionInfo:(CFDictionaryRef)arg2 cmd:(unsigned)arg3 ;
-(void)setBlockSizeDispatch:(BOOL)arg1 ;
-(void)onPlaySound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 averagePower:(float)arg5 deviceRole:(int)arg6 ;
-(void)onCaptureSound:(char*)arg1 numBytes:(int)arg2 numSamples:(int)arg3 timeStamp:(unsigned)arg4 timeStampDelta:(int)arg5 bufferedSamples:(int)arg6 hostTime:(double)arg7 averagePower:(float)arg8 voiceActivity:(unsigned)arg9 deviceRole:(int)arg10 ;
-(void)clearTargetIODevices;
-(AVAudioDevice *)targetInputDevice;
-(void)setTargetInputDevice:(AVAudioDevice *)arg1 ;
-(AVAudioDevice *)targetOutputDevice;
-(void)setTargetOutputDevice:(AVAudioDevice *)arg1 ;
-(void)setMicrophoneMuted:(BOOL)arg1 ;
-(BOOL)isMicrophoneMuted;
@end

