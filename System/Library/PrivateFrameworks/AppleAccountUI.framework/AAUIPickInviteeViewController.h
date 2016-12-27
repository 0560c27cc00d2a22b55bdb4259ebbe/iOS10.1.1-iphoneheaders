/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppleAccountUI/AppleAccountUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/AAUIContactsSearchDelegate.h>

@protocol AAUIPickInviteeDelegate;
@class ACAccount, ACAccountStore, AAUIContactsSearchController, NSArray, UIView, UITableView, NSString, UITextField, UILabel, UIButton, ABMonogrammer, UIBarButtonItem;

@interface AAUIPickInviteeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, AAUIContactsSearchDelegate> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAUIContactsSearchController* _contactsSearchController;
	NSArray* _searchResults;
	UIView* _separator;
	UITableView* _resultsTableView;
	NSString* _searchQuery;
	UIView* _container;
	UIView* _contactSearchBarContainer;
	UITextField* _contactSearchBar;
	UILabel* _toLabel;
	UILabel* _instructionsLabel;
	UILabel* _childAccountLabel;
	UIButton* _createChildAccountButton;
	ABMonogrammer* _monogrammer;
	UIBarButtonItem* _nextButton;
	void* _addressBook;
	id<AAUIPickInviteeDelegate> _delegate;
	NSString* _inviteeEmail;
	NSString* _inviteeShortName;
	NSString* _inviteeCompositeName;
	NSString* _createChildAccountButtonTitle;
	NSString* _createChildAccountInstructions;

}

@property (assign,nonatomic,__weak) id<AAUIPickInviteeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * inviteeEmail;                                //@synthesize inviteeEmail=_inviteeEmail - In the implementation block
@property (nonatomic,readonly) NSString * inviteeShortName;                            //@synthesize inviteeShortName=_inviteeShortName - In the implementation block
@property (nonatomic,readonly) NSString * inviteeCompositeName;                        //@synthesize inviteeCompositeName=_inviteeCompositeName - In the implementation block
@property (nonatomic,copy) NSString * createChildAccountButtonTitle;                   //@synthesize createChildAccountButtonTitle=_createChildAccountButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * createChildAccountInstructions;                  //@synthesize createChildAccountInstructions=_createChildAccountInstructions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<AAUIPickInviteeDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<AAUIPickInviteeDelegate>)delegate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)_cancelButtonWasTapped:(id)arg1 ;
-(void)textFieldValueDidChange:(id)arg1 ;
-(double)_heightForText:(id)arg1 width:(double)arg2 ;
-(void)contactsSearchController:(id)arg1 didFinishSearchWithSuccess:(BOOL)arg2 ;
-(void)contactsSearchController:(id)arg1 didFindSortedResult:(id)arg2 ;
-(void)_createChildAccountButtonWasTapped:(id)arg1 ;
-(void)_nextButtonWasTapped:(id)arg1 ;
-(void)_updateNextButtonEnabledState;
-(void)_hideSearchResults;
-(id)_attributedStringWithQueryHighlightedForString:(id)arg1 size:(double)arg2 ;
-(id)_imageForPersonWithRecordID:(int)arg1 ;
-(NSString *)inviteeEmail;
-(NSString *)inviteeShortName;
-(NSString *)inviteeCompositeName;
-(NSString *)createChildAccountButtonTitle;
-(void)setCreateChildAccountButtonTitle:(NSString *)arg1 ;
-(NSString *)createChildAccountInstructions;
-(void)setCreateChildAccountInstructions:(NSString *)arg1 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
@end

