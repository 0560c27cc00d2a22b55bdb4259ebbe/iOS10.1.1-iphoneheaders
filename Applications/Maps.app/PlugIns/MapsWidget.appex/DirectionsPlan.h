/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Maps.app/PlugIns/MapsWidget.appex/MapsWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsWidget/MapsWidget-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEOStorageRouteRequestStorage, DirectionsPlanTransitPreferences;

@interface DirectionsPlan : PBCodable <NSCopying> {

	double _arrivalTime;
	unsigned long long _currentRouteIndex;
	unsigned long long _currentRouteStep;
	double _departureTime;
	NSString* _destinationString;
	int _displayMethod;
	unsigned _earlierPagesLoaded;
	unsigned _laterPagesLoaded;
	NSString* _originString;
	GEOStorageRouteRequestStorage* _routeRequestStorage;
	unsigned _routesPerEarlierPage;
	unsigned _routesPerInitialPage;
	unsigned _routesPerLaterPage;
	DirectionsPlanTransitPreferences* _transitPreferences;
	int _transitPrioritization;
	int _transitSurchargeOption;
	BOOL _isPlayingTrace;
	SCD_Struct_Di7 _has;

}

@property (nonatomic,readonly) BOOL hasRouteRequestStorage; 
@property (nonatomic,retain) GEOStorageRouteRequestStorage * routeRequestStorage;                //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,readonly) BOOL hasOriginString; 
@property (nonatomic,retain) NSString * originString;                                            //@synthesize originString=_originString - In the implementation block
@property (nonatomic,readonly) BOOL hasDestinationString; 
@property (nonatomic,retain) NSString * destinationString;                                       //@synthesize destinationString=_destinationString - In the implementation block
@property (assign,nonatomic) BOOL hasDepartureTime; 
@property (assign,nonatomic) double departureTime;                                               //@synthesize departureTime=_departureTime - In the implementation block
@property (assign,nonatomic) BOOL hasArrivalTime; 
@property (assign,nonatomic) double arrivalTime;                                                 //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRouteIndex; 
@property (assign,nonatomic) unsigned long long currentRouteIndex;                               //@synthesize currentRouteIndex=_currentRouteIndex - In the implementation block
@property (assign,nonatomic) BOOL hasCurrentRouteStep; 
@property (assign,nonatomic) unsigned long long currentRouteStep;                                //@synthesize currentRouteStep=_currentRouteStep - In the implementation block
@property (assign,nonatomic) BOOL hasDisplayMethod; 
@property (assign,nonatomic) int displayMethod;                                                  //@synthesize displayMethod=_displayMethod - In the implementation block
@property (nonatomic,readonly) BOOL hasTransitPreferences; 
@property (nonatomic,retain) DirectionsPlanTransitPreferences * transitPreferences;              //@synthesize transitPreferences=_transitPreferences - In the implementation block
@property (assign,nonatomic) BOOL hasRoutesPerInitialPage; 
@property (assign,nonatomic) unsigned routesPerInitialPage;                                      //@synthesize routesPerInitialPage=_routesPerInitialPage - In the implementation block
@property (assign,nonatomic) BOOL hasEarlierPagesLoaded; 
@property (assign,nonatomic) unsigned earlierPagesLoaded;                                        //@synthesize earlierPagesLoaded=_earlierPagesLoaded - In the implementation block
@property (assign,nonatomic) BOOL hasLaterPagesLoaded; 
@property (assign,nonatomic) unsigned laterPagesLoaded;                                          //@synthesize laterPagesLoaded=_laterPagesLoaded - In the implementation block
@property (assign,nonatomic) BOOL hasRoutesPerEarlierPage; 
@property (assign,nonatomic) unsigned routesPerEarlierPage;                                      //@synthesize routesPerEarlierPage=_routesPerEarlierPage - In the implementation block
@property (assign,nonatomic) BOOL hasRoutesPerLaterPage; 
@property (assign,nonatomic) unsigned routesPerLaterPage;                                        //@synthesize routesPerLaterPage=_routesPerLaterPage - In the implementation block
@property (assign,nonatomic) BOOL hasTransitPrioritization; 
@property (assign,nonatomic) int transitPrioritization;                                          //@synthesize transitPrioritization=_transitPrioritization - In the implementation block
@property (assign,nonatomic) BOOL hasTransitSurchargeOption; 
@property (assign,nonatomic) int transitSurchargeOption;                                         //@synthesize transitSurchargeOption=_transitSurchargeOption - In the implementation block
@property (assign,nonatomic) BOOL hasIsPlayingTrace; 
@property (assign,nonatomic) BOOL isPlayingTrace;                                                //@synthesize isPlayingTrace=_isPlayingTrace - In the implementation block
-(BOOL)hasOriginString;
-(BOOL)hasDestinationString;
-(void)setHasArrivalTime:(BOOL)arg1 ;
-(void)setCurrentRouteIndex:(unsigned long long)arg1 ;
-(void)setHasCurrentRouteIndex:(BOOL)arg1 ;
-(BOOL)hasCurrentRouteIndex;
-(void)setCurrentRouteStep:(unsigned long long)arg1 ;
-(void)setHasCurrentRouteStep:(BOOL)arg1 ;
-(BOOL)hasCurrentRouteStep;
-(int)displayMethod;
-(void)setDisplayMethod:(int)arg1 ;
-(void)setHasDisplayMethod:(BOOL)arg1 ;
-(BOOL)hasDisplayMethod;
-(id)displayMethodAsString:(int)arg1 ;
-(int)StringAsDisplayMethod:(id)arg1 ;
-(BOOL)hasTransitPreferences;
-(void)setRoutesPerInitialPage:(unsigned)arg1 ;
-(void)setHasRoutesPerInitialPage:(BOOL)arg1 ;
-(BOOL)hasRoutesPerInitialPage;
-(void)setEarlierPagesLoaded:(unsigned)arg1 ;
-(void)setHasEarlierPagesLoaded:(BOOL)arg1 ;
-(BOOL)hasEarlierPagesLoaded;
-(void)setLaterPagesLoaded:(unsigned)arg1 ;
-(void)setHasLaterPagesLoaded:(BOOL)arg1 ;
-(BOOL)hasLaterPagesLoaded;
-(void)setRoutesPerEarlierPage:(unsigned)arg1 ;
-(void)setHasRoutesPerEarlierPage:(BOOL)arg1 ;
-(BOOL)hasRoutesPerEarlierPage;
-(void)setRoutesPerLaterPage:(unsigned)arg1 ;
-(void)setHasRoutesPerLaterPage:(BOOL)arg1 ;
-(BOOL)hasRoutesPerLaterPage;
-(int)transitPrioritization;
-(void)setTransitPrioritization:(int)arg1 ;
-(void)setHasTransitPrioritization:(BOOL)arg1 ;
-(BOOL)hasTransitPrioritization;
-(id)transitPrioritizationAsString:(int)arg1 ;
-(int)StringAsTransitPrioritization:(id)arg1 ;
-(void)setTransitSurchargeOption:(int)arg1 ;
-(void)setHasTransitSurchargeOption:(BOOL)arg1 ;
-(BOOL)hasTransitSurchargeOption;
-(void)setIsPlayingTrace:(BOOL)arg1 ;
-(void)setHasIsPlayingTrace:(BOOL)arg1 ;
-(BOOL)hasIsPlayingTrace;
-(NSString *)originString;
-(void)setOriginString:(NSString *)arg1 ;
-(NSString *)destinationString;
-(void)setDestinationString:(NSString *)arg1 ;
-(unsigned long long)currentRouteIndex;
-(unsigned long long)currentRouteStep;
-(DirectionsPlanTransitPreferences *)transitPreferences;
-(void)setTransitPreferences:(DirectionsPlanTransitPreferences *)arg1 ;
-(unsigned)routesPerInitialPage;
-(unsigned)earlierPagesLoaded;
-(unsigned)laterPagesLoaded;
-(unsigned)routesPerEarlierPage;
-(unsigned)routesPerLaterPage;
-(int)transitSurchargeOption;
-(BOOL)isPlayingTrace;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setDepartureTime:(double)arg1 ;
-(void)setHasDepartureTime:(BOOL)arg1 ;
-(BOOL)hasDepartureTime;
-(double)departureTime;
-(double)arrivalTime;
-(BOOL)hasArrivalTime;
-(void)setArrivalTime:(double)arg1 ;
-(BOOL)hasRouteRequestStorage;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setRouteRequestStorage:(GEOStorageRouteRequestStorage *)arg1 ;
@end

