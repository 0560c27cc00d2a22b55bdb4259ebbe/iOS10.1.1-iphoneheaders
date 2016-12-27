/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SBMultiplexedHostingObserver <NSObject>
@optional
-(id)customSnapshotView;
-(id)mainViewForTouchDelivery;
-(BOOL)wantsToShareTouches;
-(BOOL)delaysSharingTouchesUntilAppeared;
-(void)textSelectionInteractionWillBegin;
-(void)textSelectionInteractionDidEnd;
-(void)presentationControllerWillBeginPresenting:(id)arg1;
-(void)presentationControllerDidEndPresenting:(id)arg1;
-(void)presentationControllerWillBeginDismissing:(id)arg1;
-(void)presentationControllerDidEndDismissing:(id)arg1;
-(void)willActivateHosting;
-(void)willDeactivateHosting;
-(id)containingScrollView;

@end

