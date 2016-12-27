/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PreferencesUI/PreferencesUI-Structs.h>
#import <PreferencesUI/PSUIPasscodeLockController.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <libobjc.A.dylib/BiometricKitUIEnrollResultDelegate.h>
#import <libobjc.A.dylib/BiometricKitDelegate.h>

@protocol OS_dispatch_queue;
@class BiometricKit, NSObject, PSEnrollContainerViewController, UIPopoverController, NSString;

@interface PSUITouchIDPasscodeController : PSUIPasscodeLockController <UIPopoverControllerDelegate, BiometricKitUIEnrollResultDelegate, BiometricKitDelegate> {

	BOOL _currentlyEnablingTouchIDForPurchases;
	long long _storeState;
	BiometricKit* _highlightMatcher;
	NSObject*<OS_dispatch_queue> _highlightQueue;
	PSEnrollContainerViewController* _enrollController;
	/*^block*/id _modalFlowSuccessCompletion;
	/*^block*/id _modalFlowCancelCompletion;
	UIPopoverController* _enrollmentPopoverController;

}

@property (assign,nonatomic) long long storeState;                                                   //@synthesize storeState=_storeState - In the implementation block
@property (nonatomic,retain) BiometricKit * highlightMatcher;                                        //@synthesize highlightMatcher=_highlightMatcher - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> highlightQueue;                            //@synthesize highlightQueue=_highlightQueue - In the implementation block
@property (assign,nonatomic,__weak) PSEnrollContainerViewController * enrollController;              //@synthesize enrollController=_enrollController - In the implementation block
@property (nonatomic,copy) id modalFlowSuccessCompletion;                                            //@synthesize modalFlowSuccessCompletion=_modalFlowSuccessCompletion - In the implementation block
@property (nonatomic,copy) id modalFlowCancelCompletion;                                             //@synthesize modalFlowCancelCompletion=_modalFlowCancelCompletion - In the implementation block
@property (assign,nonatomic) BOOL currentlyEnablingTouchIDForPurchases;                              //@synthesize currentlyEnablingTouchIDForPurchases=_currentlyEnablingTouchIDForPurchases - In the implementation block
@property (nonatomic,retain) UIPopoverController * enrollmentPopoverController;                      //@synthesize enrollmentPopoverController=_enrollmentPopoverController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_shouldPresentEnrollmentInPopover;
-(id)init;
-(void)dealloc;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)popoverControllerShouldDismissPopover:(id)arg1 ;
-(void)didUnlock;
-(void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2 ;
-(void)didCancelEnteringPIN;
-(PSEnrollContainerViewController *)enrollController;
-(void)setEnrollController:(PSEnrollContainerViewController *)arg1 ;
-(void)backgrounded:(id)arg1 ;
-(void)setupTouchIDLogoHeader;
-(void)setHighlightQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)touchIDSwitchSpecifiers;
-(id)fingerprintSpecifiers;
-(void)setModalFlowSuccessCompletion:(id)arg1 ;
-(void)addEnrollment:(id)arg1 ;
-(void)presentPasscodePaneFromSpecifier:(id)arg1 ;
-(BOOL)hasPasscodeAndFingerprints;
-(UIPopoverController *)enrollmentPopoverController;
-(void)addEnrollmentOrCreatePasscodeIfNecessaryWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)shouldRestrictFeaturesRequiringEnrollment;
-(BOOL)isTouchIDUnlockRestricted;
-(void)setStoreState:(long long)arg1 ;
-(BOOL)currentlyEnablingTouchIDForPurchases;
-(long long)storeState;
-(void)setCurrentlyEnablingTouchIDForPurchases:(BOOL)arg1 ;
-(id)_authorizationToken;
-(void)updateStoreBiometricsState;
-(BOOL)isTouchIDForPurchasesRestricted;
-(BOOL)isTouchIDForStockholmRestricted;
-(BOOL)isFingerprintEditingAllowed;
-(BOOL)isEnrollmentAvailable;
-(void)setTouchIDUnlockEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDUnlockEnabled:(id)arg1 ;
-(void)setTouchIDForPurchasesEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForPurchasesEnabled:(id)arg1 ;
-(void)setTouchIDForStockholmEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isTouchIDForStockholmEnabled:(id)arg1 ;
-(id)_fingerprintSpecifierForIdentity:(id)arg1 ;
-(BiometricKit *)highlightMatcher;
-(void)setHighlightMatcher:(BiometricKit *)arg1 ;
-(void)_setupMatching;
-(void)_cancelMatching;
-(void)cancelModalFlow;
-(void)highlightFingerprintSpecifier:(id)arg1 ;
-(void)unhighlightFingerprintSpecifiersAfterDelay:(double)arg1 ;
-(NSObject*<OS_dispatch_queue>)highlightQueue;
-(void)setEnrollmentPopoverController:(UIPopoverController *)arg1 ;
-(void)_presentPopoverForContentViewController:(id)arg1 ;
-(id)_passcodeControllerForSpecifier:(id)arg1 ;
-(void)enrollmentCompletedForIdentity:(id)arg1 ;
-(void)setModalFlowCancelCompletion:(id)arg1 ;
-(void)completeModalFlow;
-(void)pushPasscodePane;
-(void)hideCancelButton;
-(id)modalFlowSuccessCompletion;
-(void)_popEnrollmentController;
-(id)modalFlowCancelCompletion;
-(id)_fingerprintSpecifierAtIndexPath:(id)arg1 ;
-(void)updateAfterFingerprintChanges;
-(void)updateTouchIDUnlockSpecifier;
-(void)updateTouchIDForPurchasesSpecifier;
-(void)updateTouchIDForStockholmSpecifier;
-(void)updateAddFingerprintSpecifier;
-(void)enrollResult:(int)arg1 identity:(id)arg2 ;
-(void)matchResult:(id)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
-(id)specifiers;
@end

