/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DataClassMigrators/MapsDataClassMigrator.migrator/MapsDataClassMigrator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsDataClassMigrator/MapsDataClassMigrator-Structs.h>
#import <MapsDataClassMigrator/SearchResultRepr.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/MKLocatableObject.h>
#import <libobjc.A.dylib/MKAnnotation.h>
#import <MapsDataClassMigrator/MapsSynced.h>

@class NSString, NSData, AddressBookAddress, UIImage, GEOComposedWaypoint, MSPBookmarkStorage, MSPPinStorage, GEORPPlaceInfo, MKMapItem, PersonalizedCompoundItem, MapsLocationOfInterest, NSUUID, GEOFeatureStyleAttributes;

@interface SearchResult : SearchResultRepr <NSCopying, MKLocatableObject, MKAnnotation, MapsSynced> {

	NSString* _singleLineAddress;
	BOOL _hasMergedFormattedAddress;
	NSString* _formattedAddress;
	NSString* _formattedAddressMultiline;
	CLLocationCoordinate2D _coordinate;
	BOOL _originatedFromHistory;
	BOOL _originatedFromTrace;
	BOOL _originatedFromBookmarks;
	BOOL _originatedFromExternal;
	int _geoMapServiceTraitSource;
	NSString* _sourceApplication;
	NSString* _sourceURL;
	AddressBookAddress* _address;
	int _appearance;
	unsigned long long _businessID;
	UIImage* _parkingImage;
	GEOComposedWaypoint* _composedWaypoint;
	MSPBookmarkStorage* _bookmarkStorage;
	MSPPinStorage* _pinStorage;
	GEORPPlaceInfo* _placeInfo;
	BOOL _hasExplicitlyProvidedComposedWaypoint;
	BOOL _partOfMultipleResultsSet;
	MKMapItem* _mapItem;
	PersonalizedCompoundItem* _personalizedCompoundItem;
	MapsLocationOfInterest* _locationOfInterest;
	NSUUID* _searchToSupersedeIfRecordedInHistory;

}

