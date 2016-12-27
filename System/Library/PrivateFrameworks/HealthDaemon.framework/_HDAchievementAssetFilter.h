/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_HKAchievementDefinitionLoaderFilter.h>

@class NSSet;

@interface _HDAchievementAssetFilter : NSObject <_HKAchievementDefinitionLoaderFilter> {

	NSSet* _allEarnedDefinitionIdentifiers;

}
-(id)initWithAllEarnedDefinitionIdentifiers:(id)arg1 ;
-(BOOL)_isAchievementDefinitionExpired:(id)arg1 ;
-(BOOL)_wasAchievementDefinitionEverEarned:(id)arg1 ;
-(BOOL)areAssetsNeededForAchievementDefinition:(id)arg1 ;
-(BOOL)areStickersNeededAtAll;
-(BOOL)areStickersNeededForAchievementDefinition:(id)arg1 ;
-(BOOL)areStickersEarnedForAchievementDefinition:(id)arg1 ;
@end

