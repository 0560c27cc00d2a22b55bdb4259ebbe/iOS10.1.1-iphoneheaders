/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSUpdatesDatabaseSession.h>

@interface SSUpdatesDatabaseTransaction : SSUpdatesDatabaseSession
-(BOOL)deleteUpdatesInstalledBefore:(double)arg1 ;
-(id)_newUpdateEntityPropertiesWithUpdate:(id)arg1 ;
-(BOOL)mergeAvailableUpdates:(id)arg1 availableCount:(long long*)arg2 ;
@end

