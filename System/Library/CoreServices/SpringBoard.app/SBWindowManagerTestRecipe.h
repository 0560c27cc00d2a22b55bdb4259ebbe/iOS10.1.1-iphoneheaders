/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FBApplicationProcessObserver.h>
#import <SpringBoard/SBTestRecipe.h>

@class FBApplicationUpdateScenesTransaction, NSString;

@interface SBWindowManagerTestRecipe : NSObject <FBApplicationProcessObserver, SBTestRecipe> {

	FBApplicationUpdateScenesTransaction* _currentTransaction;

}

@property (nonatomic,retain) FBApplicationUpdateScenesTransaction * currentTransaction;              //@synthesize currentTransaction=_currentTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)title;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)applicationProcessDidExit:(id)arg1 withContext:(id)arg2 ;
-(FBApplicationUpdateScenesTransaction *)currentTransaction;
-(void)setCurrentTransaction:(FBApplicationUpdateScenesTransaction *)arg1 ;
@end

