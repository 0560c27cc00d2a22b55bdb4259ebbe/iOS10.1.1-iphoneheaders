/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <libobjc.A.dylib/FBSceneMonitorDelegate.h>
#import <SpringBoard/SBApplicationHosting.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol SBAppViewControllerDelegate;
@class NSString, SBApplication, SBAppView, SBActivationSettings, NSMutableSet, NSSet, FBSceneMonitor, SBOrientationTransformWrapperView;

@interface SBAppViewController : UIViewController <SBAppViewHostRequester, FBSceneMonitorDelegate, SBApplicationHosting, BSInvalidatable> {

	NSString* _identifier;
	NSString* _bundleIdentifier;
	SBApplication* _hostedApp;
	SBAppView* _hostedAppView;
	SBActivationSettings* _activationSettings;
	NSMutableSet* _activeTransitions;
	NSSet* _actionsToDeliver;
	FBSceneMonitor* _sceneMonitor;
	long long _requestedMode;
	long long _currentMode;
	BOOL _ignoresOcclusions;
	BOOL _invalidated;
	BOOL _automatesLifecycle;
	unsigned long long _options;
	id<SBAppViewControllerDelegate> _delegate;
	SBOrientationTransformWrapperView* _orientationWrapperView;

}

@property (nonatomic,retain) SBOrientationTransformWrapperView * orientationWrapperView;              //@synthesize orientationWrapperView=_orientationWrapperView - In the implementation block
@property (assign,nonatomic,__weak) id<SBAppViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic) BOOL automatesLifecycle;                                                 //@synthesize automatesLifecycle=_automatesLifecycle - In the implementation block
@property (assign,nonatomic) long long requestedMode;                                                 //@synthesize requestedMode=_requestedMode - In the implementation block
@property (nonatomic,readonly) long long currentMode;                                                 //@synthesize currentMode=_currentMode - In the implementation block
@property (nonatomic,readonly) SBAppView * appView;                                                   //@synthesize hostedAppView=_hostedAppView - In the implementation block
@property (assign,nonatomic) unsigned long long options;                                              //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) BOOL ignoresOcclusions;                                                  //@synthesize ignoresOcclusions=_ignoresOcclusions - In the implementation block
@property (nonatomic,retain) NSSet * actionsToDeliver;                                                //@synthesize actionsToDeliver=_actionsToDeliver - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)hostedApp;
-(BOOL)isHostingAnApp;
-(BOOL)canHostAnApp;
-(void)hostedAppWillRotateToInterfaceOrientation:(long long)arg1 ;
-(void)_setCurrentMode:(long long)arg1 ;
-(SBAppView *)appView;
-(NSSet *)actionsToDeliver;
-(void)setActionsToDeliver:(NSSet *)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(long long)appViewRequesterPriority:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 andApplication:(id)arg2 ;
-(void)setAutomatesLifecycle:(BOOL)arg1 ;
-(void)setIgnoresOcclusions:(BOOL)arg1 ;
-(long long)requestedMode;
-(void)setRequestedMode:(long long)arg1 ;
-(void)_sendActions:(id)arg1 ;
-(void)_updateForAppearanceState:(int)arg1 ;
-(void)_reallyActivateApp;
-(void)_deactivateHostedApp;
-(void)_destroyAppView;
-(void)_resetOrientationWrapperView;
-(void)_createAppView;
-(void)_activateApp;
-(BOOL)automatesLifecycle;
-(BOOL)ignoresOcclusions;
-(SBOrientationTransformWrapperView *)orientationWrapperView;
-(void)setOrientationWrapperView:(SBOrientationTransformWrapperView *)arg1 ;
-(void)setDelegate:(id<SBAppViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBAppViewControllerDelegate>)delegate;
-(void)invalidate;
-(NSString *)bundleIdentifier;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)currentMode;
-(void)viewDidLoad;
-(void)willMoveToParentViewController:(id)arg1 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)sceneMonitor:(id)arg1 sceneSettingsDidChangeWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(void)sceneMonitor:(id)arg1 sceneWasDestroyed:(id)arg2 ;
@end

