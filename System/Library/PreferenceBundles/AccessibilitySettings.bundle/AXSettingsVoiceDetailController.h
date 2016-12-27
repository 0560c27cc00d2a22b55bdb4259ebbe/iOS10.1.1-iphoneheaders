/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettings/AXSettingsVoiceDownloadBaseController.h>
#import <AccessibilitySettings/AXSettingsVoiceAssetManagerDelegate.h>

@class NSString, AXLangMap;

@interface AXSettingsVoiceDetailController : AXSettingsVoiceDownloadBaseController <AXSettingsVoiceAssetManagerDelegate> {

	BOOL _showSpeakingRate;
	float _speakingRate;
	/*^block*/id _setSpeakingRateCallback;
	/*^block*/id _getSpeakingRateCallback;
	BOOL _receivedCompactAnswer;
	long long _storageSize;
	BOOL _isDownloading;
	BOOL _wantsDownload;
	BOOL _wantsDelete;
	BOOL _receivedIsDownloading;
	NSString* _languageBeingDownloaded;
	BOOL _showDialectPicker;
	BOOL _showDialectInTitle;
	BOOL _hideLanguageInDialect;
	NSString* _language;
	AXLangMap* _languageMap;

}

@property (nonatomic,retain) AXLangMap * languageMap;                 //@synthesize languageMap=_languageMap - In the implementation block
@property (nonatomic,retain) NSString * language;                     //@synthesize language=_language - In the implementation block
@property (assign,nonatomic) BOOL showSpeakingRate; 
@property (assign,nonatomic) float speakingRate;                      //@synthesize speakingRate=_speakingRate - In the implementation block
@property (assign,nonatomic) BOOL showDialectPicker;                  //@synthesize showDialectPicker=_showDialectPicker - In the implementation block
@property (assign,nonatomic) BOOL showDialectInTitle;                 //@synthesize showDialectInTitle=_showDialectInTitle - In the implementation block
@property (assign,nonatomic) BOOL hideLanguageInDialect;              //@synthesize hideLanguageInDialect=_hideLanguageInDialect - In the implementation block
@property (nonatomic,copy) id setSpeakingRateCallback;                //@synthesize setSpeakingRateCallback=_setSpeakingRateCallback - In the implementation block
@property (nonatomic,copy) id getSpeakingRateCallback;                //@synthesize getSpeakingRateCallback=_getSpeakingRateCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_updateSpeakingRate;
-(BOOL)showDialectPicker;
-(void)_setSpeakingRate:(id)arg1 specifier:(id)arg2 ;
-(void)setShowSpeakingRate:(BOOL)arg1 ;
-(void)updateAssetInformation;
-(void)_voiceServicesAssetStateChanged;
-(id)_getSelectedVariation:(id)arg1 ;
-(id)getSpeakingRateCallback;
-(BOOL)showDialectInTitle;
-(void)setShowDialectInTitle:(BOOL)arg1 ;
-(void)setHideLanguageInDialect:(BOOL)arg1 ;
-(void)setSetSpeakingRateCallback:(id)arg1 ;
-(void)setGetSpeakingRateCallback:(id)arg1 ;
-(void)setShowDialectPicker:(BOOL)arg1 ;
-(void)setSpeakingRateCallbackBlock:(/*^block*/id)arg1 ;
-(void)setLanguageMap:(AXLangMap *)arg1 ;
-(BOOL)hideLanguageInDialect;
-(void)addVoiceFootprintsToSpecs:(id)arg1 dialect:(id)arg2 groupSpec:(id)arg3 ;
-(id)_speakingRate:(id)arg1 ;
-(id)setSpeakingRateCallback;
-(BOOL)showSpeakingRate;
-(AXLangMap *)languageMap;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(float)speakingRate;
-(void)setSpeakingRate:(float)arg1 ;
-(id)specifiers;
@end

