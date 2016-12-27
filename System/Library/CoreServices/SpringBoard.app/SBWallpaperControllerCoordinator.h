/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableDictionary;

@interface SBWallpaperControllerCoordinator : NSObject {

	NSMutableDictionary* _bundleIDToApplicationTransitionStates;
	NSMutableDictionary* _bundleIDToApplicationAnimationTransitionStates;

}
-(id)_stateLookupForPriority:(long long)arg1 ;
-(id)_backgroundColorForApp:(id)arg1 ;
-(void)_setBackgroundColor:(id)arg1 forBundleID:(id)arg2 withAnimationFactory:(id)arg3 ;
-(BOOL)_updateWallpaperAndBackgroundStatesForModifiedBundleID:(id)arg1 animationFactory:(id)arg2 ;
-(id)_effectiveStateForBundleID:(id)arg1 ;
-(long long)_effectivePriorityForBundleID:(id)arg1 ;
-(BOOL)setHomescreenStyle:(long long)arg1 forBundleID:(id)arg2 priority:(long long)arg3 animationFactory:(id)arg4 ;
-(BOOL)setHomescreenStyleTransitionState:(SCD_Struct_SB24)arg1 forBundleID:(id)arg2 priority:(long long)arg3 animationFactory:(id)arg4 ;
-(BOOL)removeHomescreenStyleForBundleID:(id)arg1 priority:(long long)arg2 animationFactory:(id)arg3 ;
-(id)init;
-(id)description;
@end

