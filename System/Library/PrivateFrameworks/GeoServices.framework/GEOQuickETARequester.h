/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOQuickETARequest, GEOETARequest, GEODirectionsRequest, NSString;

@interface GEOQuickETARequester : NSObject {

	GEOQuickETARequest* _request;
	GEOETARequest* _simpleETARequest;
	GEODirectionsRequest* _directionsETARequest;
	NSString* _loggingFacility;

}

@property (nonatomic,copy) NSString * loggingFacility;              //@synthesize loggingFacility=_loggingFacility - In the implementation block
+(BOOL)requestTrafficAndETAFromWaypoint:(id)arg1 toWaypoints:(id)arg2 transportType:(int)arg3 automobileOptions:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)calculateETALocalizedDescriptionFromOrigin:(id)arg1 toPLOI:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)dealloc;
-(id)initWithRequest:(id)arg1 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 WithHandler:(/*^block*/id)arg2 ;
-(void)_calculateSimpleETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithHandler:(/*^block*/id)arg3 ;
-(void)_calculateRoutingETAWithHandler:(/*^block*/id)arg1 ;
-(void)_calculateRoutingETAWithSummary:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)calculateETAWithResponseHandler:(/*^block*/id)arg1 ;
-(void)calculateETAFromAPI:(BOOL)arg1 WithResponseHandler:(/*^block*/id)arg2 ;
-(void)calculateETAFromAPI:(BOOL)arg1 includeSummary:(BOOL)arg2 WithResponseHandler:(/*^block*/id)arg3 ;
-(NSString *)loggingFacility;
-(void)setLoggingFacility:(NSString *)arg1 ;
@end

