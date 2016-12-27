/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:39:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDWiProxLeSendDataResult : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _dataLength;
	NSString* _peerId;
	unsigned _result;
	NSString* _resultString;
	NSString* _sessionId;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionId; 
@property (nonatomic,retain) NSString * sessionId;                      //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,readonly) BOOL hasPeerId; 
@property (nonatomic,retain) NSString * peerId;                         //@synthesize peerId=_peerId - In the implementation block
@property (assign,nonatomic) BOOL hasDataLength; 
@property (assign,nonatomic) unsigned dataLength;                       //@synthesize dataLength=_dataLength - In the implementation block
@property (nonatomic,readonly) BOOL hasResultString; 
@property (nonatomic,retain) NSString * resultString;                   //@synthesize resultString=_resultString - In the implementation block
@property (assign,nonatomic) BOOL hasResult; 
@property (assign,nonatomic) unsigned result;                           //@synthesize result=_result - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned)result;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setSessionId:(NSString *)arg1 ;
-(BOOL)hasSessionId;
-(NSString *)sessionId;
-(unsigned)dataLength;
-(void)setHasResult:(BOOL)arg1 ;
-(void)setResultString:(NSString *)arg1 ;
-(BOOL)hasResultString;
-(NSString *)resultString;
-(void)setHasDataLength:(BOOL)arg1 ;
-(BOOL)hasDataLength;
-(void)setPeerId:(NSString *)arg1 ;
-(BOOL)hasPeerId;
-(NSString *)peerId;
-(void)setResult:(unsigned)arg1 ;
-(void)setDataLength:(unsigned)arg1 ;
-(BOOL)hasResult;
@end

