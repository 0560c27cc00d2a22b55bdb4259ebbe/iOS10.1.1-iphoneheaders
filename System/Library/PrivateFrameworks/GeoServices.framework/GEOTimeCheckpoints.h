/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEOTimeCheckpoints : PBCodable <NSCopying> {

	SCD_Struct_GE19* _distToNextCheckpoints;
	SCD_Struct_GE19* _timeToNextCheckpoints;

}

@property (nonatomic,readonly) unsigned long long distToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* distToNextCheckpoints; 
@property (nonatomic,readonly) unsigned long long timeToNextCheckpointsCount; 
@property (nonatomic,readonly) unsigned* timeToNextCheckpoints; 
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
-(unsigned long long)distToNextCheckpointsCount;
-(unsigned*)distToNextCheckpoints;
-(void)clearDistToNextCheckpoints;
-(void)addDistToNextCheckpoint:(unsigned)arg1 ;
-(unsigned)distToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)setDistToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
-(unsigned long long)timeToNextCheckpointsCount;
-(unsigned*)timeToNextCheckpoints;
-(void)clearTimeToNextCheckpoints;
-(void)addTimeToNextCheckpoint:(unsigned)arg1 ;
-(unsigned)timeToNextCheckpointAtIndex:(unsigned long long)arg1 ;
-(void)setTimeToNextCheckpoints:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

