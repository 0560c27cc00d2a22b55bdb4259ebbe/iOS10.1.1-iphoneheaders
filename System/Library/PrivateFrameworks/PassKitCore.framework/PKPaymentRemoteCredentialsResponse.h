/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray;

@interface PKPaymentRemoteCredentialsResponse : PKPaymentWebServiceResponse {

	NSArray* _credentials;

}

@property (nonatomic,copy,readonly) NSArray * credentials;              //@synthesize credentials=_credentials - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)credentials;
@end

