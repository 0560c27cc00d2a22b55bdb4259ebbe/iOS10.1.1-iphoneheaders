/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/MSMessageExtensionBalloonPlugin.bundle/MSMessageExtensionBalloonPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MSMessageComposeHostProtocol <NSObject>
@required
-(void)_dismiss;
-(void)_stageAppItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_stageMediaItem:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_remoteViewDidBecomeReadyForDisplay;
-(void)_openURL:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_stageRichLink:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)_startDragMediaItem:(id)arg1 frameInRemoteView:(CGRect)arg2 fence:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)_requestPresentationStyleExpanded:(BOOL)arg1;
-(void)_updateSnapshotForNextLaunch:(id)arg1;

@end

