/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIViewController.h>
#import <libobjc.A.dylib/SKUIDocumentViewController.h>

@protocol OS_dispatch_source;
@class SKUIActivityIndicatorViewElement, SKUIActivityIndicatorView, NSObject, SKUILayoutCache, SKUILoadingTemplateViewElement, SKUIViewElementLayoutContext, NSString;

@interface SKUILoadingDocumentViewController : SKUIViewController <SKUIDocumentViewController> {

	SKUIActivityIndicatorViewElement* _activityIndicatorElement;
	SKUIActivityIndicatorView* _activityIndicatorView;
	NSObject*<OS_dispatch_source> _delayTimer;
	SKUILayoutCache* _layoutCache;
	SKUILoadingTemplateViewElement* _templateElement;
	SKUIViewElementLayoutContext* _viewLayoutContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)_activityIndicator;
-(void)documentDidUpdate:(id)arg1 ;
-(id)initWithTemplateElement:(id)arg1 ;
-(id)initWithActivityIndicatorElement:(id)arg1 ;
-(id)_layoutCache;
-(id)_viewLayoutContext;
-(void)_reloadViewStyling;
-(void)_showActivityIndicator;
-(CGRect)_computedFrameForActivityIndicatorView;
@end

