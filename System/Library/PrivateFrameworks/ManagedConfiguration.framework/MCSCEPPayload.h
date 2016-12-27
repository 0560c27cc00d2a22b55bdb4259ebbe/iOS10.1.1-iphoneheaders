/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCCertificatePayload.h>

@class NSString, NSArray, NSData, NSDictionary;

@interface MCSCEPPayload : MCCertificatePayload {

	NSString* _URLString;
	NSString* _CAInstanceName;
	NSString* _challenge;
	NSArray* _subject;
	unsigned long long _keySize;
	int _usageFlags;
	NSData* _CAFingerprint;
	NSArray* _CACaps;
	NSDictionary* _subjectAltName;
	unsigned long long _retries;
	unsigned long long _retryDelay;

}

@property (nonatomic,retain,readonly) NSString * URLString;                       //@synthesize URLString=_URLString - In the implementation block
@property (nonatomic,retain,readonly) NSString * CAInstanceName;                  //@synthesize CAInstanceName=_CAInstanceName - In the implementation block
@property (nonatomic,retain,readonly) NSData * CAFingerprint;                     //@synthesize CAFingerprint=_CAFingerprint - In the implementation block
@property (nonatomic,retain,readonly) NSArray * CACaps;                           //@synthesize CACaps=_CACaps - In the implementation block
@property (nonatomic,retain,readonly) NSString * challenge;                       //@synthesize challenge=_challenge - In the implementation block
@property (nonatomic,retain,readonly) NSArray * subject;                          //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) unsigned long long keySize;                        //@synthesize keySize=_keySize - In the implementation block
@property (nonatomic,readonly) int usageFlags;                                    //@synthesize usageFlags=_usageFlags - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * subjectAltName;              //@synthesize subjectAltName=_subjectAltName - In the implementation block
@property (nonatomic,readonly) unsigned long long retries;                        //@synthesize retries=_retries - In the implementation block
@property (nonatomic,readonly) unsigned long long retryDelay;                     //@synthesize retryDelay=_retryDelay - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(NSString *)CAInstanceName;
-(int)usageFlags;
-(NSData *)CAFingerprint;
-(NSArray *)CACaps;
-(NSDictionary *)subjectAltName;
-(unsigned long long)retryDelay;
-(id)description;
-(unsigned long long)keySize;
-(NSArray *)subject;
-(NSString *)URLString;
-(unsigned long long)retries;
-(BOOL)isRoot;
-(NSString *)challenge;
-(BOOL)isIdentity;
@end

