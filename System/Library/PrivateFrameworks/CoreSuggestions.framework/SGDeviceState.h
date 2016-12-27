/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SGDeviceState : NSObject
+(BOOL)isDeviceFormattedForProtection;
+(void)blockUntilFirstUnlock;
+(void)runBlockWhenDeviceIsReadyForSuggestions:(/*^block*/id)arg1 ;
+(BOOL)isClassCLocked;
+(int)lockState;
+(id)registerForLockStateChangeNotifications:(/*^block*/id)arg1 ;
+(id)currentOsBuild;
+(void)unregisterForLockStateChangeNotifications:(id)arg1 ;
+(BOOL)isUnlocked;
@end

