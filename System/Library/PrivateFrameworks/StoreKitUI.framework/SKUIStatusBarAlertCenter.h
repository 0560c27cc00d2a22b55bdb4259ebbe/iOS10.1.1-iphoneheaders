/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_SKUIStatusBarAlertViewControllerDelegate.h>

@class _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController, NSString;

@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate> {

	double _duration;
	/*^block*/id _actionBlock;
	_SKUIClickThroughWindow* _window;
	_SKUIStatusBarAlertViewController* _rootViewController;

}

@property (nonatomic,readonly) _SKUIClickThroughWindow * window;                                    //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) _SKUIStatusBarAlertViewController * rootViewController;              //@synthesize rootViewController=_rootViewController - In the implementation block
@property (assign,nonatomic) double duration;                                                       //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isVisible,nonatomic) BOOL visible; 
@property (nonatomic,copy) id actionBlock;                                                          //@synthesize actionBlock=_actionBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * message; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedCenter;
-(id)init;
-(_SKUIClickThroughWindow *)window;
-(double)duration;
-(_SKUIStatusBarAlertViewController *)rootViewController;
-(void)setDuration:(double)arg1 ;
-(void)setVisible:(BOOL)arg1 ;
-(BOOL)isVisible;
-(void)dismiss;
-(NSString *)message;
-(id)actionBlock;
-(void)setActionBlock:(id)arg1 ;
-(void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(/*^block*/id)arg4 ;
-(void)unscheduleDismiss;
-(void)scheduleDismiss;
-(void)statusBarAlertViewControllerWasTapped:(id)arg1 ;
@end

