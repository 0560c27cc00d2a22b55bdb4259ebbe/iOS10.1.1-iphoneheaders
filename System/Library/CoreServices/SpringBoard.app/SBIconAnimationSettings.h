/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBUISettings.h>

@class SBAnimationSettings;

@interface SBIconAnimationSettings : SBUISettings {

	SBAnimationSettings* _centralAnimationSettings;

}

@property (retain) SBAnimationSettings * centralAnimationSettings;              //@synthesize centralAnimationSettings=_centralAnimationSettings - In the implementation block
+(id)settingsControllerModule;
-(SBAnimationSettings *)centralAnimationSettings;
-(id)centralAnimationSettingsWithAdditionalDelays;
-(void)setCentralAnimationSettings:(SBAnimationSettings *)arg1 ;
-(void)setDefaultValues;
@end

