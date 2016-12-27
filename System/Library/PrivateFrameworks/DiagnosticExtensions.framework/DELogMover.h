/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensions.framework/DiagnosticExtensions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString;

@interface DELogMover : NSObject {

	NSObject*<OS_xpc_object> _conn;
	NSString* _serviceName;

}

@property (nonatomic,readonly) NSString * serviceName;              //@synthesize serviceName=_serviceName - In the implementation block
+(void)moveSystemLogsWithExtensions:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(BOOL)sendRequestReturningBooleanResponse:(id)arg1 withSuccessKey:(char*)arg2 ;
-(NSString *)serviceName;
@end

