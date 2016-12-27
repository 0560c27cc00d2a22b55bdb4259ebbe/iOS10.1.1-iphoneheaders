/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuickLook/QuickLook-Structs.h>
#import <QuickLook/QLItemViewController.h>
#import <libobjc.A.dylib/QLPrintingProtocol.h>

@protocol QLPrintingProtocol;
@class NSExtension, QLRemotePreviewHostContext, _UIRemoteViewController, NSDictionary, NSLayoutConstraint;

@interface QLRemoteItemViewController : QLItemViewController <QLPrintingProtocol> {

	NSExtension* _extension;
	id _request;
	QLRemotePreviewHostContext* _serviceContext;
	_UIRemoteViewController* _remoteViewController;
	NSDictionary* _hostConfiguration;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;
	id<QLPrintingProtocol> _printer;
	BOOL _visible;
	BOOL _fullScreen;

}
-(void)dealloc;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(id)printer;
-(void)prepareForDrawingPages:(NSRange)arg1 ;
-(void)loadPreviewControllerWithPreviewItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)previewWillAppear:(BOOL)arg1 ;
-(void)previewDidAppear:(BOOL)arg1 ;
-(void)previewWillDisappear:(BOOL)arg1 ;
-(void)previewDidDisappear:(BOOL)arg1 ;
-(void)previewBecameFullScreen:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)canEnterFullScreen;
-(void)numberOfPagesWithSize:(CGSize)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)pdfDataForPageAtIndex:(long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)previewWillFinishAppearing;
-(BOOL)canSwipeToDismiss;
@end

