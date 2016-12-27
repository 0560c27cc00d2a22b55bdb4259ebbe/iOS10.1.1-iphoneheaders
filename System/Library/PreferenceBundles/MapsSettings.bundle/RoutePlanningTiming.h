/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSettings/MapsSettings-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate, NSTimeZone;

@interface RoutePlanningTiming : NSObject <NSCopying> {

	NSDate* _departureDate;
	NSDate* _arrivalDate;
	NSTimeZone* _departureTimeZone;
	NSTimeZone* _arrivalTimeZone;

}

@property (nonatomic,copy,readonly) NSDate * departureDate;                      //@synthesize departureDate=_departureDate - In the implementation block
@property (nonatomic,copy,readonly) NSDate * arrivalDate;                        //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * departureTimeZone;              //@synthesize departureTimeZone=_departureTimeZone - In the implementation block
@property (nonatomic,copy,readonly) NSTimeZone * arrivalTimeZone;                //@synthesize arrivalTimeZone=_arrivalTimeZone - In the implementation block
@property (nonatomic,readonly) NSTimeZone * bestTimeZone; 
@property (nonatomic,readonly) GEOTimepoint timepoint; 
@property (nonatomic,readonly) BOOL isDepartNow; 
+(id)timingWithDepartureDate:(id)arg1 departureTimeZone:(id)arg2 arrivalTimeZone:(id)arg3 ;
+(id)timingWithTimePoint:(GEOTimepoint)arg1 departureTimeZone:(id)arg2 arrivalTimeZone:(id)arg3 ;
+(id)timingWithArrivalDate:(id)arg1 departureTimeZone:(id)arg2 arrivalTimeZone:(id)arg3 ;
-(id)initWithDepartureDate:(id)arg1 arrivalDate:(id)arg2 departureTimeZone:(id)arg3 arrivalTimeZone:(id)arg4 ;
-(BOOL)isEqualToRoutePlanningTiming:(id)arg1 ;
-(NSTimeZone *)bestTimeZone;
-(BOOL)isDepartNow;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)arrivalDate;
-(GEOTimepoint)timepoint;
-(NSDate *)departureDate;
-(NSTimeZone *)departureTimeZone;
-(NSTimeZone *)arrivalTimeZone;
@end

