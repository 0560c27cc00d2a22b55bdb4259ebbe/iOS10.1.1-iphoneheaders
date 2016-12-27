/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MPControllerProtocol.h>
#import <libobjc.A.dylib/MPAVControllerNode.h>

@class MPAVItem, MPAVController, UIView, NSString;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode> {

	id _delegate;
	long long _interfaceOrientation;
	MPAVItem* _item;
	MPAVController* _player;
	unsigned _appearing : 1;
	unsigned _observesApplicationSuspendResumeEventsOnly : 1;
	unsigned _showOverlayWhileAppearingDisabled : 1;
	BOOL _registeredForPlayerNotifications;
	long long _playerLockedCount;
	BOOL _idleTimerDisabled;

}

@property (assign,nonatomic) BOOL registeredForPlayerNotifications;                                                     //@synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications - In the implementation block
@property (assign,nonatomic) BOOL observesApplicationSuspendResumeEventsOnly; 
@property (assign,setter=setIdleTimerDisabled:,getter=idleTimerDisabled,nonatomic) BOOL idleTimerDisabled;              //@synthesize idleTimerDisabled=_idleTimerDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id delegate;                                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                                           //@synthesize item=_item - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                     //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                                                   //@synthesize player=_player - In the implementation block
@property (nonatomic,retain,readonly) UIView * view; 
-(id)init;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(MPAVItem *)item;
-(void)setIdleTimerDisabled:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(long long)orientation;
-(void)setView:(UIView *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)addChildViewController:(id)arg1 ;
-(BOOL)_canReloadView;
-(void)removeChildViewController:(id)arg1 ;
-(void)setItem:(MPAVItem *)arg1 ;
-(BOOL)idleTimerDisabled;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)clearWeakReferencesToObject:(id)arg1 ;
-(void)noteIgnoredChangeTypes:(unsigned long long)arg1 ;
-(void)setObservesApplicationSuspendResumeEventsOnly:(BOOL)arg1 ;
-(void)beginIgnoringChangeTypes:(unsigned long long)arg1 ;
-(void)endIgnoringChangeTypes:(unsigned long long)arg1 ;
-(void)stopTicking;
-(void)startTicking;
-(void)applicationDidSuspendEventsOnly;
-(void)applicationDidResumeEventsOnly;
-(void)applicationResumed;
-(void)lockPlayer;
-(void)unlockPlayer;
-(void)setRegisteredForPlayerNotifications:(BOOL)arg1 ;
-(void)incrementAggregateStatisticsDisplayCount;
-(BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(id)copyOverlayViewForTransitionToItem:(id)arg1 ;
-(void)beginTransitionOverlayHidding;
-(void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1 ;
-(void)didChangeToInterfaceOrientation:(long long)arg1 ;
-(long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1 ;
-(BOOL)observesApplicationSuspendResumeEventsOnly;
-(void)willChangeToInterfaceOrientation:(long long)arg1 ;
-(BOOL)registeredForPlayerNotifications;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)setAppearing:(BOOL)arg1 ;
-(BOOL)isAppearing;
@end

