/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/ManagedConfiguration-Structs.h>
#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSString, NSDate;

@interface MCCertificatePayload : MCPayload {

	NSData* _certificatePersistentID;
	NSString* _installedOnDeviceID;

}

@property (nonatomic,copy) NSString * installedOnDeviceID;                  //@synthesize installedOnDeviceID=_installedOnDeviceID - In the implementation block
@property (nonatomic,retain) NSData * certificatePersistentID;              //@synthesize certificatePersistentID=_certificatePersistentID - In the implementation block
@property (nonatomic,readonly) BOOL isRoot; 
@property (nonatomic,readonly) BOOL isIdentity; 
@property (nonatomic,retain,readonly) NSDate * expiry; 
@property (nonatomic,readonly) BOOL isSigned; 
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)subtitle1Label;
-(id)subtitle1Description;
-(SecCertificateRef)copyCertificate;
-(NSData *)certificatePersistentID;
-(id)subtitle2Label;
-(id)subtitle2Description;
-(SecIdentityRef)copyIdentityFromKeychain;
-(NSString *)installedOnDeviceID;
-(void)setCertificatePersistentID:(NSData *)arg1 ;
-(void)setInstalledOnDeviceID:(NSString *)arg1 ;
-(id)description;
-(id)title;
-(BOOL)isSigned;
-(BOOL)isRoot;
-(NSDate *)expiry;
-(BOOL)isIdentity;
@end

