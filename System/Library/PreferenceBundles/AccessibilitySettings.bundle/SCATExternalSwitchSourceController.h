/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AccessibilitySettings-Structs.h>
#import <Preferences/PSViewController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class AXSwitch, NSString;

@interface SCATExternalSwitchSourceController : PSViewController <UIAlertViewDelegate> {

	BOOL _showingAlert;
	BOOL _addLongPressSwitch;
	BOOL _isVisible;
	AXSwitch* _aSwitch;
	IOHIDDeviceRef _device;
	IOHIDEventSystemClientRef _eventSystemClient;
	IOHIDManagerRef _manager;

}

@property (nonatomic,retain) AXSwitch * aSwitch;                                       //@synthesize aSwitch=_aSwitch - In the implementation block
@property (nonatomic,retain) IOHIDDeviceRef device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef eventSystemClient;              //@synthesize eventSystemClient=_eventSystemClient - In the implementation block
@property (nonatomic,retain) IOHIDManagerRef manager;                                  //@synthesize manager=_manager - In the implementation block
@property (assign,nonatomic) BOOL isVisible;                                           //@synthesize isVisible=_isVisible - In the implementation block
@property (assign,nonatomic) BOOL addLongPressSwitch;                                  //@synthesize addLongPressSwitch=_addLongPressSwitch - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setIsVisible:(BOOL)arg1 ;
-(BOOL)_isSwitchWithName:(id)arg1 ;
-(void)_showSourceDialogWithMessage:(id)arg1 ;
-(void)_showSaveDialogWithMessage:(id)arg1 ;
-(void)_enableNotifications:(BOOL)arg1 ;
-(id)_firstAvailableName;
-(BOOL)_isSwitchWithSource:(NSString*)arg1 keyCode:(unsigned short)arg2 buttonNumber:(unsigned)arg3 ;
-(void)_showSoftwareKeyboard:(BOOL)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)isVisible;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)setASwitch:(AXSwitch *)arg1 ;
-(void)_filterEvents:(BOOL)arg1 ;
-(BOOL)addLongPressSwitch;
-(BOOL)_isKeyboardSwitchWithKeyCode:(unsigned short)arg1 longPress:(BOOL)arg2 ;
-(AXSwitch *)aSwitch;
-(BOOL)_isMFISwitchWithButtonNumber:(unsigned)arg1 longPress:(BOOL)arg2 ;
-(IOHIDEventSystemClientRef)eventSystemClient;
-(id)_keyboardMatching;
-(void)setEventSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)_mfiMatching;
-(void)_handleKeyboardKeyDownEvent:(IOHIDEventRef)arg1 ;
-(void)_handleMFIButtonDownValue:(IOHIDValueRef)arg1 ;
-(void)setAddLongPressSwitch:(BOOL)arg1 ;
-(void)_handleApplicationDidBecomeActive:(id)arg1 ;
-(void)_handleApplicationWillResignActive:(id)arg1 ;
-(IOHIDDeviceRef)device;
-(void)setDevice:(IOHIDDeviceRef)arg1 ;
-(IOHIDManagerRef)manager;
-(void)setManager:(IOHIDManagerRef)arg1 ;
@end

