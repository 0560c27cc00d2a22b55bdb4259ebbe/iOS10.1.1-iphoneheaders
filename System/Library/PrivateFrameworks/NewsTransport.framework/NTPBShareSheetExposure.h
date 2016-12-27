/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBShareSheetExposure : PBCodable <NSCopying> {

	NSString* _contentId;
	int _contentType;
	NSString* _referencedArticleId;
	int _shareSheetExposureLocation;
	SCD_Struct_NT5 _has;

}

@property (assign,nonatomic) BOOL hasContentType; 
@property (assign,nonatomic) int contentType;                                 //@synthesize contentType=_contentType - In the implementation block
@property (nonatomic,readonly) BOOL hasContentId; 
@property (nonatomic,retain) NSString * contentId;                            //@synthesize contentId=_contentId - In the implementation block
@property (nonatomic,readonly) BOOL hasReferencedArticleId; 
@property (nonatomic,retain) NSString * referencedArticleId;                  //@synthesize referencedArticleId=_referencedArticleId - In the implementation block
@property (assign,nonatomic) BOOL hasShareSheetExposureLocation; 
@property (assign,nonatomic) int shareSheetExposureLocation;                  //@synthesize shareSheetExposureLocation=_shareSheetExposureLocation - In the implementation block
-(void)setContentType:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setContentId:(NSString *)arg1 ;
-(NSString *)contentId;
-(int)contentType;
-(void)setReferencedArticleId:(NSString *)arg1 ;
-(NSString *)referencedArticleId;
-(BOOL)hasReferencedArticleId;
-(void)setHasContentType:(BOOL)arg1 ;
-(BOOL)hasContentType;
-(id)contentTypeAsString:(int)arg1 ;
-(int)StringAsContentType:(id)arg1 ;
-(BOOL)hasContentId;
-(int)shareSheetExposureLocation;
-(void)setShareSheetExposureLocation:(int)arg1 ;
-(void)setHasShareSheetExposureLocation:(BOOL)arg1 ;
-(BOOL)hasShareSheetExposureLocation;
@end

