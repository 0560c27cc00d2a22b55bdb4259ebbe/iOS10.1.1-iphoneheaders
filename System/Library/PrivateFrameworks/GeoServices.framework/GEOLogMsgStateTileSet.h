/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GEOLogMsgStateTileSet : PBCodable <NSCopying> {

	NSMutableArray* _tileSetInfos;

}

@property (nonatomic,retain) NSMutableArray * tileSetInfos;              //@synthesize tileSetInfos=_tileSetInfos - In the implementation block
+(Class)tileSetInfoType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearTileSetInfos;
-(void)addTileSetInfo:(id)arg1 ;
-(unsigned long long)tileSetInfosCount;
-(id)tileSetInfoAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)tileSetInfos;
-(void)setTileSetInfos:(NSMutableArray *)arg1 ;
@end

