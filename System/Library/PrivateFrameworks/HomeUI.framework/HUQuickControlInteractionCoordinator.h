/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HUQuickControlControllableView, HUQuickControlInteractionCoordinatorDelegate, HUQuickControlInteractionHost;
@class UIView;

@interface HUQuickControlInteractionCoordinator : NSObject {

	BOOL _userInteractionEnabled;
	UIView*<HUQuickControlControllableView> _controlView;
	id<HUQuickControlInteractionCoordinatorDelegate> _delegate;
	id<HUQuickControlInteractionHost> _interactionHost;

}

@property (assign,getter=isUserInteractionEnabled,nonatomic) BOOL userInteractionEnabled;                   //@synthesize userInteractionEnabled=_userInteractionEnabled - In the implementation block
@property (getter=isUserInteractionActive,nonatomic,readonly) BOOL userInteractionActive; 
@property (nonatomic,retain) id value; 
@property (nonatomic,readonly) UIView*<HUQuickControlControllableView> controlView;                         //@synthesize controlView=_controlView - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlInteractionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlInteractionHost> interactionHost;                      //@synthesize interactionHost=_interactionHost - In the implementation block
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<HUQuickControlInteractionCoordinatorDelegate>)arg1 ;
-(id<HUQuickControlInteractionCoordinatorDelegate>)delegate;
-(BOOL)isUserInteractionEnabled;
-(UIView*<HUQuickControlControllableView>)controlView;
-(id)initWithControlView:(id)arg1 delegate:(id)arg2 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(BOOL)isUserInteractionActive;
-(id<HUQuickControlInteractionHost>)interactionHost;
-(void)setInteractionHost:(id<HUQuickControlInteractionHost>)arg1 ;
@end

