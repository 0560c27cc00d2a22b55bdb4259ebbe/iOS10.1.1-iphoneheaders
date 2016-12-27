/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:02 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPriceRange, NSNumber, NSArray, INImage, NSUserActivity;


@protocol INRideOptionExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDate * estimatedPickupDate; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@property (nonatomic,copy) NSNumber * usesMeteredFare; 
@property (nonatomic,copy) NSString * disclaimerMessage; 
@property (nonatomic,copy) NSArray * availablePartySizeOptions; 
@property (nonatomic,copy) NSString * availablePartySizeOptionsSelectionPrompt; 
@property (nonatomic,copy) NSString * specialPricing; 
@property (nonatomic,copy) INImage * specialPricingBadgeImage; 
@property (nonatomic,copy) NSArray * fareLineItems; 
@property (nonatomic,retain) NSUserActivity * userActivityForBookingInApplication; 
@required
-(id)init;
-(void)setName:(id)arg1;
-(NSString *)name;
-(INPriceRange *)priceRange;
-(void)setPriceRange:(id)arg1;
-(NSArray *)availablePartySizeOptions;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(NSString *)specialPricing;
-(void)setSpecialPricing:(id)arg1;
-(INImage *)specialPricingBadgeImage;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setDisclaimerMessage:(id)arg1;
-(void)setAvailablePartySizeOptions:(id)arg1;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
-(void)setSpecialPricingBadgeImage:(id)arg1;
-(void)setFareLineItems:(id)arg1;
-(void)setUserActivityForBookingInApplication:(id)arg1;
-(void)setUsesMeteredFare:(id)arg1;
-(NSString *)disclaimerMessage;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(NSArray *)fareLineItems;
-(NSNumber *)usesMeteredFare;

@end
