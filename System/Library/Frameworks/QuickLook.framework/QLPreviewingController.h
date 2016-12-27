/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol QLPreviewingController <NSObject>
@optional
-(id)printer;
-(void)previewWillAppear:(BOOL)arg1;
-(void)previewDidAppear:(BOOL)arg1;
-(void)previewWillDisappear:(BOOL)arg1;
-(void)previewDidDisappear:(BOOL)arg1;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canShowToolBar;
-(void)previewIsAppearingWithProgress:(double)arg1;
-(void)previewWillFinishAppearing;
-(BOOL)canSwipeToDismiss;

@required
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

