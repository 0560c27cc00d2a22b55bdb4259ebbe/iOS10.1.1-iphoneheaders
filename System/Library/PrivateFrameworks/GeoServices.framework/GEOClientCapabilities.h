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

@class NSString, NSMutableArray, GEOFormattedStringClientCapabilities;

@interface GEOClientCapabilities : PBCodable <NSCopying> {

	NSString* _appMajorVersion;
	NSString* _appMinorVersion;
	NSString* _deviceCountryCode;
	NSMutableArray* _displayLanguages;
	NSString* _displayRegion;
	GEOFormattedStringClientCapabilities* _formattedStringClientCapabilities;
	NSString* _hardwareModel;
	int _maxFormatterSupported;
	int _maxManeuverTypeSupported;
	int _maxRouteIncidentSupported;
	unsigned _maxTrafficSpeedSupported;
	int _transitMarketSupport;
	NSString* _userCurrentTimezone;
	BOOL _clusteredTransitRoutesSupported;
	BOOL _includeCrossLanguagePhonetics;
	BOOL _internalInstall;
	BOOL _routeOptionsSupported;
	BOOL _snapToClosestStopSupported;
	SCD_Struct_GE106 _has;

}

@property (nonatomic,readonly) BOOL hasAppMajorVersion; 
@property (nonatomic,retain) NSString * appMajorVersion;                                                            //@synthesize appMajorVersion=_appMajorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasAppMinorVersion; 
@property (nonatomic,retain) NSString * appMinorVersion;                                                            //@synthesize appMinorVersion=_appMinorVersion - In the implementation block
@property (nonatomic,readonly) BOOL hasHardwareModel; 
@property (nonatomic,retain) NSString * hardwareModel;                                                              //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (assign,nonatomic) BOOL hasMaxManeuverTypeSupported; 
@property (assign,nonatomic) int maxManeuverTypeSupported;                                                          //@synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported - In the implementation block
@property (assign,nonatomic) BOOL hasInternalInstall; 
@property (assign,nonatomic) BOOL internalInstall;                                                                  //@synthesize internalInstall=_internalInstall - In the implementation block
@property (nonatomic,retain) NSMutableArray * displayLanguages;                                                     //@synthesize displayLanguages=_displayLanguages - In the implementation block
@property (nonatomic,readonly) BOOL hasDisplayRegion; 
@property (nonatomic,retain) NSString * displayRegion;                                                              //@synthesize displayRegion=_displayRegion - In the implementation block
@property (assign,nonatomic) BOOL hasMaxTrafficSpeedSupported; 
@property (assign,nonatomic) unsigned maxTrafficSpeedSupported;                                                     //@synthesize maxTrafficSpeedSupported=_maxTrafficSpeedSupported - In the implementation block
@property (assign,nonatomic) BOOL hasMaxRouteIncidentSupported; 
@property (assign,nonatomic) int maxRouteIncidentSupported;                                                         //@synthesize maxRouteIncidentSupported=_maxRouteIncidentSupported - In the implementation block
@property (assign,nonatomic) BOOL hasMaxFormatterSupported; 
@property (assign,nonatomic) int maxFormatterSupported;                                                             //@synthesize maxFormatterSupported=_maxFormatterSupported - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceCountryCode; 
@property (nonatomic,retain) NSString * deviceCountryCode;                                                          //@synthesize deviceCountryCode=_deviceCountryCode - In the implementation block
@property (assign,nonatomic) BOOL hasClusteredTransitRoutesSupported; 
@property (assign,nonatomic) BOOL clusteredTransitRoutesSupported;                                                  //@synthesize clusteredTransitRoutesSupported=_clusteredTransitRoutesSupported - In the implementation block
@property (assign,nonatomic) BOOL hasRouteOptionsSupported; 
@property (assign,nonatomic) BOOL routeOptionsSupported;                                                            //@synthesize routeOptionsSupported=_routeOptionsSupported - In the implementation block
@property (assign,nonatomic) BOOL hasTransitMarketSupport; 
@property (assign,nonatomic) int transitMarketSupport;                                                              //@synthesize transitMarketSupport=_transitMarketSupport - In the implementation block
@property (nonatomic,readonly) BOOL hasFormattedStringClientCapabilities; 
@property (nonatomic,retain) GEOFormattedStringClientCapabilities * formattedStringClientCapabilities;              //@synthesize formattedStringClientCapabilities=_formattedStringClientCapabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSnapToClosestStopSupported; 
@property (assign,nonatomic) BOOL snapToClosestStopSupported;                                                       //@synthesize snapToClosestStopSupported=_snapToClosestStopSupported - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeCrossLanguagePhonetics; 
@property (assign,nonatomic) BOOL includeCrossLanguagePhonetics;                                                    //@synthesize includeCrossLanguagePhonetics=_includeCrossLanguagePhonetics - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCurrentTimezone; 
@property (nonatomic,retain) NSString * userCurrentTimezone;                                                        //@synthesize userCurrentTimezone=_userCurrentTimezone - In the implementation block
+(Class)displayLanguagesType;
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
-(void)clearDisplayLanguages;
-(unsigned long long)displayLanguagesCount;
-(BOOL)hasDisplayRegion;
-(NSMutableArray *)displayLanguages;
-(void)setDisplayLanguages:(NSMutableArray *)arg1 ;
-(NSString *)displayRegion;
-(void)setDisplayRegion:(NSString *)arg1 ;
-(BOOL)hasDeviceCountryCode;
-(NSString *)deviceCountryCode;
-(void)setDeviceCountryCode:(NSString *)arg1 ;
-(BOOL)hasAppMajorVersion;
-(BOOL)hasAppMinorVersion;
-(BOOL)hasHardwareModel;
-(int)maxManeuverTypeSupported;
-(void)setMaxManeuverTypeSupported:(int)arg1 ;
-(void)setHasMaxManeuverTypeSupported:(BOOL)arg1 ;
-(BOOL)hasMaxManeuverTypeSupported;
-(id)maxManeuverTypeSupportedAsString:(int)arg1 ;
-(int)StringAsMaxManeuverTypeSupported:(id)arg1 ;
-(void)setInternalInstall:(BOOL)arg1 ;
-(void)setHasInternalInstall:(BOOL)arg1 ;
-(BOOL)hasInternalInstall;
-(void)addDisplayLanguages:(id)arg1 ;
-(id)displayLanguagesAtIndex:(unsigned long long)arg1 ;
-(unsigned)maxTrafficSpeedSupported;
-(void)setMaxTrafficSpeedSupported:(unsigned)arg1 ;
-(void)setHasMaxTrafficSpeedSupported:(BOOL)arg1 ;
-(BOOL)hasMaxTrafficSpeedSupported;
-(int)maxRouteIncidentSupported;
-(void)setMaxRouteIncidentSupported:(int)arg1 ;
-(void)setHasMaxRouteIncidentSupported:(BOOL)arg1 ;
-(BOOL)hasMaxRouteIncidentSupported;
-(int)maxFormatterSupported;
-(void)setMaxFormatterSupported:(int)arg1 ;
-(void)setHasMaxFormatterSupported:(BOOL)arg1 ;
-(BOOL)hasMaxFormatterSupported;
-(void)setClusteredTransitRoutesSupported:(BOOL)arg1 ;
-(void)setHasClusteredTransitRoutesSupported:(BOOL)arg1 ;
-(BOOL)hasClusteredTransitRoutesSupported;
-(void)setRouteOptionsSupported:(BOOL)arg1 ;
-(void)setHasRouteOptionsSupported:(BOOL)arg1 ;
-(BOOL)hasRouteOptionsSupported;
-(int)transitMarketSupport;
-(void)setTransitMarketSupport:(int)arg1 ;
-(void)setHasTransitMarketSupport:(BOOL)arg1 ;
-(BOOL)hasTransitMarketSupport;
-(id)transitMarketSupportAsString:(int)arg1 ;
-(int)StringAsTransitMarketSupport:(id)arg1 ;
-(BOOL)hasFormattedStringClientCapabilities;
-(void)setSnapToClosestStopSupported:(BOOL)arg1 ;
-(void)setHasSnapToClosestStopSupported:(BOOL)arg1 ;
-(BOOL)hasSnapToClosestStopSupported;
-(void)setIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(void)setHasIncludeCrossLanguagePhonetics:(BOOL)arg1 ;
-(BOOL)hasIncludeCrossLanguagePhonetics;
-(BOOL)hasUserCurrentTimezone;
-(NSString *)appMajorVersion;
-(void)setAppMajorVersion:(NSString *)arg1 ;
-(NSString *)appMinorVersion;
-(void)setAppMinorVersion:(NSString *)arg1 ;
-(NSString *)hardwareModel;
-(void)setHardwareModel:(NSString *)arg1 ;
-(BOOL)internalInstall;
-(BOOL)clusteredTransitRoutesSupported;
-(BOOL)routeOptionsSupported;
-(GEOFormattedStringClientCapabilities *)formattedStringClientCapabilities;
-(void)setFormattedStringClientCapabilities:(GEOFormattedStringClientCapabilities *)arg1 ;
-(BOOL)snapToClosestStopSupported;
-(BOOL)includeCrossLanguagePhonetics;
-(NSString *)userCurrentTimezone;
-(void)setUserCurrentTimezone:(NSString *)arg1 ;
@end

