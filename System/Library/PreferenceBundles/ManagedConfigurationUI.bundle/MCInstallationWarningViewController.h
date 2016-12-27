/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <libobjc.A.dylib/PSStateRestoration.h>

@protocol MCInstallationWarningDelegate;
@class NSArray, NSString;

@interface MCInstallationWarningViewController : UITableViewController <PSStateRestoration> {

	BOOL _isMDMInstall;
	NSArray* _warnings;
	id<MCInstallationWarningDelegate> _warningDelegate;

}

@property (assign,nonatomic) BOOL isMDMInstall;                                                     //@synthesize isMDMInstall=_isMDMInstall - In the implementation block
@property (nonatomic,retain) NSArray * warnings;                                                    //@synthesize warnings=_warnings - In the implementation block
@property (assign,nonatomic,__weak) id<MCInstallationWarningDelegate> warningDelegate;              //@synthesize warningDelegate=_warningDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(id)initWithStyle:(long long)arg1 ;
-(void)_setup;
-(void)_installProfile;
-(void)setIsMDMInstall:(BOOL)arg1 ;
-(void)setWarnings:(NSArray *)arg1 ;
-(void)setWarningDelegate:(id<MCInstallationWarningDelegate>)arg1 ;
-(void)_cancelInstallProfile;
-(void)_confirmInstallProfileIfNeeded;
-(id<MCInstallationWarningDelegate>)warningDelegate;
-(BOOL)isMDMInstall;
-(NSArray *)warnings;
-(BOOL)canBeShownFromSuspendedState;
@end

