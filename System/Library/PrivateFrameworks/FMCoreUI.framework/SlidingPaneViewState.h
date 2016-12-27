/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIViewController, ISPaneFrameView, UIVisualEffectView, NSLayoutConstraint;

@interface SlidingPaneViewState : NSObject {

	BOOL _shouldNotifyOfPaneSizeChanges;
	UIViewController* _paneViewController;
	ISPaneFrameView* _paneView;
	UIVisualEffectView* _visualEffectView;
	NSLayoutConstraint* _paneVerticalPositionConstraint;
	NSLayoutConstraint* _paneHorizontalPositionConstraint;
	unsigned long long _edge;

}

@property (nonatomic,retain) UIViewController * paneViewController;                              //@synthesize paneViewController=_paneViewController - In the implementation block
@property (nonatomic,retain) ISPaneFrameView * paneView;                                         //@synthesize paneView=_paneView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * visualEffectView;                              //@synthesize visualEffectView=_visualEffectView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paneVerticalPositionConstraint;                //@synthesize paneVerticalPositionConstraint=_paneVerticalPositionConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * paneHorizontalPositionConstraint;              //@synthesize paneHorizontalPositionConstraint=_paneHorizontalPositionConstraint - In the implementation block
@property (assign,nonatomic) BOOL shouldNotifyOfPaneSizeChanges;                                 //@synthesize shouldNotifyOfPaneSizeChanges=_shouldNotifyOfPaneSizeChanges - In the implementation block
@property (assign,nonatomic) unsigned long long edge;                                            //@synthesize edge=_edge - In the implementation block
-(void)dealloc;
-(void)setEdge:(unsigned long long)arg1 ;
-(void)setVisualEffectView:(UIVisualEffectView *)arg1 ;
-(UIVisualEffectView *)visualEffectView;
-(void)setPaneViewController:(UIViewController *)arg1 ;
-(ISPaneFrameView *)paneView;
-(id)initWithViewController:(id)arg1 edge:(unsigned long long)arg2 ;
-(UIViewController *)paneViewController;
-(void)setPaneView:(ISPaneFrameView *)arg1 ;
-(NSLayoutConstraint *)paneVerticalPositionConstraint;
-(void)setPaneVerticalPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)paneHorizontalPositionConstraint;
-(void)setPaneHorizontalPositionConstraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)shouldNotifyOfPaneSizeChanges;
-(void)setShouldNotifyOfPaneSizeChanges:(BOOL)arg1 ;
-(unsigned long long)edge;
@end

