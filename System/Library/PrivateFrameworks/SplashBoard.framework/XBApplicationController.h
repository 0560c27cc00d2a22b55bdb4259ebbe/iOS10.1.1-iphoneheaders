/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface XBApplicationController : NSObject
+(id)sharedInstance;
-(void)_migrateDataIfNeeded;
-(void)removeAllGeneratedLaunchImages;
-(void)removeAllGeneratedLaunchImagesAndSnapshots;
-(id)_allApplicationsFilteredBySystem:(BOOL)arg1 bySplashBoard:(BOOL)arg2 ;
-(id)allSplashBoardApplications;
-(void)_removeLaunchImagesMatchingPredicate:(id)arg1 forApplications:(id)arg2 forgettingApps:(BOOL)arg3 ;
-(id)_allApplications;
-(void)_removeCachedLaunchImagesForApplications:(id)arg1 forgettingApps:(BOOL)arg2 ;
-(id)launchRequestsForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 ;
-(id)allSplashBoardSystemApplications;
-(void)resetEverything;
-(void)_captureOrUpdateLaunchImagesForApplications:(id)arg1 firstImageIsReady:(/*^block*/id)arg2 ;
-(void)_captureLaunchImageForApplication:(id)arg1 withCompatibilityInfo:(id)arg2 firstImageIsReady:(/*^block*/id)arg3 withCompletion:(/*^block*/id)arg4 ;
@end