@property (nonatomic,readonly) MSPBookmarkStorage * bookmarkStorage; 
@property (assign,nonatomic) CLLocationCoordinate2D coordinate;                                            //@synthesize coordinate=_coordinate - In the implementation block
@property (assign,getter=isReverseGeocoded,nonatomic) BOOL reverseGeocoded; 
@property (nonatomic,readonly) BOOL needsReverseGeocodeCheck; 
@property (assign,nonatomic) BOOL originatedFromHistory;                                                   //@synthesize originatedFromHistory=_originatedFromHistory - In the implementation block
@property (assign,nonatomic) BOOL originatedFromTrace;                                                     //@synthesize originatedFromTrace=_originatedFromTrace - In the implementation block
@property (assign,nonatomic) BOOL originatedFromExternal;                                                  //@synthesize originatedFromExternal=_originatedFromExternal - In the implementation block
@property (assign,nonatomic) int geoMapServiceTraitSource;                                                 //@synthesize geoMapServiceTraitSource=_geoMapServiceTraitSource - In the implementation block
@property (nonatomic,copy) NSString * sourceApplication;                                                   //@synthesize sourceApplication=_sourceApplication - In the implementation block
@property (nonatomic,copy) NSString * sourceURL;                                                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) BOOL isDynamicCurrentLocation; 
@property (assign,nonatomic) int appearance;                                                               //@synthesize appearance=_appearance - In the implementation block
@property (nonatomic,readonly) unsigned long long businessID; 
@property (nonatomic,readonly) int localSearchProviderID; 
@property (nonatomic,readonly) NSString * infoCardTitle; 
@property (nonatomic,readonly) NSString * locationTitle; 
@property (nonatomic,readonly) NSString * rawLocationTitle; 
@property (nonatomic,readonly) NSString * disambiguationTitle; 
@property (nonatomic,readonly) NSString * tweetableTitle; 
@property (nonatomic,readonly) NSString * defaultName; 
@property (nonatomic,readonly) BOOL behavesAsAtom; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * locality; 
@property (nonatomic,readonly) BOOL hasExplicitlyProvidedComposedWaypoint;                                 //@synthesize hasExplicitlyProvidedComposedWaypoint=_hasExplicitlyProvidedComposedWaypoint - In the implementation block
@property (nonatomic,retain) GEOComposedWaypoint * composedWaypoint;                                       //@synthesize composedWaypoint=_composedWaypoint - In the implementation block
@property (nonatomic,readonly) MSPPinStorage * pinStorage;                                                 //@synthesize pinStorage=_pinStorage - In the implementation block
@property (nonatomic,retain) MKMapItem * mapItem;                                                          //@synthesize mapItem=_mapItem - In the implementation block
@property (nonatomic,retain) GEORPPlaceInfo * placeInfo;                                                   //@synthesize placeInfo=_placeInfo - In the implementation block
@property (nonatomic,retain) NSString * bookmarkTitle; 
@property (nonatomic,readonly) PersonalizedCompoundItem * personalizedCompoundItem;                        //@synthesize personalizedCompoundItem=_personalizedCompoundItem - In the implementation block
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
@property (nonatomic,retain) AddressBookAddress * address; 
@property (nonatomic,retain) MapsLocationOfInterest * locationOfInterest;                                  //@synthesize locationOfInterest=_locationOfInterest - In the implementation block
@property (assign,getter=isPartOfMultipleResultsSet,nonatomic) BOOL partOfMultipleResultsSet;              //@synthesize partOfMultipleResultsSet=_partOfMultipleResultsSet - In the implementation block
@property (nonatomic,copy) NSUUID * searchToSupersedeIfRecordedInHistory;                                  //@synthesize searchToSupersedeIfRecordedInHistory=_searchToSupersedeIfRecordedInHistory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,copy) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSData * syncData; 
@property (assign,nonatomic) double position; 
+(id)customSearchResultWithCoordinate:(CLLocationCoordinate2D)arg1 ;
+(id)keyPathsForValuesAffectingLocationTitle;
+(id)keyPathsForValuesAffectingSingleLineAddress;
+(void)newStartWaypointSearchResult:(out id*)arg1 endWaypointSearchResult:(out id*)arg2 forRouteHistoryEntry:(id)arg3 ;
+(id)currentLocationSearchResult;
+(id)keyPathsForValuesAffectingName;
+(id)keyPathsForValuesAffectingTitle;
+(id)keyPathsForValuesAffectingSubtitle;
-(void)clearLocationInformation;
-(BOOL)_hasStructuredAddress;
-(BOOL)needsReverseGeocodeCheck;
-(void)setSearchToSupersedeIfRecordedInHistory:(NSUUID *)arg1 ;
-(id)initWithGEOPlace:(id)arg1 ;
-(id)initWithGEOMapItem:(id)arg1 ;
-(id)unknownContact;
-(BOOL)isHomeOrWork;
-(void)setOriginalType:(unsigned)arg1 ;
-(MSPPinStorage *)pinStorage;
-(BOOL)isInMapRect:(SCD_Struct_Se2)arg1 ;
-(BOOL)_hasUID;
-(id)bookmarkRepresentation;
-(id)initWithBookmarkRepresentation:(id)arg1 ;
-(id)initWithDroppedPin:(id)arg1 ;
-(id)contactForSharingToMessages;
-(BOOL)behavesAsAtom;
-(id)initWithSearchResultStrippingName:(id)arg1 address:(id)arg2 ;
-(id)copyWithType:(unsigned)arg1 ;
-(NSString *)infoCardTitle;
-(void)setComposedWaypoint:(GEOComposedWaypoint *)arg1 ;
-(BOOL)hasOriginatedFromExternal;
-(GEOComposedWaypoint *)composedWaypoint;
-(id)initWithSearchResult:(id)arg1 address:(id)arg2 ;
-(void)setGeoMapServiceTraitSource:(int)arg1 ;
-(int)geoMapServiceTraitSource;
-(BOOL)updateFromSyncData:(id)arg1 ;
-(void)setOriginatedFromExternal:(BOOL)arg1 ;
-(BOOL)originatedFromExternal;
-(BOOL)originatedFromTrace;
-(void)setOriginatedFromHistory:(BOOL)arg1 ;
-(BOOL)originatedFromHistory;
-(void)setOriginatedFromTrace:(BOOL)arg1 ;
-(void)markAsOriginatingFromBookmarks;
-(BOOL)isDynamicCurrentLocation;
-(void)_syncGEOPlaceWithCoordinate;
-(BOOL)isPartOfMultipleResultsSet;
-(id)_locationTitleNeedsRaw:(BOOL)arg1 ;
-(id)_formattedAddress;
-(id)mapsURLfromMapView:(id)arg1 ;
-(BOOL)isReverseGeocoded;
-(void)clearAddressCache;
-(void)updateWithGEOMapItem:(id)arg1 ;
-(void)setReverseGeocoded:(BOOL)arg1 ;
-(id)coordinateString;
-(PersonalizedCompoundItem *)personalizedCompoundItem;
-(BOOL)isAddressBookResult;
-(id)_formattedAddressMultiline;
-(void)setAddressFromSearchResult:(id)arg1 ;
-(BOOL)hasOriginatedFromBookmarks;
-(BOOL)isLocationEqual:(id)arg1 withinDistance:(double)arg2 ;
-(id)copyWithCoordinate:(CLLocationCoordinate2D)arg1 ;
-(BOOL)_isEqualToSearchResult:(id)arg1 loose:(BOOL)arg2 ;
-(void)setBookmarkTitle:(NSString *)arg1 ;
-(BOOL)updateFromBookmarkRepresentation:(id)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 preserveLocationInfo:(BOOL)arg2 ;
-(id)initWithComposedWaypoint:(id)arg1 preserveLocationInfo:(BOOL)arg2 ;
-(void)_updateTypeAndOriginalTypeIfNeeded;
-(BOOL)isEqualToSearchResult:(id)arg1 forPurpose:(long long)arg2 ;
-(id)initWithComposedWaypoint:(id)arg1 ;
-(id)copyForBookmarksWithType:(unsigned)arg1 name:(id)arg2 zoomLevel:(unsigned)arg3 ;
-(void)becomeDefaultTypeIfCustomType;
-(id)initWithMapItem:(id)arg1 syncIdentifier:(id)arg2 ;
-(BOOL)isEqualToSearchResult:(id)arg1 ;
-(BOOL)hasExplicitlyProvidedComposedWaypoint;
-(void)setPartOfMultipleResultsSet:(BOOL)arg1 ;
-(NSString *)bookmarkTitle;
-(NSString *)rawLocationTitle;
-(NSString *)disambiguationTitle;
-(NSString *)tweetableTitle;
-(NSUUID *)searchToSupersedeIfRecordedInHistory;
-(BOOL)isInMapRegion:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(id)name;
-(NSString *)title;
-(void)setType:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithData:(id)arg1 ;
-(void)_commonInit;
-(id)initWithType:(unsigned)arg1 ;
-(int)appearance;
-(NSString *)subtitle;
-(NSString *)defaultName;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setAddress:(AddressBookAddress *)arg1 ;
-(id)mapsURL;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(int)localSearchProviderID;
-(NSString *)sourceApplication;
-(void)setSourceApplication:(NSString *)arg1 ;
-(NSString *)countryCode;
-(NSString *)locality;
-(void)setThoroughfare:(id)arg1 ;
-(GEORPPlaceInfo *)placeInfo;
-(void)setPlaceInfo:(GEORPPlaceInfo *)arg1 ;
-(unsigned long long)businessID;
-(void)setSourceURL:(NSString *)arg1 ;
-(NSString *)sourceURL;
-(id)initWithMapItem:(id)arg1 ;
-(id)singleLineAddress;
-(id)initWithSearchResult:(id)arg1 ;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)setCoordinate:(CLLocationCoordinate2D)arg1 ;
-(CLLocationCoordinate2D)coordinate;
-(AddressBookAddress *)address;
-(NSData *)syncData;
-(NSString *)locationTitle;
-(void)setLocationOfInterest:(MapsLocationOfInterest *)arg1 ;
-(MapsLocationOfInterest *)locationOfInterest;
-(void)setAppearance:(int)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(MSPBookmarkStorage *)bookmarkStorage;
-(id)initWithFavoritePlace:(id)arg1 ;
@end

