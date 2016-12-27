/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOUser;

@interface GEOReview : PBCodable <NSCopying> {

	double _reviewTime;
	double _score;
	NSString* _languageCode;
	GEOUser* _reviewer;
	NSString* _snippet;
	NSString* _uid;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,readonly) BOOL hasSnippet; 
@property (nonatomic,retain) NSString * snippet;                   //@synthesize snippet=_snippet - In the implementation block
@property (assign,nonatomic) BOOL hasScore; 
@property (assign,nonatomic) double score;                         //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) BOOL hasReviewTime; 
@property (assign,nonatomic) double reviewTime;                    //@synthesize reviewTime=_reviewTime - In the implementation block
@property (nonatomic,readonly) BOOL hasReviewer; 
@property (nonatomic,retain) GEOUser * reviewer;                   //@synthesize reviewer=_reviewer - In the implementation block
@property (nonatomic,readonly) BOOL hasUid; 
@property (nonatomic,retain) NSString * uid;                       //@synthesize uid=_uid - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;              //@synthesize languageCode=_languageCode - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)uid;
-(NSString *)languageCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLanguageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
-(void)setUid:(NSString *)arg1 ;
-(BOOL)hasUid;
-(void)setScore:(double)arg1 ;
-(void)setHasScore:(BOOL)arg1 ;
-(BOOL)hasScore;
-(BOOL)hasSnippet;
-(void)setReviewTime:(double)arg1 ;
-(void)setHasReviewTime:(BOOL)arg1 ;
-(BOOL)hasReviewTime;
-(BOOL)hasReviewer;
-(NSString *)snippet;
-(void)setSnippet:(NSString *)arg1 ;
-(double)reviewTime;
-(GEOUser *)reviewer;
-(void)setReviewer:(GEOUser *)arg1 ;
-(double)score;
@end

