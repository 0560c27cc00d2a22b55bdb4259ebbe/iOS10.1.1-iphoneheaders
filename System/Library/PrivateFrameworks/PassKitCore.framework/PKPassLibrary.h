/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKXPCServiceDelegate.h>
#import <libobjc.A.dylib/PKPassLibraryExportedInterface.h>

@protocol NSObject, PKPassLibraryDelegate;
@class PKXPCService, NSString;

@interface PKPassLibrary : NSObject <PKXPCServiceDelegate, PKPassLibraryExportedInterface> {

	PKXPCService* _remoteService;
	PKPassLibrary* _remoteLibrary;
	id<NSObject> _remoteLibraryObserver;
	unsigned long long _interfaceType;
	id<PKPassLibraryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<PKPassLibraryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isPassLibraryAvailable;
+(BOOL)isPaymentPassActivationAvailable;
+(unsigned long long)requestAutomaticPassPresentationSuppressionWithResponseHandler:(/*^block*/id)arg1 ;
+(void)endAutomaticPassPresentationSuppressionWithRequestToken:(unsigned long long)arg1 ;
+(BOOL)isSuppressingAutomaticPassPresentation;
+(BOOL)contactlessInterfaceCanBePresentedFromSource:(long long)arg1 ;
-(id)init;
-(void)setDelegate:(id<PKPassLibraryDelegate>)arg1 ;
-(void)dealloc;
-(id<PKPassLibraryDelegate>)delegate;
-(id)passes;
-(id)passWithPassTypeIdentifier:(id)arg1 serialNumber:(id)arg2 ;
-(BOOL)containsPass:(id)arg1 ;
-(BOOL)hasPassesOfType:(unsigned long long)arg1 ;
-(id)passesOfType:(unsigned long long)arg1 ;
-(void)removePassWithUniqueID:(id)arg1 diagnosticReason:(id)arg2 ;
-(void)hasInAppPaymentPassesForNetworks:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)hasInAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)hasWebPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)hasInAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)updateSettings:(unsigned long long)arg1 forObjectWithUniqueID:(id)arg2 ;
-(void)noteObjectSharedWithUniqueID:(id)arg1 ;
-(void)removeAllScheduledActivities;
-(void)nukeDatabaseAndExit;
-(void)introduceDatabaseIntegrityProblem;
-(void)shuffleGroups:(int)arg1 ;
-(void)issueWalletUserNotificationWithTitle:(id)arg1 message:(id)arg2 ;
-(void)sendUserEditedCatalog:(id)arg1 ;
-(void)logDelayExitReasons;
-(void)recomputeRelevantPassesWithSearchMode:(long long)arg1 ;
-(void)fetchHasCandidatePasses:(/*^block*/id)arg1 ;
-(void)fetchCurrentRelevantPassInfo:(/*^block*/id)arg1 ;
-(void)catalogChanged:(id)arg1 withNewPasses:(id)arg2 ;
-(void)removingPassesOfType:(unsigned long long)arg1 didUpdateWithProgress:(double)arg2 ;
-(void)removingPassesOfType:(unsigned long long)arg1 didFinishWithSuccess:(BOOL)arg2 ;
-(void)passAdded:(id)arg1 ;
-(void)passUpdated:(id)arg1 ;
-(void)passRemoved:(id)arg1 ;
-(void)contactlessInterfaceDidPresentFromSource:(long long)arg1 ;
-(void)contactlessInterfaceDidDismissFromSource:(long long)arg1 ;
-(BOOL)isPaymentPassActivationAvailable;
-(id)initWithMachServiceName:(id)arg1 resumeNotificationName:(id)arg2 interfaceType:(unsigned long long)arg3 ;
-(BOOL)_hasInterfaceOfType:(unsigned long long)arg1 ;
-(id)_passesWithRetries:(unsigned long long)arg1 ;
-(id)_passesOfType:(unsigned long long)arg1 withRetries:(unsigned long long)arg2 ;
-(void)_getPassWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_extendedRemoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)_applyDataAccessorToObject:(id)arg1 ;
-(id)_remoteObjectProxyWithSemaphore:(id)arg1 ;
-(BOOL)_hasRemoteLibrary;
-(BOOL)canAddFelicaPass;
-(id)_extendedRemoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)_synchronousInAppRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(void)_applyDataAccessorToObjects:(id)arg1 ;
-(id)_inAppRemoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)_getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 limitResults:(BOOL)arg2 withRetries:(unsigned long long)arg3 handler:(/*^block*/id)arg4 ;
-(void)_getArchivedObjectWithUniqueID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_getDataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_remoteObjectProxyWithFailureHandler:(/*^block*/id)arg1 ;
-(void)presentContactlessInterfaceForPassWithUniqueIdentifier:(id)arg1 fromSource:(long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 activationData:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_extendedRemoteObjectProxy;
-(void)_fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)_setSetting:(unsigned long long)arg1 enabled:(BOOL)arg2 forPass:(id)arg3 ;
-(void)removePassesOfType:(unsigned long long)arg1 withDiagnosticReason:(id)arg2 ;
-(void)_postLibraryChangeWithUserInfo:(id)arg1 ;
-(id)_remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(/*^block*/id)_errorHandlerWithCompletion:(/*^block*/id)arg1 ;
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2 ;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2 ;
-(id)_extendedRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_inAppRemoteObjectProxy;
-(id)_inAppRemoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)_inAppRemoteObjectProxyWithSemaphore:(id)arg1 ;
-(id)remotePaymentPasses;
-(id)paymentPassesWithLocallyStoredValue;
-(BOOL)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1 ;
-(BOOL)isRemovingPassesOfType:(unsigned long long)arg1 ;
-(id)inAppPaymentPassesForNetworks:(id)arg1 ;
-(id)inAppPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(id)webPaymentPassesForNetworks:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(id)inAppPrivateLabelPaymentPassesForApplicationIdentifier:(id)arg1 ;
-(void)getRouteRelevantPassesFromLocation:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)getPassesAndCatalog:(BOOL)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)getPassesAndCatalogOfPassTypes:(unsigned long long)arg1 withHandler:(/*^block*/id)arg2 ;
-(BOOL)replacePassWithPass:(id)arg1 ;
-(id)archiveForObjectWithUniqueID:(id)arg1 ;
-(id)dataForBundleResourceNamed:(id)arg1 withExtension:(id)arg2 objectUniqueIdentifier:(id)arg3 ;
-(void)openPaymentSetupForMerchantIdentifier:(id)arg1 domain:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentPaymentPass:(id)arg1 ;
-(void)presentContactlessInterfaceForDefaultPassFromSource:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)requestContactlessInterfaceSuppressionFromUserWithCompletion:(/*^block*/id)arg1 ;
-(void)activatePaymentPass:(id)arg1 withActivationCode:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)activatePaymentPass:(id)arg1 withActivationData:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)requestUpdateOfObjectWithUniqueIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)fetchContentForUniqueID:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)fetchImageSetForUniqueID:(id)arg1 ofType:(long long)arg2 displayProfile:(id)arg3 withCompletion:(/*^block*/id)arg4 ;
-(BOOL)setShowInLockScreenEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setAutomaticUpdatesEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setNotificationServiceUpdatesEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)setAutomaticPresentationEnabled:(BOOL)arg1 forPass:(id)arg2 ;
-(BOOL)resetSettingsForPass:(id)arg1 ;
-(id)defaultPaymentPasses;
-(id)expressFelicaTransitPasses;
-(id)_remoteLibrary;
-(BOOL)migrateData;
-(void)removePassesOfType:(unsigned long long)arg1 ;
-(void)noteAccountChanged;
-(void)noteAccountDeleted;
-(/*^block*/id)_errorHandlerWithSemaphore:(id)arg1 ;
-(id)passWithUniqueID:(id)arg1 ;
-(void)requestPersonalizationOfPassWithUniqueIdentifier:(id)arg1 contact:(id)arg2 personalizationToken:(id)arg3 requiredPersonalizationFields:(unsigned long long)arg4 personalizationSource:(unsigned long long)arg5 handler:(/*^block*/id)arg6 ;
-(void)notifyPassUsed:(id)arg1 fromSource:(long long)arg2 ;
-(id)diffForPassUpdateUserNotificationWithIdentifier:(id)arg1 ;
-(void)getPassUniqueIdentifiersForFieldProperties:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)passesPendingActivation;
-(void)getContainmentStatusAndSettingsForPass:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(void)addPasses:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)openPaymentSetup;
-(id)_remoteObjectProxy;
-(BOOL)canAddPassOfType:(unsigned long long)arg1 ;
-(BOOL)isPassbookVisible;
-(void)getPassesWithUniqueIdentifiers:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)enabledValueAddedServicePassesWithCompletion:(/*^block*/id)arg1 ;
-(void)removePass:(id)arg1 ;
@end

