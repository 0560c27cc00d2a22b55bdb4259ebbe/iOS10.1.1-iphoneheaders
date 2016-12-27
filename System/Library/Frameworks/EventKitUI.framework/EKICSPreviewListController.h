/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol EKICSPreviewListDelegate;
@class EKICSPreviewModel, NSMutableArray;

@interface EKICSPreviewListController : UITableViewController {

	EKICSPreviewModel* _model;
	NSMutableArray* _sections;
	BOOL _allowsImport;
	BOOL _allowsSubitems;
	BOOL _showWeekNumbers;
	id<EKICSPreviewListDelegate> _listDelegate;

}

@property (assign,nonatomic) BOOL showWeekNumbers;                                          //@synthesize showWeekNumbers=_showWeekNumbers - In the implementation block
@property (assign,nonatomic) BOOL allowsImport;                                             //@synthesize allowsImport=_allowsImport - In the implementation block
@property (assign,nonatomic) BOOL allowsSubitems;                                           //@synthesize allowsSubitems=_allowsSubitems - In the implementation block
@property (assign,nonatomic,__weak) id<EKICSPreviewListDelegate> listDelegate;              //@synthesize listDelegate=_listDelegate - In the implementation block
-(void)dealloc;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)viewDidLoad;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setAllowsSubitems:(BOOL)arg1 ;
-(void)_showWeekNumbersPreferenceChanged:(id)arg1 ;
-(void)buildSections;
-(void)updateImportButton;
-(void)importAllPressed:(id)arg1 ;
-(BOOL)showWeekNumbers;
-(void)setShowWeekNumbers:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)allowsImport;
-(void)setAllowsImport:(BOOL)arg1 ;
-(BOOL)allowsSubitems;
-(id<EKICSPreviewListDelegate>)listDelegate;
-(void)setListDelegate:(id<EKICSPreviewListDelegate>)arg1 ;
@end

