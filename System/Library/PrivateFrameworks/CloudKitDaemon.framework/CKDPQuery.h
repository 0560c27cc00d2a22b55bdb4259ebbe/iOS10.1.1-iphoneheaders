/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {

	NSMutableArray* _filters;
	int _queryOperator;
	NSMutableArray* _sorts;
	NSMutableArray* _types;
	BOOL _distinct;
	SCD_Struct_CK5 _has;

}

@property (nonatomic,retain) NSMutableArray * types;                //@synthesize types=_types - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;              //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * sorts;                //@synthesize sorts=_sorts - In the implementation block
@property (assign,nonatomic) BOOL hasDistinct; 
@property (assign,nonatomic) BOOL distinct;                         //@synthesize distinct=_distinct - In the implementation block
@property (assign,nonatomic) BOOL hasQueryOperator; 
@property (assign,nonatomic) int queryOperator;                     //@synthesize queryOperator=_queryOperator - In the implementation block
+(Class)typesType;
+(Class)filtersType;
+(Class)sortsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSMutableArray *)types;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(NSMutableArray *)filters;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearFilters;
-(unsigned long long)filtersCount;
-(id)queryOperatorAsString:(int)arg1 ;
-(int)StringAsQueryOperator:(id)arg1 ;
-(void)setTypes:(NSMutableArray *)arg1 ;
-(void)setSorts:(NSMutableArray *)arg1 ;
-(void)addTypes:(id)arg1 ;
-(void)addFilters:(id)arg1 ;
-(void)addSorts:(id)arg1 ;
-(unsigned long long)typesCount;
-(void)clearTypes;
-(id)typesAtIndex:(unsigned long long)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)sortsCount;
-(void)clearSorts;
-(id)sortsAtIndex:(unsigned long long)arg1 ;
-(void)setDistinct:(BOOL)arg1 ;
-(void)setHasDistinct:(BOOL)arg1 ;
-(BOOL)hasDistinct;
-(int)queryOperator;
-(void)setQueryOperator:(int)arg1 ;
-(void)setHasQueryOperator:(BOOL)arg1 ;
-(BOOL)hasQueryOperator;
-(NSMutableArray *)sorts;
-(BOOL)distinct;
@end

