/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <libobjc.A.dylib/SUClientInterfaceDelegatePrivate.h>

@class NSString, SKUIApplicationController, NSBundle, SUClientInterface, NSDictionary, SKUIStoreDialogController, SKUILocalizedStringDictionary, NSMapTable, NSMutableArray, SKUIURL, IKAppContext, SSUpdatableAssetController, SKUIURLBag, SKUITrendingSearchProvider, NSOperationQueue, NSCache, SSVPlatformContext, NSArray, SSURLBag;

@interface SKUIClientContext : NSObject <SUClientInterfaceDelegatePrivate> {

	NSString* _additionalPurchaseParameters;
	SKUIApplicationController* _applicationController;
	NSBundle* _bundle;
	SUClientInterface* _clientInterface;
	NSDictionary* _configurationDictionary;
	SKUIStoreDialogController* _dialogController;
	SKUILocalizedStringDictionary* _localizedStrings;
	NSString* _metricsConfigurationIdentifier;
	NSMapTable* _metricsPageContexts;
	NSMutableArray* _navigationHistory;
	NSString* _navigationHistoryPersistenceKey;
	NSString* _purchaseAffiliateIdentifier;
	SKUIURL* _purchaseReferrerURL;
	long long _purchaseURLBagType;
	IKAppContext* _scriptAppContext;
	NSString* _storeFrontIdentifier;
	SSUpdatableAssetController* _updatableAssetController;
	SKUIURLBag* _urlBag;
	long long _userInterfaceIdiomOverride;
	SKUITrendingSearchProvider* _trendingSearchProvider;
	NSOperationQueue* _resourceLoadQueue;
	NSCache* _placeholderImageCache;

}

