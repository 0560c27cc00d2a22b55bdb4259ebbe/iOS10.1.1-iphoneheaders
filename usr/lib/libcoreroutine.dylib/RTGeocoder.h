/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOMapServiceTicket;
@interface RTGeocoder : NSObject {

	id<GEOMapServiceTicket> _ticket;

}

@property (nonatomic,retain) id<GEOMapServiceTicket> ticket;              //@synthesize ticket=_ticket - In the implementation block
-(void)cancel;
-(void)dealloc;
-(void)setTicket:(id<GEOMapServiceTicket>)arg1 ;
-(id<GEOMapServiceTicket>)ticket;
-(void)geocodeLatitude:(double)arg1 longitude:(double)arg2 handler:(/*^block*/id)arg3 ;
-(void)geocodeAddressDictionary:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)geocodeAddressString:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)_cancelTicket:(id)arg1 ;
-(id)geocodeLatitude:(double)arg1 longitude:(double)arg2 error:(id*)arg3 ;
-(id)geocodeAddressDictionary:(id)arg1 error:(id*)arg2 ;
-(id)geocodeAddressString:(id)arg1 error:(id*)arg2 ;
@end

