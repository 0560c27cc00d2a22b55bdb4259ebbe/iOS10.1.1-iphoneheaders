/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/_UIDocumentPickerRemoteViewControllerContaining.h>
#import <UIKit/UIActionSheetPresentationControllerDelegate.h>

@protocol UIDocumentMenuDelegate;
@class NSMutableArray, _UIResilientRemoteViewContainerViewController, NSURL, _UIDocumentPickerRemoteViewController, NSString;

@interface UIDocumentMenuViewController : UIViewController <_UIDocumentPickerRemoteViewControllerContaining, UIActionSheetPresentationControllerDelegate> {

	id<UIDocumentMenuDelegate> _weak_delegate;
	BOOL _ignoreApplicationEntitlementForImport;
	BOOL _dismissDelegateCalled;
	BOOL _sourceIsManaged;
	id<UIDocumentMenuDelegate> _delegate;
	NSMutableArray* _auxiliaryOptions;
	_UIResilientRemoteViewContainerViewController* _childViewController;
	unsigned long long _documentPickerMode;
	NSURL* _uploadURL;

}

@property (nonatomic,retain) NSMutableArray * auxiliaryOptions;                                                                                                                        //@synthesize auxiliaryOptions=_auxiliaryOptions - In the implementation block
@property (setter=_setChildViewController:,getter=_childViewController,nonatomic,retain) _UIResilientRemoteViewContainerViewController * childViewController;                          //@synthesize childViewController=_childViewController - In the implementation block
@property (getter=_remoteViewController,nonatomic,retain,readonly) _UIDocumentPickerRemoteViewController * remoteViewController; 
@property (assign,nonatomic) BOOL dismissDelegateCalled;                                                                                                                               //@synthesize dismissDelegateCalled=_dismissDelegateCalled - In the implementation block
@property (assign,nonatomic) unsigned long long documentPickerMode;                                                                                                                    //@synthesize documentPickerMode=_documentPickerMode - In the implementation block
@property (nonatomic,copy) NSURL * uploadURL;                                                                                                                                          //@synthesize uploadURL=_uploadURL - In the implementation block
@property (assign,setter=_setIgnoreApplicationEntitlementForImport:,getter=_ignoreApplicationEntitlementForImport,nonatomic) BOOL _ignoreApplicationEntitlementForImport;              //@synthesize ignoreApplicationEntitlementForImport=_ignoreApplicationEntitlementForImport - In the implementation block
@property (assign,setter=_setSourceIsManaged:,getter=_sourceIsManaged,nonatomic) BOOL sourceIsManaged;                                                                                 //@synthesize sourceIsManaged=_sourceIsManaged - In the implementation block
@property (assign,nonatomic,__weak) id<UIDocumentMenuDelegate> delegate;                                                                                                               //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<UIDocumentMenuDelegate>)arg1 ;
-(id<UIDocumentMenuDelegate>)delegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(unsigned long long)documentPickerMode;
-(void)_setSourceIsManaged:(BOOL)arg1 ;
-(void)_dismissViewController;
-(void)_setChildViewController:(id)arg1 ;
-(void)setModalPresentationStyle:(long long)arg1 ;
-(id)initWithDocumentTypes:(id)arg1 inMode:(unsigned long long)arg2 ;
-(id)_remoteViewController;
-(id)_childViewController;
-(id)initWithURL:(id)arg1 inMode:(unsigned long long)arg2 ;
-(void)setDocumentPickerMode:(unsigned long long)arg1 ;
-(void)_commonInitWithCompletion:(/*^block*/id)arg1 ;
-(void)setUploadURL:(NSURL *)arg1 ;
-(NSURL *)uploadURL;
-(void)_didSelectURL:(id)arg1 ;
-(void)_didSelectPicker;
-(void)_dismissWithOption:(id)arg1 ;
-(void)_stitchFileCreationAtURL:(id)arg1 ;
-(void)_displayLocationsMenuFromRect:(CGRect)arg1 ;
-(id)_initIgnoringApplicationEntitlementForImportOfTypes:(id)arg1 ;
-(BOOL)_ignoreApplicationEntitlementForImport;
-(void)_setIgnoreApplicationEntitlementForImport:(BOOL)arg1 ;
-(BOOL)_sourceIsManaged;
-(void)setAuxiliaryOptions:(NSMutableArray *)arg1 ;
-(NSMutableArray *)auxiliaryOptions;
-(void)setDismissDelegateCalled:(BOOL)arg1 ;
-(BOOL)dismissDelegateCalled;
-(void)actionSheetPresentationControllerDidDismissActionSheet:(id)arg1 ;
-(void)addOptionWithTitle:(id)arg1 image:(id)arg2 order:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
@end

