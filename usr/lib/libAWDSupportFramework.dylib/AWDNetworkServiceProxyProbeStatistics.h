/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:58 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDNetworkServiceProxyProbeStatistics : PBCodable <NSCopying> {

	unsigned long long _alternateProbeTimeMsecs;
	unsigned long long _genericDNSProbeTimeMsecs;
	unsigned long long _genericProbeTimeMsecs;
	unsigned long long _timestamp;
	int _interfaceType;
	NSString* _label;
	int _protocolType;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasInterfaceType; 
@property (assign,nonatomic) int interfaceType;                                        //@synthesize interfaceType=_interfaceType - In the implementation block
@property (nonatomic,readonly) BOOL hasLabel; 
@property (nonatomic,retain) NSString * label;                                         //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) BOOL hasAlternateProbeTimeMsecs; 
@property (assign,nonatomic) unsigned long long alternateProbeTimeMsecs;               //@synthesize alternateProbeTimeMsecs=_alternateProbeTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasGenericProbeTimeMsecs; 
@property (assign,nonatomic) unsigned long long genericProbeTimeMsecs;                 //@synthesize genericProbeTimeMsecs=_genericProbeTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasGenericDNSProbeTimeMsecs; 
@property (assign,nonatomic) unsigned long long genericDNSProbeTimeMsecs;              //@synthesize genericDNSProbeTimeMsecs=_genericDNSProbeTimeMsecs - In the implementation block
@property (assign,nonatomic) BOOL hasProtocolType; 
@property (assign,nonatomic) int protocolType;                                         //@synthesize protocolType=_protocolType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasLabel;
-(void)setInterfaceType:(int)arg1 ;
-(void)setHasInterfaceType:(BOOL)arg1 ;
-(BOOL)hasInterfaceType;
-(int)interfaceType;
-(id)interfaceTypeAsString:(int)arg1 ;
-(int)StringAsInterfaceType:(id)arg1 ;
-(int)protocolType;
-(void)setProtocolType:(int)arg1 ;
-(void)setHasProtocolType:(BOOL)arg1 ;
-(BOOL)hasProtocolType;
-(id)protocolTypeAsString:(int)arg1 ;
-(int)StringAsProtocolType:(id)arg1 ;
-(void)setAlternateProbeTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasAlternateProbeTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasAlternateProbeTimeMsecs;
-(void)setGenericProbeTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasGenericProbeTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasGenericProbeTimeMsecs;
-(void)setGenericDNSProbeTimeMsecs:(unsigned long long)arg1 ;
-(void)setHasGenericDNSProbeTimeMsecs:(BOOL)arg1 ;
-(BOOL)hasGenericDNSProbeTimeMsecs;
-(unsigned long long)alternateProbeTimeMsecs;
-(unsigned long long)genericProbeTimeMsecs;
-(unsigned long long)genericDNSProbeTimeMsecs;
@end

