/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ToneLibrary/ToneLibrary-Structs.h>
#import <libobjc.A.dylib/TLAlertPlaybackBackEndController.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString, AVQueuePlayer, TLAlert;

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController> {

	NSObject*<OS_dispatch_queue> _audioEventQueue;
	NSString* _audioEventQueueLabel;
	BOOL _isObservingQueuePlayer;
	AVQueuePlayer* _queuePlayer;
	TLAlert* _playingAlert;
	NSString* _playingToneIdentifier;
	/*^block*/id _playingAlertCompletionHandler;
	NSString* _previousAudioCategory;
	unsigned long long _previousAudioCategoryOptions;
	BOOL _isBypassingRingerSwitchPolicy;
	BOOL _isAudioSessionActive;
	unsigned long long _audioSessionDeactivationPreventionRequestsCount;
	BOOL _isObservingAudioSessionInterruptionNotification;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_propertyKeysOfInterestForToneAssets;
+(BOOL)_shouldVibrateForAlert:(id)arg1 ;
+(id)_audioCategoryForAlert:(id)arg1 ;
+(BOOL)_shouldBypassRingerSwitchPolicyForAlert:(id)arg1 ;
+(id)_clientNameForAlert:(id)arg1 ;
+(long long)_clientPriorityForAlert:(id)arg1 ;
+(BOOL)_shouldHandleAudioSessionActivationForAlert:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_stopPlayingAlerts:(id)arg1 withOptions:(SCD_Struct_TL3)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)playAlert:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)stopPlayingAlerts:(id)arg1 withOptions:(SCD_Struct_TL3)arg2 playbackCompletionType:(long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2 ;
-(void)performBlockOnAudioEventQueue:(/*^block*/id)arg1 ;
-(void)_destroyQueuePlayer;
-(void)_updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2 ;
-(void)_assertRunningOnAudioEventQueue;
-(void)_beginPreventingAudioSessionDeactivation;
-(void)_stopPlayback;
-(void)_didCompletePlaybackWithCompletionType:(long long)arg1 error:(id)arg2 ;
-(void)_reloadPlaybackForPlayingAlertWithToneIdentifier:(id)arg1 ;
-(void)_endPreventingAudioSessionDeactivation;
-(void)_stopPlaybackWithOptions:(SCD_Struct_TL3)arg1 playerWasAlreadyPausedExternally:(BOOL)arg2 ;
-(void)_createQueuePlayerIfNecessary;
-(void)_startPlaybackForAssetWithLoadedProperties:(id)arg1 alert:(id)arg2 ;
-(id)_fallbackToneIdentifierForPlayingAlert;
-(BOOL)_canPlayToneAsset:(id)arg1 ;
-(void)_stopObservingQueuePlayer;
-(void)_willBeginPlayingAlert;
-(void)_startObservingQueuePlayer;
-(void)_didEndPlayingAlert;
-(float)_audioVolumeForAlert:(id)arg1 audioCategory:(id)arg2 ;
-(void)_activateAudioSessionIfNeeded;
-(void)_deactivateAudioSessionIfNeeded;
-(void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2 ;
-(void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2 ;
-(void)_startObservingAudioSessionInterruptionNotifications;
-(void)_stopObservingAudioSessionInterruptionNotifications;
-(void)_handleAudioSessionInterruptionNotification:(id)arg1 ;
-(void)_handleAudioSessionInterruptionOfType:(unsigned long long)arg1 withOptions:(unsigned long long)arg2 ;
@end

