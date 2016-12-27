/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/WKUIDelegate.h>

@class WKWebView, _SFBrowserContentViewController, NSString;

@interface SFReaderViewController : UIViewController <WKUIDelegate> {

	WKWebView* _originalWebView;
	_SFBrowserContentViewController* _containerViewController;

}

@property (nonatomic,readonly) WKWebView * readerWebView; 
@property (assign,nonatomic,__weak) _SFBrowserContentViewController * containerViewController;              //@synthesize containerViewController=_containerViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadView;
-(_SFBrowserContentViewController *)containerViewController;
-(void)setContainerViewController:(_SFBrowserContentViewController *)arg1 ;
-(id)initWithOriginalWebView:(id)arg1 ;
-(WKWebView *)readerWebView;
-(id)_webView:(id)arg1 previewViewControllerForURL:(id)arg2 defaultActions:(id)arg3 elementInfo:(id)arg4 ;
-(void)_webView:(id)arg1 commitPreviewedViewController:(id)arg2 ;
@end

