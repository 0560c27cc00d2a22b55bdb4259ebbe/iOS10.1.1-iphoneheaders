/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBSceneLayoutViewControllerDelegate.h>
#import <libobjc.A.dylib/FBSceneManagerObserver.h>
#import <libobjc.A.dylib/FBSceneManagerDelegate.h>

@protocol SBSceneManagerDelegate;
@class FBSceneManager, UIScreen, FBSDisplay, SBSceneLayoutWindow, SBSceneLayoutViewController, SBPolicyAggregator, BSCopyingCacheSet, NSCountedSet, NSMutableSet, NSString;

@interface SBSceneManager : NSObject <SBSceneLayoutViewControllerDelegate, FBSceneManagerObserver, FBSceneManagerDelegate> {

	FBSceneManager* _sceneManager;
	UIScreen* _screen;
	FBSDisplay* _display;
	SBSceneLayoutWindow* _window;
	SBSceneLayoutViewController* _layoutController;
	SBPolicyAggregator* _policyAggregator;
	BSCopyingCacheSet* _allScenes;
	BSCopyingCacheSet* _alertScenes;
	BSCopyingCacheSet* _windowScenes;
	BSCopyingCacheSet* _daemonScenes;
	BSCopyingCacheSet* _pluginScenes;
	BSCopyingCacheSet* _workspaceScenes;
	BSCopyingCacheSet* _externalApplicationScenes;
	BSCopyingCacheSet* _externalForegroundApplicationScenes;
	BSCopyingCacheSet* _reportedExternalForegroundApplicationScenes;
	NSCountedSet* _assertedBackgroundScenes;
	NSMutableSet* _outgoingSnapshots;
	NSMutableSet* _incomingSnapshots;
	BOOL _layoutControllerCreationReentrancyGuard;
	id<SBSceneManagerDelegate> _delegate;

}

@property (nonatomic,readonly) FBSDisplay * display;                                        //@synthesize display=_display - In the implementation block
@property (nonatomic,readonly) SBSceneLayoutWindow * window; 
@property (nonatomic,readonly) SBSceneLayoutViewController * layoutController; 
@property (nonatomic,readonly) SBPolicyAggregator * policyAggregator; 
@property (assign,nonatomic,__weak) id<SBSceneManagerDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBPolicyAggregator *)policyAggregator;
-(SBSceneLayoutViewController *)layoutController;
-(id)externalForegroundApplicationScenes;
-(id)_sceneWindowLayoutStrategy;
-(id)_newLayoutControllerForDisplay:(id)arg1 ;
-(id)_newPolicyAggregatorForDisplay:(id)arg1 ;
-(void)_updateStateForScene:(id)arg1 withSettings:(id)arg2 ;
-(id)_snapshotRequestsForApplication:(id)arg1 scene:(id)arg2 settings:(id)arg3 ;
-(long long)_hostingPolicyForScene:(id)arg1 ;
-(BOOL)_shouldFenceTransitionForScene:(id)arg1 updatedClientSettingsDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)_scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4 ;
-(BOOL)_handleAction:(id)arg1 forScene:(id)arg2 ;
-(void)sceneLayoutController:(id)arg1 noteHasVisibleElements:(BOOL)arg2 ;
-(id)allScenes;
-(id)alertScenes;
-(id)windowScenes;
-(id)externalApplicationScenes;
-(id)daemonScenes;
-(id)pluginScenes;
-(id)scenesForWorkspaceWithID:(id)arg1 ;
-(id)assertBackgroundedStatusForScenes:(id)arg1 ;
-(void)destroyAllScenes;
-(id)additionalActionsForApplication:(id)arg1 withTransitionContext:(id)arg2 ;
-(BOOL)_isStarkActivelyConnected;
-(id)init;
-(void)setDelegate:(id<SBSceneManagerDelegate>)arg1 ;
-(void)dealloc;
-(SBSceneLayoutWindow *)window;
-(NSString *)description;
-(id<SBSceneManagerDelegate>)delegate;
-(FBSDisplay *)display;
-(id)initWithDisplay:(id)arg1 ;
-(void)_invalidate;
-(void)_screenDidDisconnect:(id)arg1 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didUpdateClientSettingsWithDiff:(id)arg3 oldClientSettings:(id)arg4 transitionContext:(id)arg5 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 success:(BOOL)arg4 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
-(long long)sceneManager:(id)arg1 hostingPolicyForScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 scene:(id)arg2 didReceiveActions:(id)arg3 ;
-(id)sceneManager:(id)arg1 createDefaultTransitionContextForScene:(id)arg2 ;
@end

