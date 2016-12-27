/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:08:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /Applications/Cydia.app/Cydia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Cydia/FilteredPackageListController.h>

@interface ChangesController : FilteredPackageListController {

	unsigned upgrades_;

}
-(id)navigationURL;
-(id)packageAtIndexPath:(id)arg1 ;
-(BOOL)shouldYield;
-(BOOL)shouldBlock;
-(id)sectionsForPackages:(id)arg1 ;
-(void)refreshButtonClicked;
-(void)setLeftBarButtonItem;
-(void)useFilter;
-(void)upgradeButtonClicked;
-(void)reloadData;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidLoad;
-(void)cancelButtonClicked;
-(id)referrerURL;
-(id)initWithDatabase:(id)arg1 ;
@end

