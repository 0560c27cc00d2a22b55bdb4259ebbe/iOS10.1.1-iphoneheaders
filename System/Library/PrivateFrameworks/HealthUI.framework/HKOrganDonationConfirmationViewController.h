/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKTitledBuddyHeaderViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class HKOrganDonationConnectionManager, HKOrganDonationRegistrant, UIView, UIVisualEffectView, UIFont, NSString, UITableView, UIActivityIndicatorView, _HKMedicalIDData, NSArray, UIButton;

@interface HKOrganDonationConfirmationViewController : HKViewController <HKTitledBuddyHeaderViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	HKOrganDonationConnectionManager* _connectionManager;
	HKOrganDonationRegistrant* _registrant;
	UIView* _headerView;
	UIVisualEffectView* _footerView;
	UIFont* _bodyFont;
	NSString* _completionButtonTitle;
	/*^block*/id _registrationCompletionHandler;
	UITableView* _tableView;
	UIActivityIndicatorView* _loadingIndicator;
	_HKMedicalIDData* _medicalIDData;
	NSArray* _dataEntryItems;
	UIButton* _submitButton;

}

@property (nonatomic,retain) UITableView * tableView;                                 //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,retain) _HKMedicalIDData * medicalIDData;                        //@synthesize medicalIDData=_medicalIDData - In the implementation block
@property (nonatomic,retain) NSArray * dataEntryItems;                                //@synthesize dataEntryItems=_dataEntryItems - In the implementation block
@property (nonatomic,retain) UIButton * submitButton;                                 //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,retain) NSString * completionButtonTitle;                        //@synthesize completionButtonTitle=_completionButtonTitle - In the implementation block
@property (nonatomic,copy) id registrationCompletionHandler;                          //@synthesize registrationCompletionHandler=_registrationCompletionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(void)viewDidLoad;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(_HKMedicalIDData *)medicalIDData;
-(void)setMedicalIDData:(_HKMedicalIDData *)arg1 ;
-(id)_createTableHeaderView;
-(id)_createTableFooterView;
-(NSArray *)dataEntryItems;
-(NSString *)completionButtonTitle;
-(void)setCompletionButtonTitle:(NSString *)arg1 ;
-(void)setRegistrationCompletionHandler:(id)arg1 ;
-(id)initWithRegistrant:(id)arg1 medicalIDData:(id)arg2 connectionManager:(id)arg3 ;
-(id)registrationCompletionHandler;
-(void)setDataEntryItems:(NSArray *)arg1 ;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
-(void)submitButtonTapped:(id)arg1 ;
-(void)confirmSubmissionIfNecessaryWithConfirmHandler:(/*^block*/id)arg1 andCancelHandler:(/*^block*/id)arg2 ;
-(UIButton *)submitButton;
-(void)setSubmitButton:(UIButton *)arg1 ;
@end
