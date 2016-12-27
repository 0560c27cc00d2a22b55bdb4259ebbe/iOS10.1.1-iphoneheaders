/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UITextField, PSListController;

@interface SafeDomainsPane : PSListController {

	UITextField* _textField;
	PSListController* _parentListController;

}

@property (assign,nonatomic) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(void)_setDomainsList:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_domainsListWithSpecifier:(id)arg1 ;
-(id)specifiers;
@end
