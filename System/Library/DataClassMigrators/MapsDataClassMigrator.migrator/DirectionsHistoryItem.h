/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <MapsDataClassMigrator/RecentsItem.h>

@class SearchResult, MSPHistoryEntryStorage, NSData, NSString;

@interface DirectionsHistoryItem : NSObject <NSCopying, RecentsItem> {

	SearchResult* _startSearchResult;
	SearchResult* _endSearchResult;
	MSPHistoryEntryStorage* _storage;
	NSData* _directionsResponseID;
	NSString* _reportAProblemAttachment;

}

@property (assign,nonatomic) int transportType; 
@property (assign,nonatomic) double timestamp; 
@property (assign,nonatomic) double position; 
@property (nonatomic,readonly) SearchResult * startSearchResult; 
@property (nonatomic,readonly) SearchResult * endSearchResult; 
@property (nonatomic,retain) NSString * syncIdentifier; 
@property (nonatomic,retain) NSData * directionsResponseID;                   //@synthesize directionsResponseID=_directionsResponseID - In the implementation block
@property (nonatomic,readonly) MSPHistoryEntryStorage * storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) NSData * data; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SearchResult *)endSearchResult;
-(id)initWithStartSearchResult:(id)arg1 endSearchResult:(id)arg2 directionsMode:(unsigned long long)arg3 timestamp:(double)arg4 ;
-(SearchResult *)startSearchResult;
-(void)updateWithStorage:(id)arg1 ;
-(void)_geocodeSearchResultIfNeeded:(id)arg1 ;
-(void)setSyncIdentifier:(NSString *)arg1 ;
-(int)_geoTransportTypeForMKDirectionsTransportType:(unsigned long long)arg1 ;
-(void)updateFromStartSearchResult:(id)arg1 endSearchResult:(id)arg2 ;
-(void)updateWithStorage:(id)arg1 preserveLocationInfo:(BOOL)arg2 ;
-(void)rebuildStorageDirectionsSearch;
-(id)initWithSearchRequestStorage:(id)arg1 ;
-(MSPHistoryEntryStorage *)storage;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setPosition:(double)arg1 ;
-(double)position;
-(NSData *)directionsResponseID;
-(void)setDirectionsResponseID:(NSData *)arg1 ;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(NSString *)syncIdentifier;
@end

