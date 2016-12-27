/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSTimer;

@interface TPStatusBarManager : NSObject {

	NSString* _currentAbbreviatedStatusBarString;
	NSTimer* _callDurationTimer;

}

@property (nonatomic,retain) NSTimer * callDurationTimer;                             //@synthesize callDurationTimer=_callDurationTimer - In the implementation block
@property (nonatomic,copy) NSString * currentAbbreviatedStatusBarString;              //@synthesize currentAbbreviatedStatusBarString=_currentAbbreviatedStatusBarString - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)updateCurrentAbbreviatedStatusBarStringAndSendNotification;
-(void)updateCurrentAbbreviatedStatusBarString;
-(NSTimer *)callDurationTimer;
-(NSString *)currentAbbreviatedStatusBarString;
-(void)setCurrentAbbreviatedStatusBarString:(NSString *)arg1 ;
-(void)setCallDurationTimer:(NSTimer *)arg1 ;
@end

