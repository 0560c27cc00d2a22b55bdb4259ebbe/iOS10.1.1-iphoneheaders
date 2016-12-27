/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject {

	NSMutableDictionary* _actionProviders;

}

@property (nonatomic,retain) NSMutableDictionary * actionProviders;              //@synthesize actionProviders=_actionProviders - In the implementation block
-(void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2 ;
-(void)runUnlockAction;
-(id)currentLockScreenActionContextActionSource:(unsigned long long*)arg1 ;
-(void)_clearActionOnAllProviders;
-(id)currentLockScreenActionContext;
-(NSMutableDictionary *)actionProviders;
-(void)setActionProviders:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

