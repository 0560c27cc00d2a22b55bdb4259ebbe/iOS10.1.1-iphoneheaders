/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:43 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBRestartManagerDelegate <NSObject>
@optional
-(void)restartManagerWillShutdown:(id)arg1;
-(void)restartManagerWillReboot:(id)arg1;
-(void)restartManager:(id)arg1 willRestartWithTransitionRequest:(id)arg2;
-(void)restartManagerExitImminent:(id)arg1;

@end

