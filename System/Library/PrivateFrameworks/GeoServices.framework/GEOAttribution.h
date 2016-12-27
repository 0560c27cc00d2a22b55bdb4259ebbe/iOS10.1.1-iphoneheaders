/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOAttribution : PBCodable <NSCopying> {

	GEOTileSetRegion* _regions;
	unsigned long long _regionsCount;
	unsigned long long _regionsSpace;
	NSString* _badge;
	NSString* _badgeChecksum;
	unsigned _dataSet;
	NSString* _logo;
	NSString* _logoChecksum;
	NSString* _name;
	NSMutableArray* _resources;
	NSString* _url;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasBadge; 
@property (nonatomic,retain) NSString * badge;                               //@synthesize badge=_badge - In the implementation block
@property (nonatomic,readonly) BOOL hasLogo; 
@property (nonatomic,retain) NSString * logo;                                //@synthesize logo=_logo - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) BOOL hasUrl; 
@property (nonatomic,retain) NSString * url;                                 //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) BOOL hasBadgeChecksum; 
@property (nonatomic,retain) NSString * badgeChecksum;                       //@synthesize badgeChecksum=_badgeChecksum - In the implementation block
@property (nonatomic,readonly) BOOL hasLogoChecksum; 
@property (nonatomic,retain) NSString * logoChecksum;                        //@synthesize logoChecksum=_logoChecksum - In the implementation block
@property (nonatomic,retain) NSMutableArray * resources;                     //@synthesize resources=_resources - In the implementation block
@property (nonatomic,readonly) unsigned long long regionsCount; 
@property (nonatomic,readonly) GEOTileSetRegion* regions; 
@property (assign,nonatomic) BOOL hasDataSet; 
@property (assign,nonatomic) unsigned dataSet;                               //@synthesize dataSet=_dataSet - In the implementation block
+(Class)resourceType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)url;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)addRegion:(GEOTileSetRegion)arg1 ;
-(void)setUrl:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(void)setBadge:(NSString *)arg1 ;
-(NSString *)badge;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasName;
-(BOOL)hasBadge;
-(BOOL)hasUrl;
-(unsigned long long)regionsCount;
-(GEOTileSetRegion*)regions;
-(void)clearRegions;
-(GEOTileSetRegion)regionAtIndex:(unsigned long long)arg1 ;
-(void)setRegions:(GEOTileSetRegion*)arg1 count:(unsigned long long)arg2 ;
-(void)clearResources;
-(void)addResource:(id)arg1 ;
-(unsigned long long)resourcesCount;
-(id)resourceAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)resources;
-(void)setResources:(NSMutableArray *)arg1 ;
-(void)setDataSet:(unsigned)arg1 ;
-(void)setHasDataSet:(BOOL)arg1 ;
-(BOOL)hasDataSet;
-(unsigned)dataSet;
-(BOOL)hasLogo;
-(BOOL)hasBadgeChecksum;
-(BOOL)hasLogoChecksum;
-(NSString *)logo;
-(void)setLogo:(NSString *)arg1 ;
-(NSString *)badgeChecksum;
-(void)setBadgeChecksum:(NSString *)arg1 ;
-(NSString *)logoChecksum;
-(void)setLogoChecksum:(NSString *)arg1 ;
@end

