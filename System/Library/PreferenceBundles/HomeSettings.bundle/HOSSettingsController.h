/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/HomeSettings.bundle/HomeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class HOSHomeViewController, HMHomeManager, NSString;

@interface HOSSettingsController : PSListController <HFHomeManagerObserver, HFHomeObserver> {

	HOSHomeViewController* _detailController;

}

@property (nonatomic,readonly) HMHomeManager * homeManager; 
@property (assign,nonatomic,__weak) HOSHomeViewController * detailController;              //@synthesize detailController=_detailController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_sortByNameDescriptor;
-(id)_sortedHomesPassingTest:(/*^block*/id)arg1 ;
-(id)_sortedSharedHomes;
-(id)createGroupSpecifierForHomeHub;
-(id)createSpecifierForHomeHub;
-(id)createGroupSpecifierForMyHomes;
-(id)createSpecifierForHome:(id)arg1 ;
-(void)setHomeHubEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)updateHomesSections;
-(id)specifierForHome:(id)arg1 ;
-(BOOL)_showSharedHomesGroup;
-(id)createGroupSpecifierForSharedHomes;
-(id)_sortedMyHomes;
-(id)localizedKBURL;
-(id)homeHubEnabled:(id)arg1 ;
-(BOOL)_showMyHomesGroup;
-(void)deleteHome:(id)arg1 ;
-(id)createHomeHubSpecifiers;
-(long long)specifierIndexForHome:(id)arg1 ;
-(id)createSharedHomesSpecifiers;
-(BOOL)_showNoHomesGroup;
-(id)createGroupSpecifierForNoHomes;
-(id)createMyHomesSpecifiers;
-(id)init;
-(void)dealloc;
-(id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)showController:(id)arg1 animate:(BOOL)arg2 ;
-(void)setDetailController:(HOSHomeViewController *)arg1 ;
-(HOSHomeViewController *)detailController;
-(HMHomeManager *)homeManager;
-(void)homeDidUpdateName:(id)arg1 ;
-(void)home:(id)arg1 didAddUser:(id)arg2 ;
-(void)home:(id)arg1 didRemoveUser:(id)arg2 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(id)specifiers;
@end

