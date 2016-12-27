/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QLItemViewController.h>

@class UITextView, NSMutableDictionary;

@interface QLDebugItemViewController : QLItemViewController {

	BOOL _constraintsSetUp;
	UITextView* _logTextView;
	NSMutableDictionary* _selectorToCount;

}
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(void)_addLog:(id)arg1 logLevel:(unsigned long long)arg2 ;
-(void)_encounterMethodCall:(SEL)arg1 ;
-(void)previewIsAppearingWithProgress:(double)arg1 ;
-(void)previewWillFinishAppearing;
-(void)_encounterMethodCall:(SEL)arg1 animatedValue:(unsigned long long)arg2 ;
-(id)_attributesForLogLevel:(unsigned long long)arg1 ;
-(BOOL)canSwipeToDismiss;
-(void)setAppearance:(id)arg1 ;
@end

