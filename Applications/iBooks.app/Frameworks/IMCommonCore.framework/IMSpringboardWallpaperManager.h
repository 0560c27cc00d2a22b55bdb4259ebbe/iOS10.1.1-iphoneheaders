/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/iBooks.app/Frameworks/IMCommonCore.framework/IMCommonCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, SBSAssertion;

@interface IMSpringboardWallpaperManager : NSObject {

	NSObject*<OS_dispatch_queue> _sync;
	unsigned long long _pauseCount;
	SBSAssertion* _pauseAssertion;

}
+(id)sharedManager;
-(void)_incrementPause;
-(void)_decrementPause;
-(id)init;
-(void)dealloc;
-(id)pauseAnimation;
-(void)_enterBackground:(id)arg1 ;
@end

