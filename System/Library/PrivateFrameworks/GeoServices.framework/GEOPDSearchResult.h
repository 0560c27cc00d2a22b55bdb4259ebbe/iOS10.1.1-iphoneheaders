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

@class PBUnknownFields, GEOPDRelatedSearchSuggestion, NSMutableArray, GEOMapRegion, NSString, GEOPDSearchClientBehavior;

@interface GEOPDSearchResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	GEOPDRelatedSearchSuggestion* _defaultRelatedSearchSuggestion;
	NSMutableArray* _disambiguationLabels;
	GEOMapRegion* _displayMapRegion;
	NSMutableArray* _relatedSearchSuggestions;
	NSString* _resultDisplayHeader;
	GEOPDSearchClientBehavior* _searchClientBehavior;
	int _searchResultType;
	BOOL _isChainResultSet;
	SCD_Struct_GE45 _has;

}

@property (nonatomic,readonly) BOOL hasDisplayMapRegion; 
@property (nonatomic,retain) GEOMapRegion * displayMapRegion;                                            //@synthesize displayMapRegion=_displayMapRegion - In the implementation block
@property (nonatomic,retain) NSMutableArray * disambiguationLabels;                                      //@synthesize disambiguationLabels=_disambiguationLabels - In the implementation block
@property (assign,nonatomic) BOOL hasIsChainResultSet; 
@property (assign,nonatomic) BOOL isChainResultSet;                                                      //@synthesize isChainResultSet=_isChainResultSet - In the implementation block
@property (nonatomic,retain) NSMutableArray * relatedSearchSuggestions;                                  //@synthesize relatedSearchSuggestions=_relatedSearchSuggestions - In the implementation block
@property (assign,nonatomic) BOOL hasSearchResultType; 
@property (assign,nonatomic) int searchResultType;                                                       //@synthesize searchResultType=_searchResultType - In the implementation block
@property (nonatomic,readonly) BOOL hasResultDisplayHeader; 
@property (nonatomic,retain) NSString * resultDisplayHeader;                                             //@synthesize resultDisplayHeader=_resultDisplayHeader - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultRelatedSearchSuggestion; 
@property (nonatomic,retain) GEOPDRelatedSearchSuggestion * defaultRelatedSearchSuggestion;              //@synthesize defaultRelatedSearchSuggestion=_defaultRelatedSearchSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchClientBehavior; 
@property (nonatomic,retain) GEOPDSearchClientBehavior * searchClientBehavior;                           //@synthesize searchClientBehavior=_searchClientBehavior - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)disambiguationLabelType;
+(Class)relatedSearchSuggestionType;
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
-(PBUnknownFields *)unknownFields;
-(BOOL)hasDisplayMapRegion;
-(void)clearDisambiguationLabels;
-(void)addDisambiguationLabel:(id)arg1 ;
-(unsigned long long)disambiguationLabelsCount;
-(id)disambiguationLabelAtIndex:(unsigned long long)arg1 ;
-(void)setIsChainResultSet:(BOOL)arg1 ;
-(void)setHasIsChainResultSet:(BOOL)arg1 ;
-(BOOL)hasIsChainResultSet;
-(void)clearRelatedSearchSuggestions;
-(void)addRelatedSearchSuggestion:(id)arg1 ;
-(unsigned long long)relatedSearchSuggestionsCount;
-(id)relatedSearchSuggestionAtIndex:(unsigned long long)arg1 ;
-(int)searchResultType;
-(void)setSearchResultType:(int)arg1 ;
-(void)setHasSearchResultType:(BOOL)arg1 ;
-(BOOL)hasSearchResultType;
-(id)searchResultTypeAsString:(int)arg1 ;
-(int)StringAsSearchResultType:(id)arg1 ;
-(BOOL)hasResultDisplayHeader;
-(BOOL)hasDefaultRelatedSearchSuggestion;
-(BOOL)hasSearchClientBehavior;
-(GEOMapRegion *)displayMapRegion;
-(void)setDisplayMapRegion:(GEOMapRegion *)arg1 ;
-(NSMutableArray *)disambiguationLabels;
-(void)setDisambiguationLabels:(NSMutableArray *)arg1 ;
-(BOOL)isChainResultSet;
-(NSMutableArray *)relatedSearchSuggestions;
-(void)setRelatedSearchSuggestions:(NSMutableArray *)arg1 ;
-(NSString *)resultDisplayHeader;
-(void)setResultDisplayHeader:(NSString *)arg1 ;
-(GEOPDRelatedSearchSuggestion *)defaultRelatedSearchSuggestion;
-(void)setDefaultRelatedSearchSuggestion:(GEOPDRelatedSearchSuggestion *)arg1 ;
-(GEOPDSearchClientBehavior *)searchClientBehavior;
-(void)setSearchClientBehavior:(GEOPDSearchClientBehavior *)arg1 ;
@end

