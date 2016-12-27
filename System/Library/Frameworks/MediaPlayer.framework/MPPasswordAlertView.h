/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UITextField, NSString;

@interface MPPasswordAlertView : UIAlertView <UIAlertViewDelegate> {

	/*^block*/id _completionHandler;
	long long _style;
	UITextField* _passwordTextField;

}

@property (nonatomic,readonly) long long style;                     //@synthesize style=_style - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(long long)style;
-(id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 cancelButtonTitle:(id)arg4 otherButtonTitles:(id)arg5 ;
-(id)initWithStyle:(long long)arg1 routeName:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

