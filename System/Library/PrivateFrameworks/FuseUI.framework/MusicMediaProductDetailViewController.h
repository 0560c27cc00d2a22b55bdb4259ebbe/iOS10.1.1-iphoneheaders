/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <FuseUI/MusicMediaDetailViewController.h>
#import <libobjc.A.dylib/MusicJSProductNativeViewControllerDelegate.h>
#import <UIKit/UIViewControllerRestoration.h>
#import <libobjc.A.dylib/MusicMediaProductHeaderContentViewControllerDelegate.h>
#import <libobjc.A.dylib/MusicClientContextConsuming.h>
#import <libobjc.A.dylib/MusicJSNativeViewControllerFactory.h>

@protocol MusicEntityProviding;
@class MPArtworkCatalog, UIBarButtonItem, MusicMediaProductDetailHeaderConfiguration, MusicMediaProductHeaderContentViewController, MusicMediaDetailHeaderViewController, NSArray, NSMutableArray, UIViewController, MusicEntityValueContext, MusicClientContext, UIImage, MusicMediaProductSplitDetailViewController, MusicMediaProductSplitMainViewController, UIScrollView, NSString;

@interface MusicMediaProductDetailViewController : MusicMediaDetailViewController <MusicJSProductNativeViewControllerDelegate, UIViewControllerRestoration, MusicMediaProductHeaderContentViewControllerDelegate, MusicClientContextConsuming, MusicJSNativeViewControllerFactory> {

	BOOL _allowsProductHairline;
	MPArtworkCatalog* _artworkCatalog;
	UIBarButtonItem* _cancelButtonItem;
	MusicMediaProductDetailHeaderConfiguration* _detailHeaderConfiguration;
	BOOL _hasDetailTintInformation;
	BOOL _hasPresentedExplicitByDefaultAlert;
	BOOL _editingWasCancelled;
	BOOL _hasReceivedViewWillAppearAtLeastOnce;
	BOOL _isObservingClientContextTransferAggregatorDidChangeNotification;
	BOOL _isViewFullyVisible;
	MusicMediaProductHeaderContentViewController* _mediaProductHeaderContentViewController;
	MusicMediaDetailHeaderViewController* _mediaDetailHeaderViewController;
	BOOL _needsEffectiveNavigationItemUpdateForEditingStateChangeUponViewWillAppear;
	BOOL _needsArtworkCatalogUpdate;
	BOOL _needsColorAnalysisUpdate;
	NSArray* _nonEditingLeftBarButtonItems;
	NSArray* _nonEditingRightBarButtonItems;
	NSMutableArray* _pendingTintInformationDispatchEvents;
	CGSize _previousMaximumHeaderSize;
	UIViewController* _relatedContentViewController;
	BOOL _forContentCreation;
	MusicEntityValueContext* _containerEntityValueContext;
	MusicClientContext* _clientContext;
	id<MusicEntityProviding> _containerEntityProvider;
	UIImage* _editedContentArtworkImage;
	long long _presentationSource;
	id<MusicEntityProviding> _tracklistEntityProvider;

}

