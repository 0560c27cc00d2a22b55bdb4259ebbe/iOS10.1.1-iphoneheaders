/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSString, NSData;

@interface CKDCodeFunctionInvokeOperation : CKDDatabaseOperation {

	/*^block*/id _functionInvokeCompletionBlock;
	NSString* _serviceName;
	NSString* _functionName;
	NSData* _serializedArguments;
	NSData* _serializedResponse;

}

@property (nonatomic,copy,readonly) NSString * serviceName;               //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy,readonly) NSString * functionName;              //@synthesize functionName=_functionName - In the implementation block
@property (nonatomic,readonly) NSData * serializedArguments;              //@synthesize serializedArguments=_serializedArguments - In the implementation block
@property (nonatomic,copy) NSData * serializedResponse;                   //@synthesize serializedResponse=_serializedResponse - In the implementation block
@property (nonatomic,copy) id functionInvokeCompletionBlock;              //@synthesize functionInvokeCompletionBlock=_functionInvokeCompletionBlock - In the implementation block
-(void)main;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setFunctionInvokeCompletionBlock:(id)arg1 ;
-(id)nameForState:(unsigned long long)arg1 ;
-(id)activityCreate;
-(BOOL)makeStateTransition;
-(NSString *)functionName;
-(void)_invokeFunction;
-(NSData *)serializedArguments;
-(void)setSerializedResponse:(NSData *)arg1 ;
-(id)functionInvokeCompletionBlock;
-(NSData *)serializedResponse;
-(NSString *)serviceName;
@end

