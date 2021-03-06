/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSData;

@interface GEOPlannedDestination : NSObject <NSSecureCoding> {

	NSDate* _arrivalDate;
	NSDate* _expirationDate;
	int _transportType;
	NSData* _handle;

}

@property (nonatomic,retain) NSDate * arrivalDate;                  //@synthesize arrivalDate=_arrivalDate - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;               //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) int transportType;                     //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,retain,readonly) NSData * handle;              //@synthesize handle=_handle - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)arrivalDate;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setArrivalDate:(NSDate *)arg1 ;
-(id)initWithMapItem:(id)arg1 ;
-(id)initWithMapItemHandle:(id)arg1 ;
-(NSData *)handle;
-(id)initWithCoordinate:(SCD_Struct_GE26)arg1 ;
@end

