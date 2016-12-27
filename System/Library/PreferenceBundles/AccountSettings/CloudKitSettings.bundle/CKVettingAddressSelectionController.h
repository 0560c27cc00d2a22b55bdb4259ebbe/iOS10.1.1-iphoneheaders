/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/CloudKitSettings.bundle/CloudKitSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, NSURL, NSString, CKContainer, CKShareMetadata, UIButton, UIBarButtonItem, NSIndexPath;

@interface CKVettingAddressSelectionController : UITableViewController {

	NSArray* _tripples;
	NSURL* _shareURL;
	NSString* _sharedItem;
	CKContainer* _clouddContainer;
	CKShareMetadata* _shareMetadata;
	CKContainer* _metadataIndicatedContainer;
	UIButton* _sendEmailButton;
	UIBarButtonItem* _sendEmailBarButton;
	NSIndexPath* _selectedRowPath;

}

@property (nonatomic,retain) NSArray * tripples;                                    //@synthesize tripples=_tripples - In the implementation block
@property (nonatomic,retain) NSURL * shareURL;                                      //@synthesize shareURL=_shareURL - In the implementation block
@property (nonatomic,retain) NSString * sharedItem;                                 //@synthesize sharedItem=_sharedItem - In the implementation block
@property (nonatomic,retain) CKContainer * clouddContainer;                         //@synthesize clouddContainer=_clouddContainer - In the implementation block
@property (nonatomic,retain) CKShareMetadata * shareMetadata;                       //@synthesize shareMetadata=_shareMetadata - In the implementation block
@property (nonatomic,retain) CKContainer * metadataIndicatedContainer;              //@synthesize metadataIndicatedContainer=_metadataIndicatedContainer - In the implementation block
@property (nonatomic,retain) UIButton * sendEmailButton;                            //@synthesize sendEmailButton=_sendEmailButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * sendEmailBarButton;                  //@synthesize sendEmailBarButton=_sendEmailBarButton - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedRowPath;                         //@synthesize selectedRowPath=_selectedRowPath - In the implementation block
-(id)initWithParticipants:(id)arg1 sharedItem:(id)arg2 shareURL:(id)arg3 ;
-(void)_showInitiateFailureAlert:(id)arg1 shareTitle:(id)arg2 cell:(id)arg3 ;
-(void)_initiateVettingForParticipantID:(id)arg1 address:(id)arg2 andThen:(/*^block*/id)arg3 ;
-(void)fetchShareMetadata:(id)arg1 andThen:(/*^block*/id)arg2 ;
-(id)_labelWithText:(id)arg1 maxWidth:(double)arg2 ;
-(id)_buttonWithText:(id)arg1 maxWidth:(double)arg2 ;
-(UIBarButtonItem *)sendEmailBarButton;
-(UIButton *)sendEmailButton;
-(void)setSelectedRowPath:(NSIndexPath *)arg1 ;
-(void)_setupSectionHeader:(id)arg1 ;
-(void)_setupSectionFooter:(id)arg1 ;
-(void)handleSendEmail;
-(void)setClouddContainer:(CKContainer *)arg1 ;
-(void)setTripples:(NSArray *)arg1 ;
-(void)setSendEmailBarButton:(UIBarButtonItem *)arg1 ;
-(CKContainer *)clouddContainer;
-(void)setSharedItem:(NSString *)arg1 ;
-(NSArray *)tripples;
-(NSIndexPath *)selectedRowPath;
-(void)_setupBarButtons;
-(void)handleSelectedCell:(id)arg1 ;
-(void)setSendEmailButton:(UIButton *)arg1 ;
-(CKContainer *)metadataIndicatedContainer;
-(NSString *)sharedItem;
-(void)setMetadataIndicatedContainer:(CKContainer *)arg1 ;
-(id)init;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(CKShareMetadata *)shareMetadata;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setParameters:(id)arg1 ;
-(void)setShareURL:(NSURL *)arg1 ;
-(NSURL *)shareURL;
-(id)initWithParameters:(id)arg1 ;
-(void)handleCancel;
-(void)setShareMetadata:(CKShareMetadata *)arg1 ;
@end

