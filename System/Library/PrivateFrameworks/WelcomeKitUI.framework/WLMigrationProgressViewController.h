/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitUI.framework/WelcomeKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WelcomeKitUI/WLWelcomeGroupViewController.h>
#import <libobjc.A.dylib/WLDeviceAuthenticationDelegate.h>
#import <libobjc.A.dylib/WLDataMigrationDelegate.h>

@protocol OS_dispatch_queue;
@class UILabel, UIActivityIndicatorView, UIProgressView, NSArray, WLSourceDevice, WLDeviceAuthenticationController, NSObject, WLDataMigrationController, NSString;

@interface WLMigrationProgressViewController : WLWelcomeGroupViewController <WLDeviceAuthenticationDelegate, WLDataMigrationDelegate> {

	UILabel* _stateView;
	UIActivityIndicatorView* _spinner;
	UILabel* _deviceNameView;
	UIProgressView* _progressView;
	UILabel* _explanationView;
	NSArray* _stateViewConstraintsForWithSpinner;
	NSArray* _stateViewConstraintsForNoSpinner;
	WLSourceDevice* _sourceDevice;
	WLDeviceAuthenticationController* _authController;
	NSObject*<OS_dispatch_queue> _authDelegateSerialQueue;
	BOOL _authDidSucceed;
	unsigned long long _migrationState;
	WLDataMigrationController* _migrationController;
	BOOL _migrationControllerIsRestartable;
	BOOL _migrationConcluded;
	NSString* _progressString;
	/*^block*/id _completionHandler;
	/*^block*/id _migrationDidBeginHandler;
	/*^block*/id _authenticationDidSucceedHandler;

}

@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id migrationDidBeginHandler;                     //@synthesize migrationDidBeginHandler=_migrationDidBeginHandler - In the implementation block
@property (nonatomic,copy) id authenticationDidSucceedHandler;              //@synthesize authenticationDidSucceedHandler=_authenticationDidSucceedHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)authenticator:(id)arg1 didFinishWithAuthentication:(id)arg2 ;
-(void)authenticator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateMigrationState:(unsigned long long)arg2 ;
-(void)dataMigratorDidBecomeRestartable:(id)arg1 ;
-(void)dataMigratorDidFinish:(id)arg1 withImportErrors:(BOOL)arg2 ;
-(void)dataMigrator:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateProgressPercentage:(float)arg2 ;
-(void)dataMigrator:(id)arg1 didUpdateProgressString:(id)arg2 ;
-(void)_startAuthentication;
-(void)_updateProgressViewsWithOneLineStateKey:(id)arg1 twoLineStateKey:(id)arg2 showDeviceName:(BOOL)arg3 showSpinner:(BOOL)arg4 explanationText:(id)arg5 ;
-(void)_uiTestModeStartFakeAuthentication;
-(void)_startMigrationWithAuthentication:(id)arg1 ;
-(void)_callClientCompletionWithSuccess:(BOOL)arg1 ;
-(void)_uiTestModeStartFakeMigration;
-(void)_didCompleteMigrationWithSuccess:(BOOL)arg1 ;
-(void)dataMigratorDidGetInterrupted;
-(id)initWithSourceDevice:(id)arg1 metrics:(id)arg2 ;
-(id)migrationDidBeginHandler;
-(void)setMigrationDidBeginHandler:(id)arg1 ;
-(id)authenticationDidSucceedHandler;
-(void)setAuthenticationDidSucceedHandler:(id)arg1 ;
@end

