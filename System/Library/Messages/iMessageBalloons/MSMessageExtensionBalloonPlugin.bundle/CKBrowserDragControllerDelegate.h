/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/MSMessageExtensionBalloonPlugin.bundle/MSMessageExtensionBalloonPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKBrowserDragControllerDelegate <NSObject>
@optional
-(/*^block*/id)commitBlockForItem:(id)arg1;

@required
-(BOOL)dragManager:(id)arg1 canScaleItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canRotateItem:(id)arg2;
-(BOOL)dragManager:(id)arg1 canPeelItem:(id)arg2;
-(void)dragManager:(id)arg1 didBeginDraggingItem:(id)arg2;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
-(void)dragManager:(id)arg1 didDragItem:(id)arg2 toDragTarget:(id)arg3;
-(BOOL)dragManager:(id)arg1 shouldCancelDraggingForItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4;
-(void)dragManager:(id)arg1 didEndDraggingItem:(id)arg2 toDragTarget:(id)arg3 dropArea:(int)arg4 wasCancelled:(BOOL*)arg5;

@end

