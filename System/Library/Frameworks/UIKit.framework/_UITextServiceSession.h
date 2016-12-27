/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIViewController, UIPopoverController, NSString;

@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate> {

	long long _type;
	UIViewController* _modalViewController;
	UIPopoverController* _popoverController;
	BOOL _isTextEffectsWindow;
	BOOL _dismissed;
	/*^block*/id _dismissedHandler;

}

@property (nonatomic,copy) id dismissedHandler;                     //@synthesize dismissedHandler=_dismissedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canShowTextServices;
+(id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(CGRect)arg3 inView:(id)arg4 ;
+(id)showServiceForText:(id)arg1 selectedTextRange:(NSRange)arg2 type:(long long)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
+(id)textServiceSessionForType:(long long)arg1 ;
+(BOOL)shouldPresentAsPopoverForServiceOfType:(long long)arg1 inView:(id)arg2 ;
-(id)init;
-(long long)type;
-(id)initWithType:(long long)arg1 ;
-(void)dismissTextServiceAnimated:(BOOL)arg1 ;
-(void)setDismissedHandler:(id)arg1 ;
-(BOOL)isDisplaying;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)_endSession;
-(void)sessionDidDismiss;
-(id)dismissedHandler;
@end

