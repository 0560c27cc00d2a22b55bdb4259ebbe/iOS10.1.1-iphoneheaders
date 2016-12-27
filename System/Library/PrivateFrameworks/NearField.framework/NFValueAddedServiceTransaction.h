/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString, NSNumber, NSError;

@interface NFValueAddedServiceTransaction : NSObject <NSSecureCoding> {

	unsigned _result;
	NSData* _merchantId;
	NSString* _signupUrl;
	NSNumber* _terminalAppVersion;
	NSNumber* _terminalMode;
	NSNumber* _didSucceed;
	NSData* _passData;
	NSData* _token;
	NSError* _error;
	NSNumber* _filter;
	NSNumber* _filterType;

}

@property (nonatomic,readonly) NSData * merchantId;                        //@synthesize merchantId=_merchantId - In the implementation block
@property (nonatomic,readonly) NSString * signupUrl;                       //@synthesize signupUrl=_signupUrl - In the implementation block
@property (nonatomic,readonly) NSNumber * terminalAppVersion;              //@synthesize terminalAppVersion=_terminalAppVersion - In the implementation block
@property (nonatomic,readonly) NSNumber * terminalMode;                    //@synthesize terminalMode=_terminalMode - In the implementation block
@property (nonatomic,readonly) NSNumber * didSucceed;                      //@synthesize didSucceed=_didSucceed - In the implementation block
@property (nonatomic,readonly) NSData * passData;                          //@synthesize passData=_passData - In the implementation block
@property (nonatomic,readonly) NSData * token;                             //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSError * error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSNumber * filter;                          //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) NSNumber * filterType;                      //@synthesize filterType=_filterType - In the implementation block
@property (nonatomic,readonly) unsigned result;                            //@synthesize result=_result - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)filterType;
-(unsigned)result;
-(NSData *)token;
-(NSError *)error;
-(NSNumber *)filter;
-(NSData *)merchantId;
-(NSString *)signupUrl;
-(NSNumber *)terminalAppVersion;
-(id)asDictionary;
-(NSData *)passData;
-(NSNumber *)terminalMode;
-(NSNumber *)didSucceed;
@end

