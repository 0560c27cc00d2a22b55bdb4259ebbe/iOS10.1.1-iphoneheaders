/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBPasscodeEntryAlertView.h>

@class SUAutoInstallOperation;

@interface SBInstallTonightPasscodeEntryAlertView : SBPasscodeEntryAlertView {

	SUAutoInstallOperation* _installOperation;

}
-(void)alertDisplayWillBecomeVisible;
-(/*^block*/id)_passcodeViewGenerator;
-(void)setInstallTonightOperation:(id)arg1 ;
-(id)_bodyTextToModelSpecificLocalizedKey:(id)arg1 ;
@end

