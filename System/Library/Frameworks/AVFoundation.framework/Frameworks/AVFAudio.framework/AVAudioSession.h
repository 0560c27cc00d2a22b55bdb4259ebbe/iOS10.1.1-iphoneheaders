/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVFAudio/AVFAudio-Structs.h>
@class NSArray, NSString, AVAudioSessionRouteDescription, AVAudioSessionPortDescription;

@interface AVAudioSession : NSObject {

	void* _impl;

}

@property (readonly) NSArray * availableCategories; 
@property (readonly) NSString * category; 
@property (readonly) unsigned long long categoryOptions; 
@property (readonly) NSArray * availableModes; 
@property (readonly) NSString * mode; 
@property (getter=isOtherAudioPlaying,readonly) BOOL otherAudioPlaying; 
@property (readonly) BOOL secondaryAudioShouldBeSilencedHint; 
@property (readonly) AVAudioSessionRouteDescription * currentRoute; 
@property (readonly) AVAudioSessionPortDescription * preferredInput; 
@property (readonly) NSArray * availableInputs; 
+(id)sharedInstance;
+(id)auxiliarySession;
+(id)retrieveSessionWithID:(unsigned)arg1 ;
+(id)primarySession;
-(long long)outputNumberOfChannels;
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)delegate;
-(NSString *)category;
-(NSString *)mode;
-(NSArray *)availableModes;
-(double)sampleRate;
-(unsigned)opaqueSessionID;
-(long long)inputNumberOfChannels;
-(BOOL)setActive:(BOOL)arg1 withFlags:(long long)arg2 error:(id*)arg3 ;
-(BOOL)setPreferredHardwareSampleRate:(double)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredIOBufferDuration:(double)arg1 error:(id*)arg2 ;
-(double)preferredHardwareSampleRate;
-(double)preferredIOBufferDuration;
-(double)currentHardwareSampleRate;
-(long long)currentHardwareInputNumberOfChannels;
-(long long)currentHardwareOutputNumberOfChannels;
-(double)outputSampleRate;
-(BOOL)silenceOutput:(unsigned long long)arg1 error:(id*)arg2 ;
-(id)audioFormats;
-(AVAudioSessionRouteDescription *)currentRoute;
-(BOOL)isPiPAvailable;
-(BOOL)setCategory:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)promptStyle;
-(double)IOBufferDuration;
-(long long)audioFormat;
-(id)initWithSessionType:(unsigned)arg1 ;
-(BOOL)setActivationContext:(id)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setActive:(BOOL)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)setMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)setCategory:(id)arg1 withOptions:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)outputDataSources;
-(id)initWithSessionID:(unsigned)arg1 ;
-(BOOL)isInputAvailable;
-(BOOL)inputIsAvailable;
-(BOOL)isPrimary;
-(AVAudioSessionImpl*)privateGetImplementation;
-(float)outputVolume;
-(double)outputLatency;
-(BOOL)clearInputPreferences:(id*)arg1 ;
-(BOOL)setIAmTheAssistant:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)inputLatency;
-(double)speechDetectionDeviceSampleRate;
-(void)privateMarkKVOPropertiesDirty:(unsigned long long)arg1 ;
-(void)registerForServerUpNotifications;
-(void)unregisterForServerUpNotifications;
-(void)privateHandleServerReturned;
-(BOOL)privateSetPropertyValue:(unsigned)arg1 withBool:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)privateSetOptions:(unsigned long long)arg1 forCategory:(id)arg2 error:(id*)arg3 ;
-(void)privateUpdateInputGain:(id)arg1 ;
-(id)privateGetDataSources:(BOOL)arg1 ;
-(id)privateGetSelectedDataSource:(BOOL)arg1 ;
-(id)privateConfigureRouteDescription:(id)arg1 ;
-(id)privateRefreshAvailableInputs;
-(double)preferredSampleRate;
-(unsigned long long)categoryOptions;
-(NSArray *)availableCategories;
-(BOOL)setCategory:(id)arg1 mode:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)deactivateAndSetInterruptionPriority:(long long)arg1 error:(id*)arg2 ;
-(unsigned long long)recordPermission;
-(void)requestRecordPermission:(/*^block*/id)arg1 ;
-(BOOL)setPreferredIOBufferFrameSize:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(BOOL)setInputGain:(float)arg1 error:(id*)arg2 ;
-(BOOL)setInputDataSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)setOutputDataSource:(id)arg1 error:(id*)arg2 ;
-(BOOL)isDolbyDigitalEncoderAvailable;
-(BOOL)isEarpieceActiveNoiseCancelationEnabled;
-(BOOL)forceSoundCheck;
-(BOOL)setForceSoundCheck:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)lastActivationStoppedNowPlayingApp;
-(BOOL)allowAllBuiltInDataSources;
-(void)setAllowAllBuiltInDataSources:(BOOL)arg1 ;
-(BOOL)setBypassRingerSwitchPolicy:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)isHardwareFormatFixedToMultiChannel;
-(BOOL)fixHardwareFormatToMultiChannel:(BOOL)arg1 error:(id*)arg2 ;
-(float)inputGain;
-(id)inputDataSources;
-(id)inputDataSource;
-(id)outputDataSource;
-(BOOL)isInputGainSettable;
-(BOOL)isOtherAudioPlaying;
-(BOOL)secondaryAudioShouldBeSilencedHint;
-(double)inputSafetyOffset;
-(double)outputSafetyOffset;
-(unsigned long long)IOBufferFrameSize;
-(long long)interruptionPriority;
-(unsigned long long)preferredIOBufferFrameSize;
-(long long)preferredInputNumberOfChannels;
-(long long)preferredOutputNumberOfChannels;
-(long long)maximumInputNumberOfChannels;
-(long long)maximumOutputNumberOfChannels;
-(BOOL)overrideOutputAudioPort:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)setPreferredInput:(id)arg1 error:(id*)arg2 ;
-(AVAudioSessionPortDescription *)preferredInput;
-(NSArray *)availableInputs;
-(BOOL)setDisallowedPorts:(id)arg1 error:(id*)arg2 ;
-(BOOL)setDefaultChatMode:(id)arg1 error:(id*)arg2 ;
-(BOOL)preferDecoupledIO:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)setAggregatedIOPreference:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)decoupledIO;
-(BOOL)setPreferredInputSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredInputSampleRate;
-(BOOL)setPreferredOutputSampleRate:(double)arg1 error:(id*)arg2 ;
-(double)preferredOutputSampleRate;
-(double)inputSampleRate;
-(BOOL)setSpeakerThermalGain:(float)arg1 error:(id*)arg2 ;
-(BOOL)setHapticThermalGain:(float)arg1 error:(id*)arg2 ;
-(float)speakerThermalGain;
-(float)hapticThermalGain;
-(void)privateInputIsAvailableChanged:(id)arg1 ;
-(void)privateInterruptionWithInfo:(id)arg1 ;
-(void)privateHandleServerDied;
-(void)privateHandlePickableRoutesChange;
-(void)privateHandleSecondaryAudioHintChange:(id)arg1 ;
-(void)privateUpdatePiPAvailabilityChange:(id)arg1 ;
-(void)privateUpdateOutputVolume:(id)arg1 ;
-(void)privateUpdatePromptStyle:(id)arg1 ;
-(void)privateUpdateDataSources:(id)arg1 forInput:(BOOL)arg2 ;
-(void)privateUpdateAudioFormats:(id)arg1 ;
-(void)privateUpdateAudioFormat:(id)arg1 ;
-(void)privateUpdateInputChannelCount:(id)arg1 ;
-(void)privateUpdateOutputChannelCount:(id)arg1 ;
-(BOOL)setInterruptionPriority:(long long)arg1 error:(id*)arg2 ;
-(unsigned long long)sessionType;
-(BOOL)setPreferredOutputNumberOfChannels:(long long)arg1 error:(id*)arg2 ;
-(id)initAuxiliarySession;
@end

