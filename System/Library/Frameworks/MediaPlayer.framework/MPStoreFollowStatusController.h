/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSOperationQueue, NSObject, NSSet, NSMutableSet, NSDate;

@interface MPStoreFollowStatusController : NSObject {

	NSOperationQueue* _serverOperationsQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSSet* _followed;
	NSMutableSet* _transientFollowed;
	NSMutableSet* _transientUnfollowed;
	NSDate* _lastFollowListUpdate;
	BOOL _isAutoFollowing;
	NSDate* _lastAutoFollowingUpdate;

}

@property (nonatomic,readonly) BOOL hasCacheEntries; 
+(id)sharedController;
+(id)activeDSID;
-(id)init;
-(void)getFollowedStoreIDs:(/*^block*/id)arg1 ;
-(void)_performCallback:(/*^block*/id)arg1 ;
-(id)_displayFollows;
-(void)_serialRead:(/*^block*/id)arg1 ;
-(void)prepareCache:(/*^block*/id)arg1 ;
-(void)_enqueueFollows:(id)arg1 unfollow:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)_shouldUpdate;
-(void)_actuallyUpdateCache:(/*^block*/id)arg1 ;
-(void)_barrierWrite:(/*^block*/id)arg1 ;
-(id)_followingURLFromBag:(id)arg1 accountDSID:(id)arg2 ;
-(void)_updateFollowsFromStoreDictionary:(id)arg1 ;
-(id)_autofollowStatusURLFromBag:(id)arg1 ;
-(id)_enableAutofollowURLFromBag:(id)arg1 enable:(BOOL)arg2 ;
-(void)getIsFollowingPerson:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)cachedIsFollowingPerson:(id)arg1 ;
-(void)follow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)unfollow:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasCacheEntries;
-(void)autoFollowStatusIsEnabled:(/*^block*/id)arg1 ;
-(void)setAutoFollowStatus:(BOOL)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

