/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBLockOverlayViewController.h>

@class SBLockScreenTemperatureWarningView, NSString;

@interface SBLockScreenTemperatureWarningViewController : SBLockOverlayViewController {

	SBLockScreenTemperatureWarningView* _warningView;

}

@property (nonatomic,__weak,readonly) NSString * slideToUnlockText; 
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(NSString *)slideToUnlockText;
@end

