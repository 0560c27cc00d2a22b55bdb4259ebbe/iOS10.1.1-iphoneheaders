/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/AppleAccountSettings.bundle/AppleAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountSettings/ACUIViewControllerAccountChangeObserver.h>

@class ACAccountStore, PSViewController, NSString;

@interface AAUINavigationFlowController : NSObject <ACUIViewControllerAccountChangeObserver> {

	ACAccountStore* _accountStore;
	PSViewController* _activeViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)_pushViewController:(id)arg1 replacingOldViewController:(id)arg2 ;
-(void)_popViewController:(id)arg1 replaceWithNewViewController:(id)arg2 ;
-(void)_updateParentSpecifier:(id)arg1 toPointToViewController:(id)arg2 ;
-(id)init;
-(void)viewController:(id)arg1 didFinishRemovingAccountWithSuccess:(BOOL)arg2 ;
-(void)viewController:(id)arg1 didFinishSavingAccountWithSuccess:(BOOL)arg2 ;
@end

