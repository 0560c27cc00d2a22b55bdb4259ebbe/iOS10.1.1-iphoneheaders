/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INGetUserCurrentRestaurantReservationBookingsIntentExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSString, NSNumber, NSDate;

@interface INGetUserCurrentRestaurantReservationBookingsIntent : INIntent <INGetUserCurrentRestaurantReservationBookingsIntentExport, NSCopying> {

	INRestaurant* _restaurant;
	NSString* _reservationIdentifier;
	NSNumber* _maximumNumberOfResults;
	NSDate* _earliestBookingDateForResults;

}

@property (nonatomic,copy) INRestaurant * restaurant;                           //@synthesize restaurant=_restaurant - In the implementation block
@property (nonatomic,copy) NSString * reservationIdentifier;                    //@synthesize reservationIdentifier=_reservationIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * maximumNumberOfResults;                   //@synthesize maximumNumberOfResults=_maximumNumberOfResults - In the implementation block
@property (nonatomic,copy) NSDate * earliestBookingDateForResults;              //@synthesize earliestBookingDateForResults=_earliestBookingDateForResults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)intentDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(NSString *)reservationIdentifier;
-(NSNumber *)maximumNumberOfResults;
-(NSDate *)earliestBookingDateForResults;
-(void)setReservationIdentifier:(NSString *)arg1 ;
-(void)setMaximumNumberOfResults:(NSNumber *)arg1 ;
-(void)setEarliestBookingDateForResults:(NSDate *)arg1 ;
@end

