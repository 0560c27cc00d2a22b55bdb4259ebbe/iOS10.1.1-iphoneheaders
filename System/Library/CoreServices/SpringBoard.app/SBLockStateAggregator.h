/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface SBLockStateAggregator : NSObject {

	unsigned long long _lockState;

}
+(id)sharedInstance;
-(id)_descriptionForLockState:(unsigned long long)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)hasAnyLockState;
-(unsigned long long)lockState;
-(void)_updateLockState;
@end

