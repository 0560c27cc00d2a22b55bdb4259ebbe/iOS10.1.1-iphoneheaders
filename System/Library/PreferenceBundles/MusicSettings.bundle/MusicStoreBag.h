/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MusicSettings.bundle/MusicSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSArray, NSString;

@interface MusicStoreBag : NSObject {

	NSDictionary* _bagDictionary;

}

@property (nonatomic,readonly) NSDictionary * bagDictionary;                                             //@synthesize bagDictionary=_bagDictionary - In the implementation block
@property (nonatomic,readonly) NSURL * browseURL; 
@property (nonatomic,readonly) NSURL * forYouURL; 
@property (nonatomic,readonly) NSArray * iOSVersionsForFormerFreeTrialUpsell; 
@property (nonatomic,readonly) NSArray * iOSVersionsForNoThanksUpsell; 
@property (nonatomic,readonly) NSArray * iOSVersionsForNotNowUpsell; 
@property (nonatomic,readonly) BOOL isIgnoringAddToPlaylistUserSetting; 
@property (nonatomic,readonly) unsigned long long librarySharedPlaylistTrackCountLimit; 
@property (nonatomic,readonly) long long minimumNumberOfDaysBetweenPresentingWelcomeScreen; 
@property (nonatomic,readonly) NSURL * radioGroupingURL; 
@property (nonatomic,readonly) NSURL * prominentRadioStationInfoURL; 
@property (nonatomic,readonly) NSString * storeFrontSuffix; 
@property (nonatomic,readonly) BOOL supportsConnect; 
@property (nonatomic,readonly) BOOL supportsSubscription; 
@property (nonatomic,readonly) NSDictionary * tabConfigurations; 
@property (nonatomic,readonly) long long versionForFormerFreeTrialUpsell; 
@property (nonatomic,readonly) long long versionForNoThanksUpsell; 
@property (nonatomic,readonly) long long versionForNotNowUpsell; 
@property (nonatomic,readonly) float popularityStarThreshold; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)storeFrontSuffix;
-(NSDictionary *)bagDictionary;
-(id)initWithBagDictionary:(id)arg1 ;
-(NSURL *)forYouURL;
-(float)popularityStarThreshold;
-(id)_subscriptionDictionary;
-(id)_iOSVersionsForUpsellTypeKey:(id)arg1 ;
-(long long)_upsellVersionForKey:(id)arg1 ;
-(NSURL *)browseURL;
-(NSArray *)iOSVersionsForFormerFreeTrialUpsell;
-(NSArray *)iOSVersionsForNoThanksUpsell;
-(NSArray *)iOSVersionsForNotNowUpsell;
-(BOOL)isIgnoringAddToPlaylistUserSetting;
-(unsigned long long)librarySharedPlaylistTrackCountLimit;
-(long long)minimumNumberOfDaysBetweenPresentingWelcomeScreen;
-(NSURL *)radioGroupingURL;
-(NSURL *)prominentRadioStationInfoURL;
-(BOOL)supportsConnect;
-(BOOL)supportsSubscription;
-(NSDictionary *)tabConfigurations;
-(long long)versionForFormerFreeTrialUpsell;
-(long long)versionForNoThanksUpsell;
-(long long)versionForNotNowUpsell;
@end

