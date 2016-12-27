/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOTransitArtworkDataSource.h>

@protocol GEOTransitShieldDataSource, GEOTransitIconDataSource;
@class NSString;

@interface MKTransitArtwork : NSObject <GEOTransitArtworkDataSource> {

	NSString* _accessibilityText;
	BOOL _hasRoutingIncidentBadge;
	long long _artworkSourceType;
	id<GEOTransitShieldDataSource> _shieldDataSource;
	id<GEOTransitIconDataSource> _iconDataSource;
	long long _artworkUseType;
	id<GEOTransitShieldDataSource> _iconFallbackShieldDataSource;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long artworkSourceType;                                              //@synthesize artworkSourceType=_artworkSourceType - In the implementation block
@property (nonatomic,readonly) long long artworkUseType;                                                 //@synthesize artworkUseType=_artworkUseType - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> shieldDataSource;                          //@synthesize shieldDataSource=_shieldDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitIconDataSource> iconDataSource;                              //@synthesize iconDataSource=_iconDataSource - In the implementation block
@property (nonatomic,readonly) id<GEOTransitShieldDataSource> iconFallbackShieldDataSource;              //@synthesize iconFallbackShieldDataSource=_iconFallbackShieldDataSource - In the implementation block
@property (nonatomic,readonly) BOOL hasRoutingIncidentBadge;                                             //@synthesize hasRoutingIncidentBadge=_hasRoutingIncidentBadge - In the implementation block
@property (nonatomic,readonly) NSString * accessibilityText; 
+(id)artworkWithShield:(id)arg1 accessibilityText:(id)arg2 ;
+(id)artworkWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(long long)artworkSourceType;
-(long long)artworkUseType;
-(id<GEOTransitShieldDataSource>)shieldDataSource;
-(id<GEOTransitIconDataSource>)iconDataSource;
-(id<GEOTransitShieldDataSource>)iconFallbackShieldDataSource;
-(BOOL)hasRoutingIncidentBadge;
-(NSString *)accessibilityText;
-(id)initWithShield:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 accessibilityText:(id)arg2 ;
-(id)initWithIcon:(id)arg1 fallbackShield:(id)arg2 accessibilityText:(id)arg3 ;
@end

