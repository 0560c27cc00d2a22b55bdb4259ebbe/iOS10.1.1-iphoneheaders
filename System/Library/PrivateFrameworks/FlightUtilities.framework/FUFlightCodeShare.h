/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:57 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FUAirline;

@interface FUFlightCodeShare : NSObject {

	FUAirline* _airline;
	long long _flightNumber;

}

@property (retain) FUAirline * airline;                 //@synthesize airline=_airline - In the implementation block
@property (assign) long long flightNumber;              //@synthesize flightNumber=_flightNumber - In the implementation block
-(void)setAirline:(FUAirline *)arg1 ;
-(FUAirline *)airline;
-(void)setFlightNumber:(long long)arg1 ;
-(long long)flightNumber;
@end

