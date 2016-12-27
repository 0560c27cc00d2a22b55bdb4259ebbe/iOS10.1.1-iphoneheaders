/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEVPNProtocolIPSec.h>

@class NSString, NEVPNIKEv2SecurityAssociationParameters, NSArray;

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {

	BOOL _useConfigurationAttributeInternalIPSubnet;
	BOOL _disableMOBIKE;
	BOOL _disableRedirect;
	BOOL _enablePFS;
	BOOL _enableRevocationCheck;
	BOOL _strictRevocationCheck;
	BOOL _wakeForRekey;
	int _natKeepAliveOffloadEnable;
	int _natKeepAliveOffloadInterval;
	int _disableMOBIKERetryOnWake;
	long long _deadPeerDetectionRate;
	NSString* _serverCertificateIssuerCommonName;
	NSString* _serverCertificateCommonName;
	long long _certificateType;
	NEVPNIKEv2SecurityAssociationParameters* _IKESecurityAssociationParameters;
	NEVPNIKEv2SecurityAssociationParameters* _childSecurityAssociationParameters;
	NSString* _pluginType;
	NSArray* _IKESecurityAssociationParametersArray;
	NSArray* _childSecurityAssociationParametersArray;
	NSString* _providerBundleIdentifier;

}

@property (assign) BOOL wakeForRekey;                                                                           //@synthesize wakeForRekey=_wakeForRekey - In the implementation block
@property (readonly) NSString * pluginType;                                                                     //@synthesize pluginType=_pluginType - In the implementation block
@property (retain) NSArray * IKESecurityAssociationParametersArray;                                             //@synthesize IKESecurityAssociationParametersArray=_IKESecurityAssociationParametersArray - In the implementation block
@property (retain) NSArray * childSecurityAssociationParametersArray;                                           //@synthesize childSecurityAssociationParametersArray=_childSecurityAssociationParametersArray - In the implementation block
@property (copy) NSString * providerBundleIdentifier;                                                           //@synthesize providerBundleIdentifier=_providerBundleIdentifier - In the implementation block
@property (assign) int natKeepAliveOffloadEnable;                                                               //@synthesize natKeepAliveOffloadEnable=_natKeepAliveOffloadEnable - In the implementation block
@property (assign) int natKeepAliveOffloadInterval;                                                             //@synthesize natKeepAliveOffloadInterval=_natKeepAliveOffloadInterval - In the implementation block
@property (assign) int disableMOBIKERetryOnWake;                                                                //@synthesize disableMOBIKERetryOnWake=_disableMOBIKERetryOnWake - In the implementation block
@property (assign) long long deadPeerDetectionRate;                                                             //@synthesize deadPeerDetectionRate=_deadPeerDetectionRate - In the implementation block
@property (copy) NSString * serverCertificateIssuerCommonName;                                                  //@synthesize serverCertificateIssuerCommonName=_serverCertificateIssuerCommonName - In the implementation block
@property (copy) NSString * serverCertificateCommonName;                                                        //@synthesize serverCertificateCommonName=_serverCertificateCommonName - In the implementation block
@property (assign) long long certificateType;                                                                   //@synthesize certificateType=_certificateType - In the implementation block
@property (assign) BOOL useConfigurationAttributeInternalIPSubnet;                                              //@synthesize useConfigurationAttributeInternalIPSubnet=_useConfigurationAttributeInternalIPSubnet - In the implementation block
@property (readonly) NEVPNIKEv2SecurityAssociationParameters * IKESecurityAssociationParameters;                //@synthesize IKESecurityAssociationParameters=_IKESecurityAssociationParameters - In the implementation block
@property (readonly) NEVPNIKEv2SecurityAssociationParameters * childSecurityAssociationParameters;              //@synthesize childSecurityAssociationParameters=_childSecurityAssociationParameters - In the implementation block
@property (assign) BOOL disableMOBIKE;                                                                          //@synthesize disableMOBIKE=_disableMOBIKE - In the implementation block
@property (assign) BOOL disableRedirect;                                                                        //@synthesize disableRedirect=_disableRedirect - In the implementation block
@property (assign) BOOL enablePFS;                                                                              //@synthesize enablePFS=_enablePFS - In the implementation block
@property (assign) BOOL enableRevocationCheck;                                                                  //@synthesize enableRevocationCheck=_enableRevocationCheck - In the implementation block
@property (assign) BOOL strictRevocationCheck;                                                                  //@synthesize strictRevocationCheck=_strictRevocationCheck - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)clone;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(void)setPluginType:(NSString *)arg1 ;
-(id)initWithPluginType:(id)arg1 ;
-(long long)deadPeerDetectionRate;
-(NSString *)serverCertificateIssuerCommonName;
-(NSString *)serverCertificateCommonName;
-(NEVPNIKEv2SecurityAssociationParameters *)IKESecurityAssociationParameters;
-(NEVPNIKEv2SecurityAssociationParameters *)childSecurityAssociationParameters;
-(NSArray *)IKESecurityAssociationParametersArray;
-(NSArray *)childSecurityAssociationParametersArray;
-(BOOL)wakeForRekey;
-(long long)certificateType;
-(BOOL)useConfigurationAttributeInternalIPSubnet;
-(BOOL)disableMOBIKE;
-(BOOL)disableRedirect;
-(BOOL)enablePFS;
-(int)natKeepAliveOffloadEnable;
-(int)natKeepAliveOffloadInterval;
-(int)disableMOBIKERetryOnWake;
-(NSString *)providerBundleIdentifier;
-(NSString *)pluginType;
-(BOOL)enableRevocationCheck;
-(BOOL)strictRevocationCheck;
-(void)setDeadPeerDetectionRate:(long long)arg1 ;
-(void)setServerCertificateIssuerCommonName:(NSString *)arg1 ;
-(void)setServerCertificateCommonName:(NSString *)arg1 ;
-(id)copyLegacyDictionary;
-(void)setCertificateType:(long long)arg1 ;
-(void)setUseConfigurationAttributeInternalIPSubnet:(BOOL)arg1 ;
-(void)setDisableMOBIKE:(BOOL)arg1 ;
-(void)setDisableRedirect:(BOOL)arg1 ;
-(void)setEnablePFS:(BOOL)arg1 ;
-(void)setEnableRevocationCheck:(BOOL)arg1 ;
-(void)setStrictRevocationCheck:(BOOL)arg1 ;
-(void)setWakeForRekey:(BOOL)arg1 ;
-(void)setIKESecurityAssociationParametersArray:(NSArray *)arg1 ;
-(void)setChildSecurityAssociationParametersArray:(NSArray *)arg1 ;
-(void)setProviderBundleIdentifier:(NSString *)arg1 ;
-(void)setNatKeepAliveOffloadEnable:(int)arg1 ;
-(void)setNatKeepAliveOffloadInterval:(int)arg1 ;
-(void)setDisableMOBIKERetryOnWake:(int)arg1 ;
@end

