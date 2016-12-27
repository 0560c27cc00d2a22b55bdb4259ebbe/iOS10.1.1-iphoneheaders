/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapItem;
@class RTPredictedLocationOfInterest, NSString, RTLOIDisplayInfo;

@interface RTPLOIETA : NSObject {

	RTPredictedLocationOfInterest* _ploi;
	id<GEOMapItem> _origin;
	unsigned _responseETASeconds;
	unsigned _baselineETASeconds;
	NSString* _responseRouteDescription;
	RTLOIDisplayInfo* _displayInfo;

}

@property (nonatomic,readonly) RTPredictedLocationOfInterest * ploi;              //@synthesize ploi=_ploi - In the implementation block
-(id)description;
-(id)localizedDescription;
-(id)localizedTitle;
-(id)mapsURL;
-(unsigned long long)trafficDensity;
-(id)localizedMessage;
-(RTPredictedLocationOfInterest *)ploi;
-(BOOL)hasEquivalentDisplayTo:(id)arg1 ;
-(BOOL)etaExceedsMinimumETA:(unsigned)arg1 ;
-(id)displayInfo;
-(id)_preferredName;
-(id)_displayInfoForDate:(id)arg1 ;
-(id)initWithPLOI:(id)arg1 origin:(id)arg2 responseETASeconds:(unsigned)arg3 baselineETASeconds:(unsigned)arg4 responseRouteDescription:(id)arg5 ;
-(id)_urlName;
@end

