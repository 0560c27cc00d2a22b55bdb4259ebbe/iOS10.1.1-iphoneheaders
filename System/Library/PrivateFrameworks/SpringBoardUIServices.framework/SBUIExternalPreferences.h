/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUserDefaults;

@interface SBUIExternalPreferences : NSObject {

	NSUserDefaults* _soundDefaults;
	BOOL _keyboardPlaysSounds;

}

@property (assign,nonatomic) BOOL keyboardPlaysSounds;              //@synthesize keyboardPlaysSounds=_keyboardPlaysSounds - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)keyboardPlaysSounds;
-(void)setKeyboardPlaysSounds:(BOOL)arg1 ;
@end

