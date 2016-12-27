/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableArray;

@interface NTPBRecommendationBrickExposure : PBCodable <NSCopying> {

	NSString* _feedId;
	int _feedType;
	NSMutableArray* _recommendedFeedIds;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasFeedType; 
@property (assign,nonatomic) int feedType;                                     //@synthesize feedType=_feedType - In the implementation block
@property (nonatomic,readonly) BOOL hasFeedId; 
@property (nonatomic,retain) NSString * feedId;                                //@synthesize feedId=_feedId - In the implementation block
@property (nonatomic,retain) NSMutableArray * recommendedFeedIds;              //@synthesize recommendedFeedIds=_recommendedFeedIds - In the implementation block
+(Class)recommendedFeedIdsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasFeedId;
-(NSString *)feedId;
-(void)setFeedId:(NSString *)arg1 ;
-(int)feedType;
-(void)setFeedType:(int)arg1 ;
-(void)setHasFeedType:(BOOL)arg1 ;
-(BOOL)hasFeedType;
-(id)feedTypeAsString:(int)arg1 ;
-(int)StringAsFeedType:(id)arg1 ;
-(void)addRecommendedFeedIds:(id)arg1 ;
-(void)clearRecommendedFeedIds;
-(unsigned long long)recommendedFeedIdsCount;
-(id)recommendedFeedIdsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)recommendedFeedIds;
-(void)setRecommendedFeedIds:(NSMutableArray *)arg1 ;
@end

