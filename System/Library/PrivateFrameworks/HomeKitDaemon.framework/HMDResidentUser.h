/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDUser.h>

@class NSString;

@interface HMDResidentUser : HMDUser {

	NSString* _displayName;
	NSString* _deviceIdentifier;
	unsigned long long _configurationState;

}

@property (assign,nonatomic) unsigned long long configurationState;              //@synthesize configurationState=_configurationState - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceIdentifier;                 //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)displayName;
-(void)setDisplayName:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(unsigned long long)configurationState;
-(BOOL)mergeFromUser:(id)arg1 dataVersion:(long long)arg2 ;
-(void)setConfigurationState:(unsigned long long)arg1 ;
-(id)initWithUserID:(id)arg1 pairingIdentity:(id)arg2 displayName:(id)arg3 deviceIdentifier:(id)arg4 configurationState:(unsigned long long)arg5 ;
-(id)encodingRemoteDisplayName;
-(BOOL)configureWithIDSDevice:(id)arg1 ;
@end

