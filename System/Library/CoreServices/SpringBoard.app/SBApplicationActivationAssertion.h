/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SBApplication, NSString;

@interface SBApplicationActivationAssertion : NSObject {

	SBApplication* _app;
	NSString* _name;

}

@property (nonatomic,readonly) SBApplication * application;              //@synthesize app=_app - In the implementation block
@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
-(id)initWithApplication:(id)arg1 name:(id)arg2 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(SBApplication *)application;
@end

