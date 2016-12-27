/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNWConnectionReport : PBCodable <NSCopying> {

	unsigned long long _connectedAddressIndex;
	unsigned long long _connectionReuseCount;
	unsigned long long _dataStallCount;
	unsigned long long _flowConnectMilliseconds;
	unsigned long long _flowDurationMilliseconds;
	unsigned long long _ipv4AddressCount;
	unsigned long long _ipv6AddressCount;
	unsigned long long _pathTriggerMilliseconds;
	unsigned long long _proxyMilliseconds;
	unsigned long long _resolutionMilliseconds;
	unsigned long long _timestamp;
	unsigned long long _tlsMilliseconds;
	unsigned long long _trafficClass;
	int _connectedAddressFamily;
	int _connectedInterfaceType;
	int _connectionMode;
	int _failureReason;
	int _firstAddressFamily;
	int _usedProxyType;
	BOOL _customProxyConfigured;
	BOOL _fallbackEligible;
	BOOL _multipathConfigured;
	BOOL _resolutionRequired;
	BOOL _synthesizedIPv6Address;
	BOOL _systemProxyConfigured;
	BOOL _tfoConfigured;
	BOOL _tlsConfigured;
	BOOL _triggeredPath;
	BOOL _usedFallback;
	BOOL _weakFallback;
	SCD_Struct_AW26 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTriggeredPath; 
@property (assign,nonatomic) BOOL triggeredPath;                                       //@synthesize triggeredPath=_triggeredPath - In the implementation block
@property (assign,nonatomic) BOOL hasSystemProxyConfigured; 
@property (assign,nonatomic) BOOL systemProxyConfigured;                               //@synthesize systemProxyConfigured=_systemProxyConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasCustomProxyConfigured; 
@property (assign,nonatomic) BOOL customProxyConfigured;                               //@synthesize customProxyConfigured=_customProxyConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasUsedProxyType; 
@property (assign,nonatomic) int usedProxyType;                                        //@synthesize usedProxyType=_usedProxyType - In the implementation block
@property (assign,nonatomic) BOOL hasFallbackEligible; 
@property (assign,nonatomic) BOOL fallbackEligible;                                    //@synthesize fallbackEligible=_fallbackEligible - In the implementation block
@property (assign,nonatomic) BOOL hasWeakFallback; 
@property (assign,nonatomic) BOOL weakFallback;                                        //@synthesize weakFallback=_weakFallback - In the implementation block
@property (assign,nonatomic) BOOL hasUsedFallback; 
@property (assign,nonatomic) BOOL usedFallback;                                        //@synthesize usedFallback=_usedFallback - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionRequired; 
@property (assign,nonatomic) BOOL resolutionRequired;                                  //@synthesize resolutionRequired=_resolutionRequired - In the implementation block
@property (assign,nonatomic) BOOL hasTlsConfigured; 
@property (assign,nonatomic) BOOL tlsConfigured;                                       //@synthesize tlsConfigured=_tlsConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasTfoConfigured; 
@property (assign,nonatomic) BOOL tfoConfigured;                                       //@synthesize tfoConfigured=_tfoConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasMultipathConfigured; 
@property (assign,nonatomic) BOOL multipathConfigured;                                 //@synthesize multipathConfigured=_multipathConfigured - In the implementation block
@property (assign,nonatomic) BOOL hasTrafficClass; 
@property (assign,nonatomic) unsigned long long trafficClass;                          //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL hasFailureReason; 
@property (assign,nonatomic) int failureReason;                                        //@synthesize failureReason=_failureReason - In the implementation block
@property (assign,nonatomic) BOOL hasPathTriggerMilliseconds; 
@property (assign,nonatomic) unsigned long long pathTriggerMilliseconds;               //@synthesize pathTriggerMilliseconds=_pathTriggerMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasResolutionMilliseconds; 
@property (assign,nonatomic) unsigned long long resolutionMilliseconds;                //@synthesize resolutionMilliseconds=_resolutionMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasProxyMilliseconds; 
@property (assign,nonatomic) unsigned long long proxyMilliseconds;                     //@synthesize proxyMilliseconds=_proxyMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFlowConnectMilliseconds; 
@property (assign,nonatomic) unsigned long long flowConnectMilliseconds;               //@synthesize flowConnectMilliseconds=_flowConnectMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasTlsMilliseconds; 
@property (assign,nonatomic) unsigned long long tlsMilliseconds;                       //@synthesize tlsMilliseconds=_tlsMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasFlowDurationMilliseconds; 
@property (assign,nonatomic) unsigned long long flowDurationMilliseconds;              //@synthesize flowDurationMilliseconds=_flowDurationMilliseconds - In the implementation block
@property (assign,nonatomic) BOOL hasIpv4AddressCount; 
@property (assign,nonatomic) unsigned long long ipv4AddressCount;                      //@synthesize ipv4AddressCount=_ipv4AddressCount - In the implementation block
@property (assign,nonatomic) BOOL hasIpv6AddressCount; 
@property (assign,nonatomic) unsigned long long ipv6AddressCount;                      //@synthesize ipv6AddressCount=_ipv6AddressCount - In the implementation block
@property (assign,nonatomic) BOOL hasSynthesizedIPv6Address; 
@property (assign,nonatomic) BOOL synthesizedIPv6Address;                              //@synthesize synthesizedIPv6Address=_synthesizedIPv6Address - In the implementation block
@property (assign,nonatomic) BOOL hasFirstAddressFamily; 
@property (assign,nonatomic) int firstAddressFamily;                                   //@synthesize firstAddressFamily=_firstAddressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedAddressFamily; 
@property (assign,nonatomic) int connectedAddressFamily;                               //@synthesize connectedAddressFamily=_connectedAddressFamily - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedAddressIndex; 
@property (assign,nonatomic) unsigned long long connectedAddressIndex;                 //@synthesize connectedAddressIndex=_connectedAddressIndex - In the implementation block
@property (assign,nonatomic) BOOL hasConnectedInterfaceType; 
@property (assign,nonatomic) int connectedInterfaceType;                               //@synthesize connectedInterfaceType=_connectedInterfaceType - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionReuseCount; 
@property (assign,nonatomic) unsigned long long connectionReuseCount;                  //@synthesize connectionReuseCount=_connectionReuseCount - In the implementation block
@property (assign,nonatomic) BOOL hasDataStallCount; 
@property (assign,nonatomic) unsigned long long dataStallCount;                        //@synthesize dataStallCount=_dataStallCount - In the implementation block
@property (assign,nonatomic) BOOL hasConnectionMode; 
@property (assign,nonatomic) int connectionMode;                                       //@synthesize connectionMode=_connectionMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)connectedInterfaceType;
-(void)setConnectedInterfaceType:(int)arg1 ;
-(void)setHasConnectedInterfaceType:(BOOL)arg1 ;
-(BOOL)hasConnectedInterfaceType;
-(id)connectedInterfaceTypeAsString:(int)arg1 ;
-(int)StringAsConnectedInterfaceType:(id)arg1 ;
-(void)setConnectionReuseCount:(unsigned long long)arg1 ;
-(void)setHasConnectionReuseCount:(BOOL)arg1 ;
-(BOOL)hasConnectionReuseCount;
-(void)setTrafficClass:(unsigned long long)arg1 ;
-(void)setHasTrafficClass:(BOOL)arg1 ;
-(BOOL)hasTrafficClass;
-(unsigned long long)connectionReuseCount;
-(unsigned long long)trafficClass;
-(void)setTriggeredPath:(BOOL)arg1 ;
-(void)setHasTriggeredPath:(BOOL)arg1 ;
-(BOOL)hasTriggeredPath;
-(void)setSystemProxyConfigured:(BOOL)arg1 ;
-(void)setHasSystemProxyConfigured:(BOOL)arg1 ;
-(BOOL)hasSystemProxyConfigured;
-(void)setCustomProxyConfigured:(BOOL)arg1 ;
-(void)setHasCustomProxyConfigured:(BOOL)arg1 ;
-(BOOL)hasCustomProxyConfigured;
-(int)usedProxyType;
-(void)setUsedProxyType:(int)arg1 ;
-(void)setHasUsedProxyType:(BOOL)arg1 ;
-(BOOL)hasUsedProxyType;
-(id)usedProxyTypeAsString:(int)arg1 ;
-(int)StringAsUsedProxyType:(id)arg1 ;
-(void)setFallbackEligible:(BOOL)arg1 ;
-(void)setHasFallbackEligible:(BOOL)arg1 ;
-(BOOL)hasFallbackEligible;
-(void)setWeakFallback:(BOOL)arg1 ;
-(void)setHasWeakFallback:(BOOL)arg1 ;
-(BOOL)hasWeakFallback;
-(void)setUsedFallback:(BOOL)arg1 ;
-(void)setHasUsedFallback:(BOOL)arg1 ;
-(BOOL)hasUsedFallback;
-(void)setResolutionRequired:(BOOL)arg1 ;
-(void)setHasResolutionRequired:(BOOL)arg1 ;
-(BOOL)hasResolutionRequired;
-(void)setTlsConfigured:(BOOL)arg1 ;
-(void)setHasTlsConfigured:(BOOL)arg1 ;
-(BOOL)hasTlsConfigured;
-(void)setTfoConfigured:(BOOL)arg1 ;
-(void)setHasTfoConfigured:(BOOL)arg1 ;
-(BOOL)hasTfoConfigured;
-(void)setMultipathConfigured:(BOOL)arg1 ;
-(void)setHasMultipathConfigured:(BOOL)arg1 ;
-(BOOL)hasMultipathConfigured;
-(void)setPathTriggerMilliseconds:(unsigned long long)arg1 ;
-(void)setHasPathTriggerMilliseconds:(BOOL)arg1 ;
-(BOOL)hasPathTriggerMilliseconds;
-(void)setResolutionMilliseconds:(unsigned long long)arg1 ;
-(void)setHasResolutionMilliseconds:(BOOL)arg1 ;
-(BOOL)hasResolutionMilliseconds;
-(void)setProxyMilliseconds:(unsigned long long)arg1 ;
-(void)setHasProxyMilliseconds:(BOOL)arg1 ;
-(BOOL)hasProxyMilliseconds;
-(void)setFlowConnectMilliseconds:(unsigned long long)arg1 ;
-(void)setHasFlowConnectMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFlowConnectMilliseconds;
-(void)setTlsMilliseconds:(unsigned long long)arg1 ;
-(void)setHasTlsMilliseconds:(BOOL)arg1 ;
-(BOOL)hasTlsMilliseconds;
-(void)setFlowDurationMilliseconds:(unsigned long long)arg1 ;
-(void)setHasFlowDurationMilliseconds:(BOOL)arg1 ;
-(BOOL)hasFlowDurationMilliseconds;
-(void)setIpv4AddressCount:(unsigned long long)arg1 ;
-(void)setHasIpv4AddressCount:(BOOL)arg1 ;
-(BOOL)hasIpv4AddressCount;
-(void)setIpv6AddressCount:(unsigned long long)arg1 ;
-(void)setHasIpv6AddressCount:(BOOL)arg1 ;
-(BOOL)hasIpv6AddressCount;
-(void)setSynthesizedIPv6Address:(BOOL)arg1 ;
-(void)setHasSynthesizedIPv6Address:(BOOL)arg1 ;
-(BOOL)hasSynthesizedIPv6Address;
-(int)firstAddressFamily;
-(void)setFirstAddressFamily:(int)arg1 ;
-(void)setHasFirstAddressFamily:(BOOL)arg1 ;
-(BOOL)hasFirstAddressFamily;
-(id)firstAddressFamilyAsString:(int)arg1 ;
-(int)StringAsFirstAddressFamily:(id)arg1 ;
-(int)connectedAddressFamily;
-(void)setConnectedAddressFamily:(int)arg1 ;
-(void)setHasConnectedAddressFamily:(BOOL)arg1 ;
-(BOOL)hasConnectedAddressFamily;
-(id)connectedAddressFamilyAsString:(int)arg1 ;
-(int)StringAsConnectedAddressFamily:(id)arg1 ;
-(void)setConnectedAddressIndex:(unsigned long long)arg1 ;
-(void)setHasConnectedAddressIndex:(BOOL)arg1 ;
-(BOOL)hasConnectedAddressIndex;
-(void)setDataStallCount:(unsigned long long)arg1 ;
-(void)setHasDataStallCount:(BOOL)arg1 ;
-(BOOL)hasDataStallCount;
-(void)setConnectionMode:(int)arg1 ;
-(void)setHasConnectionMode:(BOOL)arg1 ;
-(BOOL)hasConnectionMode;
-(id)connectionModeAsString:(int)arg1 ;
-(int)StringAsConnectionMode:(id)arg1 ;
-(BOOL)triggeredPath;
-(BOOL)systemProxyConfigured;
-(BOOL)customProxyConfigured;
-(BOOL)fallbackEligible;
-(BOOL)weakFallback;
-(BOOL)usedFallback;
-(BOOL)resolutionRequired;
-(BOOL)tlsConfigured;
-(BOOL)tfoConfigured;
-(BOOL)multipathConfigured;
-(unsigned long long)pathTriggerMilliseconds;
-(unsigned long long)resolutionMilliseconds;
-(unsigned long long)proxyMilliseconds;
-(unsigned long long)flowConnectMilliseconds;
-(unsigned long long)tlsMilliseconds;
-(unsigned long long)flowDurationMilliseconds;
-(unsigned long long)ipv4AddressCount;
-(unsigned long long)ipv6AddressCount;
-(BOOL)synthesizedIPv6Address;
-(unsigned long long)connectedAddressIndex;
-(unsigned long long)dataStallCount;
-(int)connectionMode;
-(int)failureReason;
-(void)setFailureReason:(int)arg1 ;
-(void)setHasFailureReason:(BOOL)arg1 ;
-(BOOL)hasFailureReason;
-(id)failureReasonAsString:(int)arg1 ;
-(int)StringAsFailureReason:(id)arg1 ;
@end

