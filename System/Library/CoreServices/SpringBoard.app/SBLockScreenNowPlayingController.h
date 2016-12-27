/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_UISettingsKeyObserver.h>

@protocol SBLockScreenNowPlayingControllerDelegate;
@class SBMediaController, PCPersistentTimer, SBLockScreenSettings, NSString;

@interface SBLockScreenNowPlayingController : NSObject <_UISettingsKeyObserver> {

	SBMediaController* _mediaController;
	PCPersistentTimer* _disableTimer;
	SBLockScreenSettings* _testSettings;
	BOOL _enabled;
	long long _currentState;
	id<SBLockScreenNowPlayingControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBLockScreenNowPlayingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                             //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long currentState;                                                  //@synthesize currentState=_currentState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithMediaController:(id)arg1 ;
-(void)_invalidateDisableTimer;
-(void)_updateNowPlayingPlugin;
-(void)_updateToState:(long long)arg1 ;
-(BOOL)_isMediaRecentlyActive;
-(void)_startDisableTimer;
-(void)_disableTimerFired;
-(BOOL)isNowPlayingActive;
-(void)setDelegate:(id<SBLockScreenNowPlayingControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBLockScreenNowPlayingControllerDelegate>)delegate;
-(long long)currentState;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)_addObservers;
-(void)_removeObservers;
@end

