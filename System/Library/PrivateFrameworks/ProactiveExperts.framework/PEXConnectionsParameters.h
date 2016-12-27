/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PEXConnectionsParameters : NSObject {

	NSDictionary* _assets;

}
+(id)sharedInstance;
-(id)init;
-(unsigned long long)quickTypePredictionLimit;
-(double)userActivityCandidateScore;
-(long long)expirySeconds;
-(double)userActivityExpirySeconds;
-(double)locationAppLastUseTimeoutSeconds;
-(double)pasteboardItemExpirySeconds;
-(double)linguisticTriggerExpirySeconds;
-(double)calendarEventLocationLookaheadTimeSeconds;
-(unsigned long long)userActivityBatchSize;
-(long long)appSwitcherPredictionExpiry;
-(long long)locationAppPredictionInstallHalflife;
-(long long)locationAppPredictionInstallMaxScore;
-(long long)locationAppPredictionLaunchTimeOfDayFactor;
-(long long)locationAppPredictionOverallLaunchFactor;
-(BOOL)shouldUseWhitelistWebsite;
-(BOOL)shouldUseWhitelistApps;
-(id)locationPredictionBlacklistApps;
-(id)donationWhitelistWebsites;
-(id)donationBlacklistWebsites;
-(id)donationWhitelistApps;
-(id)donationBlacklistApps;
@end

