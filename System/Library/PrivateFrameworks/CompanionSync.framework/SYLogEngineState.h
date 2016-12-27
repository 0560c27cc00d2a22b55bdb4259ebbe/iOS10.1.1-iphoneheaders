/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SYLogEngineState : PBCodable <NSCopying> {

	int _type;
	BOOL _buffersSessions;
	BOOL _inSession;
	BOOL _suspended;
	SCD_Struct_SY6 _has;

}

@property (assign,nonatomic) int type;                             //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasSuspended; 
@property (assign,nonatomic) BOOL suspended;                       //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic) BOOL hasInSession; 
@property (assign,nonatomic) BOOL inSession;                       //@synthesize inSession=_inSession - In the implementation block
@property (assign,nonatomic) BOOL hasBuffersSessions; 
@property (assign,nonatomic) BOOL buffersSessions;                 //@synthesize buffersSessions=_buffersSessions - In the implementation block
-(BOOL)suspended;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(void)setHasSuspended:(BOOL)arg1 ;
-(BOOL)hasSuspended;
-(void)setBuffersSessions:(BOOL)arg1 ;
-(void)setHasBuffersSessions:(BOOL)arg1 ;
-(BOOL)hasBuffersSessions;
-(BOOL)buffersSessions;
-(void)setInSession:(BOOL)arg1 ;
-(void)setHasInSession:(BOOL)arg1 ;
-(BOOL)hasInSession;
-(BOOL)inSession;
@end

