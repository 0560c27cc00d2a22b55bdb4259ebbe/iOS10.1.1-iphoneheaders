/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, NSMutableDictionary;

@interface DebugPrefsViewController : UITableViewController {

	NSArray* _sections;
	NSMutableDictionary* _extraObjects;

}

@property (nonatomic,retain) NSMutableDictionary * extraObjects;              //@synthesize extraObjects=_extraObjects - In the implementation block
@property (nonatomic,retain) NSArray * sections;                              //@synthesize sections=_sections - In the implementation block
+(BOOL)hasDebugPrefs;
+(BOOL)isDebugPrefs:(id)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)switchChanged:(id)arg1 ;
-(void)setSections:(NSArray *)arg1 ;
-(NSArray *)sections;
-(void)presentOverViewController:(id)arg1 ;
-(void)debugPrefsStop:(id)arg1 ;
-(NSMutableDictionary *)extraObjects;
-(void)restoreDefaultsInSections:(id)arg1 ;
-(void)restoreDefaults:(id)arg1 ;
-(void)loadDebugMenu;
-(void)setExtraObjects:(NSMutableDictionary *)arg1 ;
-(void)addAccessory:(id)arg1 forMenuItem:(id)arg2 ;
@end

