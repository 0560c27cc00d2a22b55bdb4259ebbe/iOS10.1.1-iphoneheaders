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

@interface GEOTransitSegmentArtworkSet : PBCodable <NSCopying> {

	SCD_Struct_GE19* _artworkIndexs;
	NSMutableArray* _clusters;

}

@property (nonatomic,readonly) unsigned long long artworkIndexsCount; 
@property (nonatomic,readonly) unsigned* artworkIndexs; 
@property (nonatomic,retain) NSMutableArray * clusters;                            //@synthesize clusters=_clusters - In the implementation block
+(Class)clusterType;
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
-(unsigned long long)artworkIndexsCount;
-(unsigned*)artworkIndexs;
-(void)clearArtworkIndexs;
-(void)addArtworkIndex:(unsigned)arg1 ;
-(unsigned)artworkIndexAtIndex:(unsigned long long)arg1 ;
-(void)setArtworkIndexs:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(void)clearClusters;
-(void)addCluster:(id)arg1 ;
-(unsigned long long)clustersCount;
-(id)clusterAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)clusters;
-(void)setClusters:(NSMutableArray *)arg1 ;
@end

