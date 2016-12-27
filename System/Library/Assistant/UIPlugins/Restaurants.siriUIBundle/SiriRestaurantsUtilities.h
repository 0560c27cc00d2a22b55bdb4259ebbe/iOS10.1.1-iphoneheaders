/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Restaurants.siriUIBundle/Restaurants
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumberFormatter, NSDateFormatter;

@interface SiriRestaurantsUtilities : NSObject {

	NSNumberFormatter* _distanceFormatter;
	NSDateFormatter* _dateFormatter;

}
+(id)sharedUtilities;
-(id)_openTableBundleId;
-(id)openTableAppPunchOut;
-(id)applePayImage;
-(id)displayStringForOpenStatus:(long long)arg1 timeInterval:(double)arg2 ;
-(id)displayStringForEnDash;
-(id)displayStringForCategories:(id)arg1 ;
-(id)displayStringForPeriod:(id)arg1 openStatus:(id)arg2 ;
-(id)displayStringPriceRangeForRestaurant:(id)arg1 ;
-(id)configuredLightLabelWithFontSize:(double)arg1 ;
-(id)displayStringForPhotoCount:(long long)arg1 ;
-(id)siriWeekdayForCalendarUnitWeekday:(long long)arg1 ;
-(void)getStartSeconds:(double*)arg1 endSeconds:(double*)arg2 fromPeriod:(id)arg3 ;
-(long long)calendarUnitWeekdayForSiriWeekday:(id)arg1 ;
-(id)siriOrderedWeekdays;
-(void)getTimeUntilNextRangeBoundaryFromHours:(id)arg1 inTimeZone:(id)arg2 timeInterval:(double*)arg3 isEndBoundary:(BOOL*)arg4 ;
-(id)yelpPunchOutForRestaurant:(id)arg1 action:(long long)arg2 ;
-(id)formattedInteger:(long long)arg1 ;
-(id)configuredMediumLabelWithFontSize:(double)arg1 ;
-(id)timeDisplayStringForDate:(id)arg1 inTimeZone:(id)arg2 hideMinutes:(BOOL)arg3 ;
-(id)_formattedDistanceForValue:(id)arg1 ;
-(id)_disabledTextColor;
-(id)_yelpBizIdForRestaurant:(id)arg1 ;
-(id)_yelp6URLForRestaurant:(id)arg1 action:(long long)arg2 objectIdentifier:(id)arg3 ;
-(id)_oldYelpURLWithPrefix:(id)arg1 forRestaurant:(id)arg2 ;
-(id)_yelpPunchOutForRestaurant:(id)arg1 action:(long long)arg2 objectIdentifier:(id)arg3 ;
-(id)displayStringForDistance:(id)arg1 ;
-(id)timeComponentsForOpenings:(id)arg1 ;
-(id)displayStringForReviewCount:(long long)arg1 provider:(id)arg2 ;
-(id)displayStringForLocation:(id)arg1 ;
-(BOOL)deviceHasTelephony;
-(id)displayStringForReviewCount:(long long)arg1 ;
-(id)websiteImage;
-(id)localizedStringForKey:(id)arg1 ;
-(id)dateFormatter;
-(id)phoneImage;
@end

