/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface BackgroundTaskRequest : NSObject {

	NSObject*<OS_xpc_object> _job;
	NSString* _requestIdentifier;

}

@property (nonatomic,copy) NSString * requestIdentifier;              //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
+(id)updateCheckJobWithDate:(id)arg1 allowsCellular:(BOOL)arg2 ;
+(id)xpcActivityWithDuration:(long long)arg1 ;
+(id)requestCheckInWithIdentifier:(id)arg1 ;
-(id)initWithBackgroundTaskAgentJob:(id)arg1 ;
-(id)copyBackgroundTaskAgentJob;
-(id)init;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
@end

