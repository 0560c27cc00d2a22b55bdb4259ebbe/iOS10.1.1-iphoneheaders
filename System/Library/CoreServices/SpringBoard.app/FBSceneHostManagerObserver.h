/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSceneHostManagerObserver <NSObject>
@optional
-(void)sceneHostManagerDidSuspendHosting:(id)arg1;
-(void)sceneHostManagerDidResumeHosting:(id)arg1;
-(void)sceneHostManagerDidInvalidate:(id)arg1;
-(void)sceneHostManager:(id)arg1 willDeactivateRequester:(id)arg2;
-(void)sceneHostManager:(id)arg1 willActivateRequester:(id)arg2;
-(void)sceneHostManagerLayersDidChange:(id)arg1;

@end
