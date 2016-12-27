/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDate;

@interface GEOQuickETATransitDeparturesInfo : NSObject {

	NSString* _direction;
	NSString* _headsign;
	NSArray* _departures;
	BOOL _departuresHaveFrequency;
	double _departureFrequency;
	NSDate* _departureFrequencyValidUntil;

}

@property (nonatomic,readonly) NSString * direction;                               //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) NSString * headsign;                                //@synthesize headsign=_headsign - In the implementation block
@property (nonatomic,readonly) BOOL departuresHaveFrequency;                       //@synthesize departuresHaveFrequency=_departuresHaveFrequency - In the implementation block
@property (nonatomic,readonly) double departureFrequency;                          //@synthesize departureFrequency=_departureFrequency - In the implementation block
@property (nonatomic,readonly) NSDate * departureFrequencyValidUntil;              //@synthesize departureFrequencyValidUntil=_departureFrequencyValidUntil - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)direction;
-(NSString *)headsign;
-(double)departureFrequency;
-(id)initWithComposedRoute:(id)arg1 ;
-(id)_chooseMostImportantTransitLegInRoute:(id)arg1 ;
-(BOOL)departuresHaveFrequency;
-(NSDate *)departureFrequencyValidUntil;
@end

