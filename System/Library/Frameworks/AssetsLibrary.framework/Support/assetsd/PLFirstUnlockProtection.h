/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/Support/assetsd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface PLFirstUnlockProtection : NSObject {

	BOOL _isLocked;
	NSMutableArray* _pendingBlocks;
	BOOL _isWatchingForUnlock;

}
+(id)sharedInstance;
-(BOOL)checkFirstUnlock;
-(void)performAfterFirstUnlock:(/*^block*/id)arg1 ;
-(void)_performPendingBlocksAfterFirstUnlock;
-(id)init;
-(void)dealloc;
@end

