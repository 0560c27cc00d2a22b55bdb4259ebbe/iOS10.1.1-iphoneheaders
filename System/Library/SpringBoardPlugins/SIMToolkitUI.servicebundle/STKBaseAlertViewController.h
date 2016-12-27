/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/SIMToolkitUI.servicebundle/SIMToolkitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SBUISlidingFullscreenAlertController.h>

@class STKAlert, NSTimer;

@interface STKBaseAlertViewController : SBUISlidingFullscreenAlertController {

	STKAlert* _alert;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,retain) STKAlert * alert;              //@synthesize alert=_alert - In the implementation block
-(BOOL)allowSuspension;
-(void)dealloc;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidUnload;
-(void)dismiss;
-(STKAlert *)alert;
-(void)setAlert:(STKAlert *)arg1 ;
-(id)initWithAlert:(id)arg1 ;
-(void)startTimeoutTimerIfNecessary;
-(void)clearTimeoutTimer;
-(void)displayDidTimeout;
-(void)restartTimeoutTimer:(float)arg1 ;
-(BOOL)_delayEnabled;
@end

