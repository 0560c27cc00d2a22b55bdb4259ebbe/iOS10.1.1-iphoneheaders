/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCMiddlewareExceptionEvent : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSData* _breadcrumb;
	unsigned _errorCode;
	unsigned _type;
	NSData* _uuidReference;
	unsigned _version;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                          //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) unsigned type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                        //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasBreadcrumb; 
@property (nonatomic,retain) NSData * breadcrumb;                       //@synthesize breadcrumb=_breadcrumb - In the implementation block
@property (nonatomic,readonly) BOOL hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                    //@synthesize uuidReference=_uuidReference - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setType:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasVersion;
-(void)setHasVersion:(BOOL)arg1 ;
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(void)setUuidReference:(NSData *)arg1 ;
-(BOOL)hasUuidReference;
-(NSData *)uuidReference;
-(void)setBreadcrumb:(NSData *)arg1 ;
-(BOOL)hasBreadcrumb;
-(NSData *)breadcrumb;
@end

