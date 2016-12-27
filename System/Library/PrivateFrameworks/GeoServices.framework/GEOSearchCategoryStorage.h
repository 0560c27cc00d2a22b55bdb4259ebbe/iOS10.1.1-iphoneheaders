/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class GEOPDAutocompleteEntry, GEOPDBrowseCategory;

@interface GEOSearchCategoryStorage : PBCodable <NSCopying> {

	GEOPDAutocompleteEntry* _autocompleteEntry;
	GEOPDBrowseCategory* _browseCategory;

}

@property (nonatomic,readonly) BOOL hasBrowseCategory; 
@property (nonatomic,retain) GEOPDBrowseCategory * browseCategory;                    //@synthesize browseCategory=_browseCategory - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteEntry; 
@property (nonatomic,retain) GEOPDAutocompleteEntry * autocompleteEntry;              //@synthesize autocompleteEntry=_autocompleteEntry - In the implementation block
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
-(BOOL)hasAutocompleteEntry;
-(GEOPDAutocompleteEntry *)autocompleteEntry;
-(void)setAutocompleteEntry:(GEOPDAutocompleteEntry *)arg1 ;
-(id)initWithSearchCategory:(id)arg1 ;
-(BOOL)hasBrowseCategory;
-(GEOPDBrowseCategory *)browseCategory;
-(void)setBrowseCategory:(GEOPDBrowseCategory *)arg1 ;
@end