@property (getter=isBootstrapScriptFallbackDisabled,nonatomic,readonly) BOOL bootstrapScriptFallbackDisabled; 
@property (assign,setter=_setApplicationController:,getter=_applicationController,nonatomic,__weak) SKUIApplicationController * _applicationController;              //@synthesize applicationController=_applicationController - In the implementation block
@property (nonatomic,readonly) NSCache * placeholderImageCache;                                                                                                      //@synthesize placeholderImageCache=_placeholderImageCache - In the implementation block
@property (nonatomic,readonly) SKUITrendingSearchProvider * trendingSearchProvider; 
@property (nonatomic,readonly) NSOperationQueue * resourceLoadQueue; 
@property (nonatomic,readonly) Class moviePlayerViewControllerClass; 
@property (getter=isMultiUser,nonatomic,readonly) BOOL multiUser; 
@property (getter=isManagedAppleID,nonatomic,readonly) BOOL managedAppleID; 
@property (getter=applicationController,nonatomic,__weak,readonly) SKUIApplicationController * applicationController; 
@property (nonatomic,copy) NSString * navigationHistoryPersistenceKey;                                                                                               //@synthesize navigationHistoryPersistenceKey=_navigationHistoryPersistenceKey - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * configurationDictionary;                                                                                          //@synthesize configurationDictionary=_configurationDictionary - In the implementation block
@property (nonatomic,readonly) SSVPlatformContext * platformContext; 
@property (setter=_setScriptAppContext:,getter=_scriptAppContext,nonatomic,retain) IKAppContext * _scriptAppContext;                                                 //@synthesize scriptAppContext=_scriptAppContext - In the implementation block
@property (nonatomic,readonly) NSArray * navigationHistory; 
@property (nonatomic,readonly) SUClientInterface * clientInterface;                                                                                                  //@synthesize clientInterface=_clientInterface - In the implementation block
@property (assign,nonatomic) long long userInterfaceIdiomOverride;                                                                                                   //@synthesize userInterfaceIdiomOverride=_userInterfaceIdiomOverride - In the implementation block
@property (nonatomic,readonly) NSString * storeFrontIdentifier;                                                                                                      //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,readonly) SSURLBag * URLBag; 
@property (nonatomic,copy) NSString * metricsConfigurationIdentifier;                                                                                                //@synthesize metricsConfigurationIdentifier=_metricsConfigurationIdentifier - In the implementation block
@property (nonatomic,copy) SKUIURL * purchaseReferrerURL;                                                                                                            //@synthesize purchaseReferrerURL=_purchaseReferrerURL - In the implementation block
@property (nonatomic,retain) SSUpdatableAssetController * updatableAssetController;                                                                                  //@synthesize updatableAssetController=_updatableAssetController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultContext;
+(id)localizedStringForKey:(id)arg1 inBundles:(id)arg2 inTable:(id)arg3 ;
+(id)localizedStringForKey:(id)arg1 inBundles:(id)arg2 ;
+(id)_cachePath;
+(id)_fallbackConfigurationDictionary;
+(id)_cachePathForStoreFrontIdentifier:(id)arg1 ;
+(id)_configurationDictionaryWithBagDictionary:(id)arg1 ;
-(void)as_sendOnNearbyLoadEventWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)as_sendOnCategoryLoadEventWithCategory:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(NSString *)description;
-(id)localizedStringForKey:(id)arg1 ;
-(SUClientInterface *)clientInterface;
-(void)_setAdditionalPurchaseParameters:(id)arg1 ;
-(void)_setPurchaseAffiliateIdentifier:(id)arg1 ;
-(void)_setPurchaseURLBagType:(long long)arg1 ;
-(void)setMetricsPageContext:(id)arg1 forViewController:(id)arg2 ;
-(id)initWithConfigurationDictionary:(id)arg1 ;
-(void)setUserInterfaceIdiomOverride:(long long)arg1 ;
-(void)clientInterface:(id)arg1 dispatchOnPageResponseWithData:(id)arg2 response:(id)arg3 ;
-(void)clientInterface:(id)arg1 dispatchXEvent:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)clientInterface:(id)arg1 presentDialog:(id)arg2 ;
-(id)scriptInterfaceForClientInterface:(id)arg1 ;
-(id)localizedStringForKey:(id)arg1 inTable:(id)arg2 ;
-(SSURLBag *)URLBag;
-(void)customizePurchase:(id)arg1 ;
-(id)valueForConfigurationKey:(id)arg1 ;
-(SSVPlatformContext *)platformContext;
-(BOOL)isManagedAppleID;
-(SKUIApplicationController *)applicationController;
-(void)sendApplicationDidEnterBackground;
-(void)sendApplicationWillEnterForeground;
-(void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3 performanceMetrics:(id)arg4 ;
-(void)sendAppPreviewStateChanged:(BOOL)arg1 ;
-(void)sendApplicationWindowSizeDidUpdate:(CGSize)arg1 ;
-(IKAppContext *)_scriptAppContext;
-(id)previewViewControllerForViewElement:(id)arg1 ;
-(void)getDefaultMetricsControllerWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)metricsPageContextForViewController:(id)arg1 ;
-(void)sendOnXEventWithDictionary:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(NSOperationQueue *)resourceLoadQueue;
-(id)newLoadStoreURLOperationWithURL:(id)arg1 ;
-(NSString *)storeFrontIdentifier;
-(SKUIApplicationController *)_applicationController;
-(id)existingBagValueForKey:(id)arg1 ;
-(BOOL)shouldForceTransientSearchControllerBahavior;
-(id)additionalLeftBarButtonItemForDocumentContainerViewController:(id)arg1 ;
-(id)additionalRightBarButtonItemForDocumentContainerViewController:(id)arg1 ;
-(id)documentViewControllerForTemplateViewElement:(id)arg1 ;
-(id)newLegacyStorePageViewControllerForURLResponse:(id)arg1 ;
-(SKUITrendingSearchProvider *)trendingSearchProvider;
-(SSUpdatableAssetController *)updatableAssetController;
-(NSCache *)placeholderImageCache;
-(id)localizedAlertWithError:(id)arg1 ;
-(id)additionalLeftBarButtonItemForViewController:(id)arg1 ;
-(id)additionalRightBarButtonItemForViewController:(id)arg1 ;
-(BOOL)storeViewController:(id)arg1 shouldDisplayDefaultDarButton:(long long)arg2 ;
-(BOOL)isMultiUser;
-(void)_setApplicationController:(id)arg1 ;
-(void)_setScriptAppContext:(id)arg1 ;
-(void)setPurchaseReferrerURL:(SKUIURL *)arg1 ;
-(long long)tabBarStyleForWidth:(double)arg1 ;
-(void)_setValue:(id)arg1 forConfigurationKey:(id)arg2 ;
-(BOOL)isBootstrapScriptFallbackDisabled;
-(void)setUpdatableAssetController:(SSUpdatableAssetController *)arg1 ;
-(id)newLoadStoreURLOperationWithURLRequest:(id)arg1 ;
-(id)modalDocumentViewControllerForDocument:(id)arg1 options:(id)arg2 ;
-(NSString *)metricsConfigurationIdentifier;
-(id)_navigationHistory;
-(id)SAPSessionForVersion:(long long)arg1 ;
-(NSArray *)navigationHistory;
-(void)pushNavigationHistoryPageIdentifier:(id)arg1 ;
-(BOOL)supportsRenderingVersion:(unsigned)arg1 ;
-(id)tabBarItemsForStyle:(long long)arg1 ;
-(void)loadValueForConfigurationKey:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(Class)moviePlayerViewControllerClass;
-(NSDictionary *)configurationDictionary;
-(void)setMetricsConfigurationIdentifier:(NSString *)arg1 ;
-(NSString *)navigationHistoryPersistenceKey;
-(void)setNavigationHistoryPersistenceKey:(NSString *)arg1 ;
-(SKUIURL *)purchaseReferrerURL;
-(long long)userInterfaceIdiomOverride;
@end

