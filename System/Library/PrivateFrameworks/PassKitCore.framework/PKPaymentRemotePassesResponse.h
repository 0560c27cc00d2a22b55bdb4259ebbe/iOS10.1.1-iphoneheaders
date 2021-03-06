/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSArray, NSString;

@interface PKPaymentRemotePassesResponse : PKPaymentWebServiceResponse {

	NSArray* _remotePasses;
	NSString* _lastUpdated;

}

@property (nonatomic,copy,readonly) NSArray * remotePasses;              //@synthesize remotePasses=_remotePasses - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSString *)lastUpdated;
-(NSArray *)remotePasses;
@end