@property (nonatomic,readonly) MusicEntityValueContext * _containerEntityValueContext;                                //@synthesize containerEntityValueContext=_containerEntityValueContext - In the implementation block
@property (nonatomic,retain) MusicClientContext * clientContext;                                                      //@synthesize clientContext=_clientContext - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> containerEntityProvider;                                      //@synthesize containerEntityProvider=_containerEntityProvider - In the implementation block
@property (nonatomic,retain) UIImage * editedContentArtworkImage;                                                     //@synthesize editedContentArtworkImage=_editedContentArtworkImage - In the implementation block
@property (getter=isForContentCreation,nonatomic,readonly) BOOL forContentCreation;                                   //@synthesize forContentCreation=_forContentCreation - In the implementation block
@property (nonatomic,readonly) long long presentationSource;                                                          //@synthesize presentationSource=_presentationSource - In the implementation block
@property (nonatomic,readonly) id<MusicEntityProviding> tracklistEntityProvider;                                      //@synthesize tracklistEntityProvider=_tracklistEntityProvider - In the implementation block
@property (nonatomic,retain) MusicMediaProductHeaderContentViewController * headerContentViewController; 
@property (nonatomic,retain) MusicMediaDetailHeaderViewController * headerViewController; 
@property (nonatomic,readonly) MusicMediaProductSplitDetailViewController * splitDetailViewController; 
@property (nonatomic,retain) MusicMediaProductSplitMainViewController * splitMainViewController; 
@property (nonatomic,readonly) UIScrollView * containerScrollView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)viewControllerWithRestorationIdentifierPath:(id)arg1 coder:(id)arg2 ;
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)viewDidLoad;
-(id)previewMenuItems;
-(UIScrollView *)containerScrollView;
-(void)setClientContext:(MusicClientContext *)arg1 ;
-(MusicClientContext *)clientContext;
-(BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2 ;
-(void)_reloadContainerEntityValueContextProperties;
-(void)setEditedContentArtworkImage:(UIImage *)arg1 ;
-(UIImage *)editedContentArtworkImage;
-(MusicEntityValueContext *)_containerEntityValueContext;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 ;
-(id<MusicEntityProviding>)containerEntityProvider;
-(id)initWithContainerEntityProvider:(id)arg1 tracklistEntityProvider:(id)arg2 clientContext:(id)arg3 existingJSProductNativeViewController:(id)arg4 forContentCreation:(BOOL)arg5 ;
-(id)_containerMetadataContextWithContainerJSDictionary:(id)arg1 tracklistItemJSDictionaries:(id)arg2 ;
-(long long)presentationSource;
-(void)_handleContainerEntityProviderDidInvalidateNotification:(id)arg1 ;
-(id)_loadProductSplitMainViewController;
-(long long)_productDescriptionTextStyle;
-(id)_loadProductSplitDetailViewController;
-(void)_updateDetailHeaderConfiguration;
-(void)_updateColorAnalysisIfNeededWithShouldTemporarilyWait:(BOOL)arg1 ;
-(void)_unregisterForClientContextTransferAggregatorDidChangeNotification;
-(void)_cancelEditing;
-(void)_commitEditing;
-(BOOL)_calculateHeaderContentViewControllerEditing;
-(void)_updateEffectiveNavigationItemForEditingStateChangeAnimated:(BOOL)arg1 ;
-(void)_setNeedsDetailHeaderConfigurationUpdate;
-(void)_presentExplicitByDefaultAlertIfNeeded;
-(void)_dispatchNativeViewEventOfType:(long long)arg1 withExtraInfo:(id)arg2 forViewController:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_mediaProductHeaderContentViewController;
-(BOOL)allowsHairline;
-(BOOL)allowsShowingSplitDetailViewController;
-(void)detailTintInformationDidChange;
-(void)showingSplitDetailViewControllerDidChange;
-(void)_updateRelatedContentViewControllerPlacement;
-(void)updateWithHeaderHeight:(double)arg1 maximumHeaderHeight:(double)arg2 headerVerticalOffset:(double)arg3 transitionProgress:(double)arg4 ;
-(void)_updateAllowsProductHairline;
-(BOOL)_shouldAutomaticallyPopForMissingContainerEntityValueProvider;
-(id)_loadProductHeaderContentViewController;
-(void)_sendPendingTintInformationDispatchEvents;
-(id)_loadDetailHeaderConfiguration;
-(id)_mediaDetailHeaderViewController;
-(id)_effectiveNavigationItem;
-(void)_handleCancelButtonTapped:(id)arg1 ;
-(void)jsProductNativeViewController:(id)arg1 presentShareDocument:(id)arg2 options:(id)arg3 ;
-(void)jsProductNativeViewController:(id)arg1 setProductEntityValueProviderData:(id)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setProminentTrackStoreID:(long long)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setReportingInformation:(id)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setTracklistItems:(id)arg2 ;
-(void)jsProductNativeViewController:(id)arg1 setRelatedContentDocument:(id)arg2 options:(id)arg3 ;
-(void)mediaProductHeaderContentViewControllerDidTapEdit:(id)arg1 ;
-(void)mediaProductHeaderContentViewController:(id)arg1 didSelectShareButton:(id)arg2 ;
-(void)mediaProductHeaderContentViewControllerDidUpdateEditableText:(id)arg1 ;
-(id)loadJSNativeViewControllerWithAppContext:(id)arg1 ;
-(BOOL)music_allowsMetricsEvents;
-(BOOL)_editingWasCancelled;
-(BOOL)isForContentCreation;
-(id<MusicEntityProviding>)tracklistEntityProvider;
@end

