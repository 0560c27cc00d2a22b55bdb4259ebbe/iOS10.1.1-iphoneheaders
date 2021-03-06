/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NFHardwareSecureElementInfo, NSString, NSNumber;

@interface NFSecureElement : NSObject {

	NFHardwareSecureElementInfo* _info;
	BOOL _isDirty;

}

@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * rsaCertificate; 
@property (readonly) NSString * eccCertificate; 
@property (readonly) NSString * eckaCertificate; 
@property (readonly) BOOL isProductionSigned; 
@property (readonly) BOOL isInRestrictedMode; 
@property (readonly) unsigned long long OSVersion; 
@property (readonly) NSNumber * sequenceCounter; 
@property (readonly) unsigned supportedTechnologies; 
+(unsigned)supportedTechnologies;
+(id)embeddedSecureElement;
+(id)icefallSecureElement;
-(void)dealloc;
-(id)identifier;
-(id)info;
-(void)_markDirty;
-(NSString *)serialNumber;
-(unsigned long long)OSVersion;
-(BOOL)isProductionSigned;
-(unsigned)supportedTechnologies;
-(NSNumber *)sequenceCounter;
-(void)_setIsInRestrictedMode:(BOOL)arg1 ;
-(id)_initWithInfo:(id)arg1 ;
-(void)_updateSecureElementInfo:(id)arg1 ;
-(NSString *)rsaCertificate;
-(NSString *)eckaCertificate;
-(void)_updateIfDirty;
-(NSString *)eccCertificate;
-(id)manifestQueryBlob;
-(BOOL)isInRestrictedMode;
@end

