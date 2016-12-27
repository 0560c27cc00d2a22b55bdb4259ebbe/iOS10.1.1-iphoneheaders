/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSString, NSNumber, NSDate;


@protocol INGetUserCurrentRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSString * reservationIdentifier; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@required
-(id)init;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(id)arg1;
-(NSString *)reservationIdentifier;
-(NSNumber *)maximumNumberOfResults;
-(NSDate *)earliestBookingDateForResults;
-(void)setReservationIdentifier:(id)arg1;
-(void)setMaximumNumberOfResults:(id)arg1;
-(void)setEarliestBookingDateForResults:(id)arg1;

@end
