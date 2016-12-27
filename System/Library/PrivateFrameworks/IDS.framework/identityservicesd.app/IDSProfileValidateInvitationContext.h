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

@class NSString, NSDictionary;

@interface IDSProfileValidateInvitationContext : IDSProfileMessage <NSCopying> {

	NSString* _basePhoneNumber;
	NSString* _regionID;
	NSString* _responseBasePhoneNumber;
	NSString* _responseRegionID;
	NSDictionary* _responseExtraInfo;

}

@property (copy) NSString * regionID;                             //@synthesize regionID=_regionID - In the implementation block
@property (copy) NSString * basePhoneNumber;                      //@synthesize basePhoneNumber=_basePhoneNumber - In the implementation block
@property (copy) NSString * responseRegionID;                     //@synthesize responseRegionID=_responseRegionID - In the implementation block
@property (copy) NSString * responseBasePhoneNumber;              //@synthesize responseBasePhoneNumber=_responseBasePhoneNumber - In the implementation block
@property (copy) NSDictionary * responseExtraInfo;                //@synthesize responseExtraInfo=_responseExtraInfo - In the implementation block
-(NSString *)responseBasePhoneNumber;
-(void)setResponseBasePhoneNumber:(NSString *)arg1 ;
-(NSString *)responseRegionID;
-(void)setResponseRegionID:(NSString *)arg1 ;
-(NSDictionary *)responseExtraInfo;
-(void)setResponseExtraInfo:(NSDictionary *)arg1 ;
-(void)setRegionID:(NSString *)arg1 ;
-(void)setBasePhoneNumber:(NSString *)arg1 ;
-(id)messageBody;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)maxTimeoutRetries;
-(BOOL)wantsExtraTimeoutRetry;
-(double)anisetteHeadersTimeout;
-(NSString *)regionID;
-(id)requiredKeys;
-(NSString *)basePhoneNumber;
-(void)handleResponseDictionary:(id)arg1 ;
-(id)bagKey;
@end

