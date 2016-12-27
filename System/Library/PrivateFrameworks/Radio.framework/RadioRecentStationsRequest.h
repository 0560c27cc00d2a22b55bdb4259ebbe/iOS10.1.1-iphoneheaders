/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation, NSString;

@interface RadioRecentStationsRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	RadioStation* _currentStation;
	NSString* _currentStationStringID;
	BOOL _shouldGroupResponses;
	unsigned long long _stationCount;

}

@property (assign,nonatomic) BOOL shouldGroupResponses;                    //@synthesize shouldGroupResponses=_shouldGroupResponses - In the implementation block
@property (assign,nonatomic) unsigned long long stationCount;              //@synthesize stationCount=_stationCount - In the implementation block
-(void)cancel;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)stationCount;
-(void)setStationCount:(unsigned long long)arg1 ;
-(void)getCachedRecentStationsResponseWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithCurrentStation:(id)arg1 ;
-(void)setShouldGroupResponses:(BOOL)arg1 ;
-(id)_newRecentStationsURLRequestPropertiesWithBaseURL:(id)arg1 ;
-(id)_recentStationsResponseWithConnectionResponse:(id)arg1 returningError:(id*)arg2 ;
-(void)_configureRequestPropertiesForCaching:(id)arg1 returningCacheKey:(id*)arg2 ;
-(id)initWithCurrentStationStringID:(id)arg1 ;
-(BOOL)shouldGroupResponses;
@end

