/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/Message-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AWDMailError;

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	NSString* _hostname;
	AWDMailError* _mailError;
	int _protocol;
	int _provider;
	NSString* _serverInfo;
	SCD_Struct_AW29 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasHostname; 
@property (nonatomic,retain) NSString * hostname;                       //@synthesize hostname=_hostname - In the implementation block
@property (assign,nonatomic) BOOL hasProtocol; 
@property (assign,nonatomic) int protocol;                              //@synthesize protocol=_protocol - In the implementation block
@property (assign,nonatomic) BOOL hasProvider; 
@property (assign,nonatomic) int provider;                              //@synthesize provider=_provider - In the implementation block
@property (nonatomic,readonly) BOOL hasMailError; 
@property (nonatomic,retain) AWDMailError * mailError;                  //@synthesize mailError=_mailError - In the implementation block
@property (nonatomic,readonly) BOOL hasServerInfo; 
@property (nonatomic,retain) NSString * serverInfo;                     //@synthesize serverInfo=_serverInfo - In the implementation block
-(void)setProtocol:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)protocol;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)provider;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasProvider;
-(void)setProvider:(int)arg1 ;
-(void)setMailError:(AWDMailError *)arg1 ;
-(void)setServerInfo:(NSString *)arg1 ;
-(void)setHasProtocol:(BOOL)arg1 ;
-(id)protocolAsString:(int)arg1 ;
-(int)StringAsProtocol:(id)arg1 ;
-(void)setHasProvider:(BOOL)arg1 ;
-(id)providerAsString:(int)arg1 ;
-(int)StringAsProvider:(id)arg1 ;
-(BOOL)hasMailError;
-(BOOL)hasServerInfo;
-(AWDMailError *)mailError;
-(NSString *)serverInfo;
-(void)setHostname:(NSString *)arg1 ;
-(BOOL)hasHostname;
-(NSString *)hostname;
-(BOOL)hasProtocol;
@end

