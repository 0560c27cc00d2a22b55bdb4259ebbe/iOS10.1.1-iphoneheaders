/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/DDRemoteActionHostViewControllerDelegate.h>

@protocol DDRemoteActionViewServiceProtocol, NSCopying;
@class DDRemoteActionHostViewController, UIView, NSLayoutConstraint, UINavigationController, NSDate, NSString, NSMutableArray, DDRemoteAction, NSExtension;

@interface DDRemoteActionManagerViewController : UIViewController <DDRemoteActionHostViewControllerDelegate> {

	DDRemoteActionHostViewController* _remoteViewController;
	id<DDRemoteActionViewServiceProtocol> _serviceContext;
	UIView* _loadingView;
	UIView* _errorView;
	UIView* _titleBar;
	NSLayoutConstraint* _titleBarBottomConstraint;
	NSLayoutConstraint* _navControllerTopConstraint;
	UIView* _hitView;
	UINavigationController* _navigationController;
	NSDate* _loadingDate;
	BOOL _loaded;
	BOOL _displayed;
	BOOL _shouldDeferPresenting;
	NSString* _platerTitle;
	NSMutableArray* _rawSwipeActions;
	DDRemoteActionManagerViewController* _strongSelf;
	BOOL _previewMode;
	DDRemoteAction* _action;
	NSExtension* _extension;
	id<NSCopying> _request;

}

@property (__weak) DDRemoteAction * action;                         //@synthesize action=_action - In the implementation block
@property (retain) NSExtension * extension;                         //@synthesize extension=_extension - In the implementation block
@property (retain) id<NSCopying> request;                           //@synthesize request=_request - In the implementation block
@property (assign,nonatomic) BOOL previewMode;                      //@synthesize previewMode=_previewMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<NSCopying>)request;
-(DDRemoteAction *)action;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAction:(DDRemoteAction *)arg1 ;
-(id)previewActionItems;
-(id)initWithAction:(id)arg1 ;
-(id)doneButton;
-(NSExtension *)extension;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setRequest:(id<NSCopying>)arg1 ;
-(void)setPreviewMode:(BOOL)arg1 ;
-(BOOL)previewMode;
-(void)unloadRemoteAction;
-(void)showRemoteController;
-(void)loadNavigationControllerIfNeeded;
-(void)addHitOverlay;
-(void)loadTitleBarIfNeeded;
-(void)loadRemoteAction:(id)arg1 ;
-(void)updatePreviewMode;
-(void)showLoadingView;
-(void)dismissViewController;
-(id)emptyViewcontroller;
-(void)showErrorView;
-(void)removeLoadingViewToShowView:(id)arg1 ;
-(void)presentRemoteViewController;
-(id)controllerVerticalMargin;
-(void)DDRemoteActionDidTerminateWithError:(id)arg1 ;
@end

