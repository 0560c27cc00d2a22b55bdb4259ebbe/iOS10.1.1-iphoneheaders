/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCallHistoryDatabaseSaveError : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _domain;
	unsigned _error;
	NSString* _table;
	SCD_Struct_AW16 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDomain; 
@property (assign,nonatomic) unsigned domain;                           //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) BOOL hasError; 
@property (assign,nonatomic) unsigned error;                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL hasTable; 
@property (nonatomic,retain) NSString * table;                          //@synthesize table=_table - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned)domain;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)table;
-(id)dictionaryRepresentation;
-(void)setTable:(NSString *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasError;
-(void)setHasDomain:(BOOL)arg1 ;
-(void)setHasError:(BOOL)arg1 ;
-(BOOL)hasTable;
-(unsigned)error;
-(void)setError:(unsigned)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(BOOL)hasDomain;
@end
