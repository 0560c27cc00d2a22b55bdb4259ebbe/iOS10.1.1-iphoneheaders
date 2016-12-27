/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@class MCUIProfile, NSArray, NSString;

@interface MCProfileDetailsViewController : UITableViewController <PSStateRestoration> {

	BOOL _showTitleIfOnlyOneSection;
	BOOL _viewControllerCanPop;
	int _mode;
	MCUIProfile* _UIProfile;
	NSArray* _sections;

}

@property (nonatomic,retain) MCUIProfile * UIProfile;                     //@synthesize UIProfile=_UIProfile - In the implementation block
@property (assign,nonatomic) BOOL showTitleIfOnlyOneSection;              //@synthesize showTitleIfOnlyOneSection=_showTitleIfOnlyOneSection - In the implementation block
@property (assign,nonatomic) BOOL viewControllerCanPop;                   //@synthesize viewControllerCanPop=_viewControllerCanPop - In the implementation block
@property (nonatomic,retain) NSArray * sections;                          //@synthesize sections=_sections - In the implementation block
@property (assign,nonatomic) int mode;                                    //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)setMode:(int)arg1 ;
-(int)mode;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)_setup;
-(void)_profileChanged:(id)arg1 ;
-(MCUIProfile *)UIProfile;
-(void)setUIProfile:(MCUIProfile *)arg1 ;
-(void)setUIProfile:(id)arg1 mode:(int)arg2 ;
-(void)setViewControllerCanPop:(BOOL)arg1 ;
-(void)setProfileDetailsMode:(int)arg1 ;
-(void)reloadSectionArray;
-(BOOL)viewControllerCanPop;
-(BOOL)showTitleIfOnlyOneSection;
-(void)setShowTitleIfOnlyOneSection:(BOOL)arg1 ;
-(BOOL)canBeShownFromSuspendedState;
-(void)contentSizeCategoryDidChangeNotification:(id)arg1 ;
@end

