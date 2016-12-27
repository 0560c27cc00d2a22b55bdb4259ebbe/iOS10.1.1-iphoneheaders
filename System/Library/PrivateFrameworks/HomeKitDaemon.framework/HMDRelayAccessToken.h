/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDAccessory, HMDUser, NSData;

@interface HMDRelayAccessToken : NSObject <NSSecureCoding> {

	NSUUID* _accessoryIdentifier;
	NSUUID* _userIdentifier;
	NSUUID* _identifier;
	HMDAccessory* _accessory;
	HMDUser* _user;
	NSData* _accessToken;

}

@property (assign,nonatomic,__weak) HMDAccessory * accessory;              //@synthesize accessory=_accessory - In the implementation block
@property (assign,nonatomic,__weak) HMDUser * user;                        //@synthesize user=_user - In the implementation block
@property (nonatomic,readonly) NSUUID * accessoryIdentifier;               //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSUUID * userIdentifier;                      //@synthesize userIdentifier=_userIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSData * accessToken;                  //@synthesize accessToken=_accessToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(void)setUserIdentifier:(NSUUID *)arg1 ;
-(HMDAccessory *)accessory;
-(HMDUser *)user;
-(void)setAccessory:(HMDAccessory *)arg1 ;
-(void)configureWithHome:(id)arg1 ;
-(NSUUID *)accessoryIdentifier;
-(id)initWithAccessToken:(id)arg1 consentToken:(id)arg2 ;
-(void)setUser:(HMDUser *)arg1 ;
-(NSData *)accessToken;
-(NSUUID *)userIdentifier;
@end

