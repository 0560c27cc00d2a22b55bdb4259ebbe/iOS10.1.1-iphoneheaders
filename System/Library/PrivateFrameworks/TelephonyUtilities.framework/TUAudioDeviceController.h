/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUAudioDeviceControllerActions.h>

@protocol OS_dispatch_queue, TUAudioDeviceControllerActions;
@class AVAudioClient, NSObject, NSHashTable, AVAudioDevice, NSArray, NSString;

@interface TUAudioDeviceController : NSObject <TUAudioDeviceControllerActions> {

	AVAudioClient* _audioClient;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSHashTable* _delegates;
	id<TUAudioDeviceControllerActions> _actionsDelegate;

}

@property (nonatomic,retain) AVAudioClient * audioClient;                                            //@synthesize audioClient=_audioClient - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                               //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * delegates;                                                //@synthesize delegates=_delegates - In the implementation block
@property (assign,nonatomic,__weak) id<TUAudioDeviceControllerActions> actionsDelegate;              //@synthesize actionsDelegate=_actionsDelegate - In the implementation block
@property (nonatomic,retain) AVAudioDevice * currentInputDevice; 
@property (nonatomic,retain) AVAudioDevice * currentOutputDevice; 
@property (nonatomic,readonly) NSArray * devices; 
@property (nonatomic,readonly) NSArray * inputDevices; 
@property (nonatomic,readonly) NSArray * outputDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)debugDescription;
-(id<TUAudioDeviceControllerActions>)actionsDelegate;
-(void)setActionsDelegate:(id<TUAudioDeviceControllerActions>)arg1 ;
-(AVAudioClient *)audioClient;
-(void)setCurrentInputDeviceToDeviceWithUID:(id)arg1 ;
-(void)setCurrentOutputDeviceToDeviceWithUID:(id)arg1 ;
-(id)initWithActionsDelegate:(id)arg1 serialQueue:(id)arg2 ;
-(void)choosePreferredDeviceIfNecessary;
-(void)setAudioClient:(AVAudioClient *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(AVAudioDevice *)currentInputDevice;
-(AVAudioDevice *)currentOutputDevice;
-(NSArray *)inputDevices;
-(NSArray *)outputDevices;
-(void)setCurrentInputDevice:(AVAudioDevice *)arg1 ;
-(void)setCurrentOutputDevice:(AVAudioDevice *)arg1 ;
-(NSArray *)devices;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(NSHashTable *)delegates;
-(void)setDelegates:(NSHashTable *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

