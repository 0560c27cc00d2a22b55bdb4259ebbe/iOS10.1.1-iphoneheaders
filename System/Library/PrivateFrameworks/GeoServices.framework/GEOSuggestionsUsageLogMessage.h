/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, GEOPDAutocompleteEntry, NSData;

@interface GEOSuggestionsUsageLogMessage : PBCodable <NSCopying> {

	NSMutableArray* _displayedResults;
	NSString* _prefix;
	int _searchFieldType;
	int _selectedIndex;
	GEOPDAutocompleteEntry* _suggestionEntry;
	int _suggestionEntryIndex;
	int _suggestionEntryListIndex;
	NSData* _suggestionEntryMetadata;
	NSData* _suggestionMetadata;
	SCD_Struct_GE69 _has;

}

@property (assign,nonatomic) BOOL hasSuggestionEntryListIndex; 
@property (assign,nonatomic) int suggestionEntryListIndex;                          //@synthesize suggestionEntryListIndex=_suggestionEntryListIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestionEntryIndex; 
@property (assign,nonatomic) int suggestionEntryIndex;                              //@synthesize suggestionEntryIndex=_suggestionEntryIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionMetadata; 
@property (nonatomic,retain) NSData * suggestionMetadata;                           //@synthesize suggestionMetadata=_suggestionMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntryMetadata; 
@property (nonatomic,retain) NSData * suggestionEntryMetadata;                      //@synthesize suggestionEntryMetadata=_suggestionEntryMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasSuggestionEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * suggestionEntry;              //@synthesize suggestionEntry=_suggestionEntry - In the implementation block
@property (nonatomic,readonly) BOOL hasPrefix; 
@property (nonatomic,retain) NSString * prefix;                                     //@synthesize prefix=_prefix - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayedResults;                     //@synthesize displayedResults=_displayedResults - In the implementation block
@property (assign,nonatomic) BOOL hasSelectedIndex; 
@property (assign,nonatomic) int selectedIndex;                                     //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) BOOL hasSearchFieldType; 
@property (assign,nonatomic) int searchFieldType;                                   //@synthesize searchFieldType=_searchFieldType - In the implementation block
+(Class)displayedResultType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)selectedIndex;
-(void)setSelectedIndex:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasSuggestionMetadata;
-(NSData *)suggestionMetadata;
-(void)setSuggestionMetadata:(NSData *)arg1 ;
-(void)setSuggestionEntryIndex:(int)arg1 ;
-(void)setHasSuggestionEntryIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryIndex;
-(BOOL)hasSuggestionEntryMetadata;
-(BOOL)hasSuggestionEntry;
-(int)suggestionEntryIndex;
-(NSData *)suggestionEntryMetadata;
-(void)setSuggestionEntryMetadata:(NSData *)arg1 ;
-(GEOPDAutocompleteEntry *)suggestionEntry;
-(void)setSuggestionEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(void)setSuggestionEntryListIndex:(int)arg1 ;
-(void)setHasSuggestionEntryListIndex:(BOOL)arg1 ;
-(BOOL)hasSuggestionEntryListIndex;
-(BOOL)hasPrefix;
-(void)clearDisplayedResults;
-(void)addDisplayedResult:(id)arg1 ;
-(unsigned long long)displayedResultsCount;
-(id)displayedResultAtIndex:(unsigned long long)arg1 ;
-(void)setHasSelectedIndex:(BOOL)arg1 ;
-(BOOL)hasSelectedIndex;
-(int)searchFieldType;
-(void)setSearchFieldType:(int)arg1 ;
-(void)setHasSearchFieldType:(BOOL)arg1 ;
-(BOOL)hasSearchFieldType;
-(id)searchFieldTypeAsString:(int)arg1 ;
-(int)StringAsSearchFieldType:(id)arg1 ;
-(int)suggestionEntryListIndex;
-(NSString *)prefix;
-(void)setPrefix:(NSString *)arg1 ;
-(NSMutableArray *)displayedResults;
-(void)setDisplayedResults:(NSMutableArray *)arg1 ;
@end

