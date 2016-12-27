/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLAlertViewControllerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class BLAlertAction, NSArray, BLAlertViewController, NSString;

@interface BLAlert : NSObject <BLAlertViewControllerDelegate, UIAlertViewDelegate> {

	BLAlertAction* _cancelAction;
	NSArray* _actions;
	/*^block*/id _conditionBlock;
	id _context;
	/*^block*/id _executionBlock;
	BOOL _showing;
	int _options;
	BLAlertViewController* _alertView;
	BLAlert* _strongSelf;

}

@property (retain) BLAlert * strongSelf;                            //@synthesize strongSelf=_strongSelf - In the implementation block
@property (copy) id conditionBlock;                                 //@synthesize conditionBlock=_conditionBlock - In the implementation block
@property (retain) id context;                                      //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pendingAlerts;
+(id)popPendingAlert;
+(void)pushPendingAlert:(id)arg1 ;
+(void)performWithTitle:(id)arg1 message:(id)arg2 action:(id)arg3 ;
-(void)hide;
-(void)show;
-(void)dealloc;
-(void)setTitle:(id)arg1 ;
-(id)context;
-(void)setMessage:(id)arg1 ;
-(void)setContext:(id)arg1 ;
-(BOOL)isShowing;
-(void)alertViewController:(id)arg1 didPressButtonAtIndex:(long long)arg2 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 cancelAction:(id)arg3 otherActions:(id)arg4 ;
-(id)conditionBlock;
-(void)showPendingAlertIfNeeded;
-(BOOL)wantSingular;
-(void)cancelDelayedHide;
-(void)hideWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 options:(int)arg3 cancelAction:(id)arg4 otherActions:(id)arg5 ;
-(void)showWithExecutionBlock:(/*^block*/id)arg1 ;
-(void)hideWithDelay:(double)arg1 ;
-(void)hideWithDelay:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setConditionBlock:(id)arg1 ;
-(void)hide:(BOOL)arg1 ;
-(BLAlert *)strongSelf;
-(void)setStrongSelf:(BLAlert *)arg1 ;
@end

