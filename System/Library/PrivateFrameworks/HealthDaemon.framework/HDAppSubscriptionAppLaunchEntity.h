/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDHealthEntity.h>

@interface HDAppSubscriptionAppLaunchEntity : HDHealthEntity
+(id)columnsDefinition;
+(id)databaseTable;
+(long long)protectionClass;
+(id)tableAliases;
+(id)launchTimeForBundleID:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(BOOL)removeBundleIdentifier:(id)arg1 healthDaemon:(id)arg2 error:(id*)arg3 ;
+(BOOL)setLaunchTime:(id)arg1 forBundleID:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
+(id)_predicateForBundleID:(id)arg1 ;
+(BOOL)_getLaunchTimesWithArray:(id)arg1 predicate:(id)arg2 healthDaemon:(id)arg3 error:(id*)arg4 ;
@end

