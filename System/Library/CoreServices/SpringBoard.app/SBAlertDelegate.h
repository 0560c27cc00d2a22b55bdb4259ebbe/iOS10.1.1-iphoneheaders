/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBAlertDelegate <NSObject>
@required
-(BOOL)defaultShouldAutorotateForAlert:(id)arg1;
-(long long)defaultInterfaceOrientationForPresentationOfAlert:(id)arg1;
-(unsigned long long)defaultSupportedInterfaceOrientationsForAlert:(id)arg1;
-(void)alertWillDismiss:(id)arg1;
-(void)alertIsReadyToBeDeactivated:(id)arg1;
-(void)alert:(id)arg1 requestsBackgroundStyleChangeWithAnimationFactory:(id)arg2;
-(void)alertDidChangeOrientationEventsEnabled:(id)arg1;
-(void)alert:(id)arg1 didChangeFaceContactExpectation:(BOOL)arg2;
-(void)alertIsReadyToBeRemovedFromView:(id)arg1;
-(void)alertDidChangeOccluding:(id)arg1;
-(void)alertWantsToForceWallpaperTunnelUpdate:(id)arg1;

@end

