/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <identityservicesd/identityservicesd-Structs.h>
#import <identityservicesd/IDSProfileMessage.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSNumber;

@interface IDSProfileLinkHandleMessage : IDSProfileMessage <NSCopying> {

	NSString* _uri;
	NSDictionary* _authenticationData;
	NSNumber* _responseVettingStatus;

}

@property (setter=setURI:,copy) NSString * URI;                  //@synthesize uri=_uri - In the implementation block
@property (copy) NSDictionary * authenticationData;              //@synthesize authenticationData=_authenticationData - In the implementation block
@property (copy) NSNumber * responseVettingStatus;               //@synthesize responseVettingStatus=_responseVettingStatus - In the implementation block
-(NSNumber *)responseVettingStatus;
-(void)setResponseVettingStatus:(NSNumber *)arg1 ;
-(NSDictionary *)authenticationData;
-(void)setAuthenticationData:(NSDictionary *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)anisetteHeadersTimeout;
-(BOOL)wantsSignature;
-(BOOL)wantsBodySignature;
-(id)additionalMessageHeaders;
-(id)requiredKeys;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
-(NSString *)URI;
-(void)setURI:(NSString *)arg1 ;
@end

