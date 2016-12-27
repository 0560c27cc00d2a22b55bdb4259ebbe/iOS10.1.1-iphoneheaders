/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccessUI/DASettingsDataclassConfigurationViewController.h>
#import <libobjc.A.dylib/DAOofResponseDelegate.h>

@class UIView, PSSpecifier, NSMutableArray, DAOofSettingsInfo, DAOofParams, DAEASOAuthWebViewController;

@interface ASSettingsDataclassConfigurationViewController : DASettingsDataclassConfigurationViewController <DAOofResponseDelegate> {

	BOOL _outOfOfficeEnabled;
	UIView* _originalAccessoryView;
	PSSpecifier* _outOfOfficeSpecifier;
	NSMutableArray* _reauthSpecifiers;
	DAOofSettingsInfo* _DASettingsInfo;
	DAOofParams* _serverOutOfOfficeInformation;
	unsigned long long _numberOfRetriedFetchingOutOfOfficeCounter;
	DAEASOAuthWebViewController* _webAuthController;
	/*^block*/id _completion;

}

@property (nonatomic,retain) UIView * originalAccessoryView;                                            //@synthesize originalAccessoryView=_originalAccessoryView - In the implementation block
@property (nonatomic,retain) PSSpecifier * outOfOfficeSpecifier;                                        //@synthesize outOfOfficeSpecifier=_outOfOfficeSpecifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * reauthSpecifiers;                                         //@synthesize reauthSpecifiers=_reauthSpecifiers - In the implementation block
@property (nonatomic,retain) DAOofSettingsInfo * DASettingsInfo;                                        //@synthesize DASettingsInfo=_DASettingsInfo - In the implementation block
@property (nonatomic,retain) DAOofParams * serverOutOfOfficeInformation;                                //@synthesize serverOutOfOfficeInformation=_serverOutOfOfficeInformation - In the implementation block
@property (assign,nonatomic) BOOL outOfOfficeEnabled;                                                   //@synthesize outOfOfficeEnabled=_outOfOfficeEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRetriedFetchingOutOfOfficeCounter;              //@synthesize numberOfRetriedFetchingOutOfOfficeCounter=_numberOfRetriedFetchingOutOfOfficeCounter - In the implementation block
@property (nonatomic,retain) DAEASOAuthWebViewController * webAuthController;                           //@synthesize webAuthController=_webAuthController - In the implementation block
@property (nonatomic,copy) id completion;                                                               //@synthesize completion=_completion - In the implementation block
+(BOOL)isHotmailAccount;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(void)handleURL:(id)arg1 ;
-(id)otherSpecifiers;
-(Class)accountInfoControllerClass;
-(void)dataclassSwitchStateDidChange:(id)arg1 withSpecifier:(id)arg2 ;
-(UIView *)originalAccessoryView;
-(void)setOriginalAccessoryView:(UIView *)arg1 ;
-(DAEASOAuthWebViewController *)webAuthController;
-(void)setWebAuthController:(DAEASOAuthWebViewController *)arg1 ;
-(id)_reAuthenticationSectionSpecifiers;
-(void)_reAuthenticationButtonTapped;
-(void)reloadAccount;
-(void)setAccountIntegerProperty:(id)arg1 withSpecifier:(id)arg2 ;
-(id)accountIntegerPropertyWithSpecifier:(id)arg1 ;
-(void)fetchingOutOfOfficeState;
-(void)saveOutOfOfficeData:(id)arg1 ;
-(id)outOfOfficeEnabled:(id)arg1 ;
-(void)setOutOfOfficeSpecifier:(PSSpecifier *)arg1 ;
-(PSSpecifier *)outOfOfficeSpecifier;
-(void)_purgeDownloadedMailForAccount;
-(DAOofParams *)serverOutOfOfficeInformation;
-(void)setOutOfOfficeEnabled:(BOOL)arg1 ;
-(unsigned long long)numberOfRetriedFetchingOutOfOfficeCounter;
-(void)setNumberOfRetriedFetchingOutOfOfficeCounter:(unsigned long long)arg1 ;
-(void)setServerOutOfOfficeInformation:(DAOofParams *)arg1 ;
-(void)updateOutOfOfficeSpecifier;
-(void)setDASettingsInfo:(DAOofSettingsInfo *)arg1 ;
-(DAOofSettingsInfo *)DASettingsInfo;
-(BOOL)outOfOfficeEnabled;
-(void)oofRequestInfo:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3 ;
-(id)accountDescriptionForFirstTimeSetup;
-(id)numFoldersToPushString:(id)arg1 ;
-(NSMutableArray *)reauthSpecifiers;
-(void)setReauthSpecifiers:(NSMutableArray *)arg1 ;
-(id)specifiers;
@end

