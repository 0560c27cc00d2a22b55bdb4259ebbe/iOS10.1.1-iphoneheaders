/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentPassRequest : PKPaymentWebServiceRequest {

	NSString* _passTypeID;
	NSString* _serialNumber;

}

@property (nonatomic,copy) NSString * passTypeID;                //@synthesize passTypeID=_passTypeID - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;              //@synthesize serialNumber=_serialNumber - In the implementation block
-(NSString *)serialNumber;
-(id)initWithPassTypeID:(id)arg1 serialNumber:(id)arg2 ;
-(id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 ;
-(NSString *)passTypeID;
-(void)setPassTypeID:(NSString *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
@end

