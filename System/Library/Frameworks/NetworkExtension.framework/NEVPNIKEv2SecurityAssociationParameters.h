/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying> {

	int _lifetimeMinutes;
	long long _encryptionAlgorithm;
	long long _integrityAlgorithm;
	long long _diffieHellmanGroup;

}

@property (assign) long long encryptionAlgorithm;              //@synthesize encryptionAlgorithm=_encryptionAlgorithm - In the implementation block
@property (assign) long long integrityAlgorithm;               //@synthesize integrityAlgorithm=_integrityAlgorithm - In the implementation block
@property (assign) long long diffieHellmanGroup;               //@synthesize diffieHellmanGroup=_diffieHellmanGroup - In the implementation block
@property (assign) int lifetimeMinutes;                        //@synthesize lifetimeMinutes=_lifetimeMinutes - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyDictionary;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)encryptionAlgorithm;
-(long long)integrityAlgorithm;
-(long long)diffieHellmanGroup;
-(int)lifetimeMinutes;
-(void)setEncryptionAlgorithm:(long long)arg1 ;
-(void)setIntegrityAlgorithm:(long long)arg1 ;
-(void)setDiffieHellmanGroup:(long long)arg1 ;
-(void)setLifetimeMinutes:(int)arg1 ;
-(BOOL)checkValidityAndCollectErrors:(id)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

