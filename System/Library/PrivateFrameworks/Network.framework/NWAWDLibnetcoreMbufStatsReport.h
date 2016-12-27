/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NWAWDLibnetcoreMbufStatsReport : PBCodable <NSCopying> {

	unsigned long long _mbuf16KBTotal;
	unsigned long long _mbuf256BTotal;
	unsigned long long _mbuf2KBTotal;
	unsigned long long _mbuf4KBTotal;
	unsigned long long _mbufDrainCount;
	unsigned long long _mbufMemReleased;
	unsigned long long _sockAtMBLimit;
	unsigned long long _sockMBcnt;
	SCD_Struct_NW13 _has;

}

@property (assign,nonatomic) BOOL hasMbuf256BTotal; 
@property (assign,nonatomic) unsigned long long mbuf256BTotal;                //@synthesize mbuf256BTotal=_mbuf256BTotal - In the implementation block
@property (assign,nonatomic) BOOL hasMbuf2KBTotal; 
@property (assign,nonatomic) unsigned long long mbuf2KBTotal;                 //@synthesize mbuf2KBTotal=_mbuf2KBTotal - In the implementation block
@property (assign,nonatomic) BOOL hasMbuf4KBTotal; 
@property (assign,nonatomic) unsigned long long mbuf4KBTotal;                 //@synthesize mbuf4KBTotal=_mbuf4KBTotal - In the implementation block
@property (assign,nonatomic) BOOL hasMbuf16KBTotal; 
@property (assign,nonatomic) unsigned long long mbuf16KBTotal;                //@synthesize mbuf16KBTotal=_mbuf16KBTotal - In the implementation block
@property (assign,nonatomic) BOOL hasSockMBcnt; 
@property (assign,nonatomic) unsigned long long sockMBcnt;                    //@synthesize sockMBcnt=_sockMBcnt - In the implementation block
@property (assign,nonatomic) BOOL hasSockAtMBLimit; 
@property (assign,nonatomic) unsigned long long sockAtMBLimit;                //@synthesize sockAtMBLimit=_sockAtMBLimit - In the implementation block
@property (assign,nonatomic) BOOL hasMbufMemReleased; 
@property (assign,nonatomic) unsigned long long mbufMemReleased;              //@synthesize mbufMemReleased=_mbufMemReleased - In the implementation block
@property (assign,nonatomic) BOOL hasMbufDrainCount; 
@property (assign,nonatomic) unsigned long long mbufDrainCount;               //@synthesize mbufDrainCount=_mbufDrainCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMbuf256BTotal:(unsigned long long)arg1 ;
-(void)setHasMbuf256BTotal:(BOOL)arg1 ;
-(BOOL)hasMbuf256BTotal;
-(void)setMbuf2KBTotal:(unsigned long long)arg1 ;
-(void)setHasMbuf2KBTotal:(BOOL)arg1 ;
-(BOOL)hasMbuf2KBTotal;
-(void)setMbuf4KBTotal:(unsigned long long)arg1 ;
-(void)setHasMbuf4KBTotal:(BOOL)arg1 ;
-(BOOL)hasMbuf4KBTotal;
-(void)setMbuf16KBTotal:(unsigned long long)arg1 ;
-(void)setHasMbuf16KBTotal:(BOOL)arg1 ;
-(BOOL)hasMbuf16KBTotal;
-(void)setSockMBcnt:(unsigned long long)arg1 ;
-(void)setHasSockMBcnt:(BOOL)arg1 ;
-(BOOL)hasSockMBcnt;
-(void)setSockAtMBLimit:(unsigned long long)arg1 ;
-(void)setHasSockAtMBLimit:(BOOL)arg1 ;
-(BOOL)hasSockAtMBLimit;
-(void)setMbufMemReleased:(unsigned long long)arg1 ;
-(void)setHasMbufMemReleased:(BOOL)arg1 ;
-(BOOL)hasMbufMemReleased;
-(void)setMbufDrainCount:(unsigned long long)arg1 ;
-(void)setHasMbufDrainCount:(BOOL)arg1 ;
-(BOOL)hasMbufDrainCount;
-(unsigned long long)mbuf256BTotal;
-(unsigned long long)mbuf2KBTotal;
-(unsigned long long)mbuf4KBTotal;
-(unsigned long long)mbuf16KBTotal;
-(unsigned long long)sockMBcnt;
-(unsigned long long)sockAtMBLimit;
-(unsigned long long)mbufMemReleased;
-(unsigned long long)mbufDrainCount;
@end

