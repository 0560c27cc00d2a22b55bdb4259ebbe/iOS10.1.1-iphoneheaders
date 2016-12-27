/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@protocol AXVoiceAssetDownloadInformationDelegate;
@class SKUIItemOfferButton, UILabel;

@interface AXSettingsVoiceNameTableViewCell : PSTableCell {

	SKUIItemOfferButton* _downloadButton;
	UILabel* _infoLabel;
	BOOL _showsInfoLabel;
	BOOL _showsPlayButton;
	BOOL _indentsForSelection;
	id<AXVoiceAssetDownloadInformationDelegate> _infoDelegate;

}

@property (assign,nonatomic) BOOL showsInfoLabel;                                                   //@synthesize showsInfoLabel=_showsInfoLabel - In the implementation block
@property (assign,nonatomic) BOOL showsPlayButton;                                                  //@synthesize showsPlayButton=_showsPlayButton - In the implementation block
@property (assign,nonatomic) BOOL indentsForSelection;                                              //@synthesize indentsForSelection=_indentsForSelection - In the implementation block
@property (assign,nonatomic) id<AXVoiceAssetDownloadInformationDelegate> infoDelegate;              //@synthesize infoDelegate=_infoDelegate - In the implementation block
-(BOOL)_axDownload:(id)arg1 ;
-(id)voices;
-(BOOL)showsPlayButton;
-(BOOL)showsInfoLabel;
-(void)setShowsPlayButton:(BOOL)arg1 ;
-(void)setIndentsForSelection:(BOOL)arg1 ;
-(void)setShowsInfoLabel:(BOOL)arg1 ;
-(void)_updateInfoLabelText;
-(BOOL)indentsForSelection;
-(void)layoutSubviews;
-(id)accessibilityValue;
-(unsigned long long)accessibilityTraits;
-(id)accessibilityCustomActions;
-(id<AXVoiceAssetDownloadInformationDelegate>)infoDelegate;
-(void)setInfoDelegate:(id<AXVoiceAssetDownloadInformationDelegate>)arg1 ;
-(void)updateInformation;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end
