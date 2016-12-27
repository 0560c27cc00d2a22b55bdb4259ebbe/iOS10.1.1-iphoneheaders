/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INBookRestaurantReservationIntentExport.h>
#import <libobjc.A.dylib/NSCopying.h>

@class INRestaurant, NSDateComponents, NSString, INRestaurantGuest, INRestaurantOffer, NSDate;

@interface INBookRestaurantReservationIntent : INIntent <INBookRestaurantReservationIntentExport, NSCopying> {

	INRestaurant* _restaurant;
	NSDateComponents* _bookingDateComponents;
	unsigned long long _partySize;
	NSString* _bookingIdentifier;
	INRestaurantGuest* _guest;
	INRestaurantOffer* _selectedOffer;
	NSString* _guestProvidedSpecialRequestText;
	NSDate* _bookingDate;

}

@property (nonatomic,copy) NSDate * bookingDate;                                    //@synthesize bookingDate=_bookingDate - In the implementation block
@property (nonatomic,copy) INRestaurant * restaurant;                               //@synthesize restaurant=_restaurant - In the implementation block
@property (nonatomic,copy) NSDateComponents * bookingDateComponents;                //@synthesize bookingDateComponents=_bookingDateComponents - In the implementation block
@property (assign,nonatomic) unsigned long long partySize;                          //@synthesize partySize=_partySize - In the implementation block
@property (nonatomic,copy) NSString * bookingIdentifier;                            //@synthesize bookingIdentifier=_bookingIdentifier - In the implementation block
@property (nonatomic,copy) INRestaurantGuest * guest;                               //@synthesize guest=_guest - In the implementation block
@property (nonatomic,copy) INRestaurantOffer * selectedOffer;                       //@synthesize selectedOffer=_selectedOffer - In the implementation block
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText;              //@synthesize guestProvidedSpecialRequestText=_guestProvidedSpecialRequestText - In the implementation block
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
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1 ;
-(INRestaurant *)restaurant;
-(INRestaurantGuest *)guest;
-(void)setGuest:(INRestaurantGuest *)arg1 ;
-(void)setRestaurant:(INRestaurant *)arg1 ;
-(INRestaurantOffer *)selectedOffer;
-(NSString *)guestProvidedSpecialRequestText;
-(NSDate *)bookingDate;
-(void)setBookingDate:(NSDate *)arg1 ;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(NSString *)arg1 ;
-(void)setSelectedOffer:(INRestaurantOffer *)arg1 ;
-(void)setGuestProvidedSpecialRequestText:(NSString *)arg1 ;
-(NSDateComponents *)bookingDateComponents;
-(void)setBookingDateComponents:(NSDateComponents *)arg1 ;
@end

