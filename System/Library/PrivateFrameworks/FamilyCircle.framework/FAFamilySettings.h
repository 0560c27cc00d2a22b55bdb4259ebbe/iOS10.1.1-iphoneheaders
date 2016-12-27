/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>
#import <libobjc.A.dylib/AAUIFamilySetupPrompterDelegate.h>

@class AAUIFamilySetupPrompter, UIViewController, SSAccount, NSString;

@interface FAFamilySettings : FAFamilyCircleRequest <AAUIFamilySetupPrompterDelegate> {

	AAUIFamilySetupPrompter* _prompter;
	FAFamilySettings* _retainedSelf;
	BOOL _isFirstRun;
	UIViewController* _presentingViewController;
	SSAccount* _iTunesAccount;

}

@property (assign) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (retain) SSAccount * iTunesAccount;                                //@synthesize iTunesAccount=_iTunesAccount - In the implementation block
@property (assign) BOOL isFirstRun;                                          //@synthesize isFirstRun=_isFirstRun - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)setITunesAccount:(SSAccount *)arg1 ;
-(void)familySetupPrompterDidFinish:(id)arg1 ;
-(SSAccount *)iTunesAccount;
-(void)launchiCloudFamilySettings;
-(void)_launchPrefsUsingDaemon;
-(void)setIsFirstRun:(BOOL)arg1 ;
-(BOOL)isFirstRun;
@end

