/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BulletinDistributorCompanion/BulletinDistributorCompanion-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface BLTPBAckInitialSequenceNumberRequest : PBRequest <NSCopying> {

	NSData* _sessionIdentifier;
	unsigned _sessionState;
	BOOL _assert;
	SCD_Struct_BL3 _has;

}

@property (assign,nonatomic) BOOL hasAssert; 
@property (assign,nonatomic) BOOL assert;                              //@synthesize assert=_assert - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionIdentifier; 
@property (nonatomic,retain) NSData * sessionIdentifier;               //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSessionState; 
@property (assign,nonatomic) unsigned sessionState;                    //@synthesize sessionState=_sessionState - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSData *)sessionIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSessionState;
-(unsigned)sessionState;
-(void)setSessionState:(unsigned)arg1 ;
-(BOOL)hasSessionIdentifier;
-(void)setAssert:(BOOL)arg1 ;
-(void)setHasAssert:(BOOL)arg1 ;
-(BOOL)hasAssert;
-(void)setHasSessionState:(BOOL)arg1 ;
-(BOOL)assert;
-(void)setSessionIdentifier:(NSData *)arg1 ;
@end

