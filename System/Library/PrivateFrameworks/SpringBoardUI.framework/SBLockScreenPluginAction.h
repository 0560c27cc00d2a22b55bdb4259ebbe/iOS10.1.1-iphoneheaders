/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BSAction, NSString;

@interface SBLockScreenPluginAction : NSObject {

	BSAction* _action;
	NSString* _label;
	long long _authenticationPolicy;
	/*^block*/id _completion;

}

@property (nonatomic,copy,readonly) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,copy) NSString * label;                              //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) long long authenticationPolicy;              //@synthesize authenticationPolicy=_authenticationPolicy - In the implementation block
+(id)action;
+(id)actionWithCompletion:(/*^block*/id)arg1 ;
-(id)init;
-(id)completion;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(long long)authenticationPolicy;
-(void)setAuthenticationPolicy:(long long)arg1 ;
-(BOOL)isCallAction;
-(BOOL)isInCallAction;
-(void)sendResponseWithSuccess:(BOOL)arg1 ;
-(BOOL)isApplicationAction;
-(BOOL)isEmergencyDialerAction;
@end

