/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface CUStateEvent : NSObject {

	NSString* _name;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
+(id)enterState;
+(id)exitState;
+(id)initialTransition;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(NSDictionary *)userInfo;
-(id)initWithName:(id)arg1 userInfo:(id)arg2 ;
@end

