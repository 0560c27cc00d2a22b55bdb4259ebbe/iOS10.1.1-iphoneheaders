/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkServiceProxy/NetworkServiceProxy-Structs.h>
#import <NetworkExtension/NEAppRule.h>

@class NSArray, NSString;

@interface NSPAppRule : NEAppRule {

	BOOL _disableFallback;
	BOOL _enableDirectMultipath;
	BOOL _enableDirectTFO;
	BOOL _enableDirectExtendedValidation;
	BOOL _divertDNSOnly;
	BOOL _enabled;
	BOOL _useCustomProtocol;
	NSArray* _directTLSPorts;
	unsigned long long _serviceID;
	double _fallbackTimeout;
	unsigned long long _fallbackBufferLimit;
	unsigned long long _fallbackCountBeforeImmediateFallback;
	NSString* _proxyEvaluationPath;
	NSArray* _machoUUIDs;

}

@property (retain) NSArray * machoUUIDs;                                                 //@synthesize machoUUIDs=_machoUUIDs - In the implementation block
@property (assign) BOOL disableFallback;                                                 //@synthesize disableFallback=_disableFallback - In the implementation block
@property (assign) BOOL enableDirectMultipath;                                           //@synthesize enableDirectMultipath=_enableDirectMultipath - In the implementation block
@property (assign) BOOL enableDirectTFO;                                                 //@synthesize enableDirectTFO=_enableDirectTFO - In the implementation block
@property (assign) BOOL enableDirectExtendedValidation;                                  //@synthesize enableDirectExtendedValidation=_enableDirectExtendedValidation - In the implementation block
@property (copy) NSArray * directTLSPorts;                                               //@synthesize directTLSPorts=_directTLSPorts - In the implementation block
@property (assign) BOOL divertDNSOnly;                                                   //@synthesize divertDNSOnly=_divertDNSOnly - In the implementation block
@property (assign) unsigned long long serviceID;                                         //@synthesize serviceID=_serviceID - In the implementation block
@property (assign) BOOL enabled;                                                         //@synthesize enabled=_enabled - In the implementation block
@property (assign) double fallbackTimeout;                                               //@synthesize fallbackTimeout=_fallbackTimeout - In the implementation block
@property (assign) unsigned long long fallbackBufferLimit;                               //@synthesize fallbackBufferLimit=_fallbackBufferLimit - In the implementation block
@property (assign) unsigned long long fallbackCountBeforeImmediateFallback;              //@synthesize fallbackCountBeforeImmediateFallback=_fallbackCountBeforeImmediateFallback - In the implementation block
@property (copy) NSString * proxyEvaluationPath;                                         //@synthesize proxyEvaluationPath=_proxyEvaluationPath - In the implementation block
@property (assign) BOOL useCustomProtocol;                                               //@synthesize useCustomProtocol=_useCustomProtocol - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)validateRuleDictionary:(id)arg1 ;
+(id)copyUUIDsForSigningIdentifier:(id)arg1 executablePath:(id)arg2 ;
+(void)loadAppRules:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(BOOL)enabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initFromDictionary:(id)arg1 ;
-(unsigned long long)serviceID;
-(unsigned long long)fallbackBufferLimit;
-(BOOL)disableFallback;
-(double)fallbackTimeout;
-(BOOL)useCustomProtocol;
-(id)copyTLVData;
-(id)initFromTLVs:(id)arg1 ;
-(BOOL)divertDNSOnly;
-(BOOL)enableDirectMultipath;
-(BOOL)enableDirectExtendedValidation;
-(NSArray *)directTLSPorts;
-(BOOL)enableDirectTFO;
-(unsigned long long)fallbackCountBeforeImmediateFallback;
-(NSString *)proxyEvaluationPath;
-(void)setDisableFallback:(BOOL)arg1 ;
-(void)setEnableDirectMultipath:(BOOL)arg1 ;
-(void)setEnableDirectTFO:(BOOL)arg1 ;
-(void)setEnableDirectExtendedValidation:(BOOL)arg1 ;
-(void)setDirectTLSPorts:(NSArray *)arg1 ;
-(void)setDivertDNSOnly:(BOOL)arg1 ;
-(void)setServiceID:(unsigned long long)arg1 ;
-(void)setFallbackTimeout:(double)arg1 ;
-(void)setFallbackBufferLimit:(unsigned long long)arg1 ;
-(void)setFallbackCountBeforeImmediateFallback:(unsigned long long)arg1 ;
-(void)setProxyEvaluationPath:(NSString *)arg1 ;
-(void)setUseCustomProtocol:(BOOL)arg1 ;
-(NSArray *)machoUUIDs;
-(void)setMachoUUIDs:(NSArray *)arg1 ;
-(id)copyExecutableConditions;
-(BOOL)resetMachOUUIDs;
-(id)copyAccountIdentifierConditions;
-(void)saveWithCompletionHandler:(/*^block*/id)arg1 ;
@end

