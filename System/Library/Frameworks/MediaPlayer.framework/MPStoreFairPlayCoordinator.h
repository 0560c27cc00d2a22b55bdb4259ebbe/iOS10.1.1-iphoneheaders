/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable;

@interface MPStoreFairPlayCoordinator : NSObject {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMapTable* _cacheKeyToSAPSession;

}
+(id)_newCacheKeyForVersion:(long long)arg1 URLBagDictionary:(id)arg2 ;
+(BOOL)requiresSAPSessionReloadFromEnvironment:(id)arg1 toEnvironment:(id)arg2 forSAPVersion:(long long)arg3 ;
+(id)sharedCoordinator;
-(id)init;
-(void)loadSAPSessionWithVersion:(long long)arg1 environment:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

