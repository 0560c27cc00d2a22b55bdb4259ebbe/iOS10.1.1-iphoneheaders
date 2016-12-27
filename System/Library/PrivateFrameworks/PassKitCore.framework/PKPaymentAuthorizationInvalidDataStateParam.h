/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentAuthorizationStateParam.h>

@class NSError;

@interface PKPaymentAuthorizationInvalidDataStateParam : PKPaymentAuthorizationStateParam {

	long long _dataType;
	long long _status;
	NSError* _error;

}

@property (assign,nonatomic) long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (assign,nonatomic) long long status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSError * error;                 //@synthesize error=_error - In the implementation block
+(id)paramWithDataType:(long long)arg1 status:(long long)arg2 error:(id)arg3 ;
-(id)description;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setDataType:(long long)arg1 ;
-(long long)dataType;
@end

