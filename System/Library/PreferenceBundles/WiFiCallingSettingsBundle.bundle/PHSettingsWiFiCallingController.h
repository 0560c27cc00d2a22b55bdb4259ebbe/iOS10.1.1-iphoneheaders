/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/WiFiCallingSettingsBundle.bundle/WiFiCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrimaryCloudCallingSettingsBundle/PHSettingsCloudCallingListController.h>

@class NSArray, PHSettingsWiFiCallingEmergencyAddressController, PHSettingsThumperProvisioningController;

@interface PHSettingsWiFiCallingController : PHSettingsCloudCallingListController {

	NSArray* _buttonSpecifiers;
	PHSettingsWiFiCallingEmergencyAddressController* _emergencyAddressController;
	PHSettingsThumperProvisioningController* _thumperProvisioningController;

}

@property (nonatomic,retain) NSArray * buttonSpecifiers;                                                                //@synthesize buttonSpecifiers=_buttonSpecifiers - In the implementation block
@property (nonatomic,retain) PHSettingsWiFiCallingEmergencyAddressController * emergencyAddressController;              //@synthesize emergencyAddressController=_emergencyAddressController - In the implementation block
@property (nonatomic,retain) PHSettingsThumperProvisioningController * thumperProvisioningController;                   //@synthesize thumperProvisioningController=_thumperProvisioningController - In the implementation block
+(BOOL)shouldShowWiFiCallingSwitchAsEnabled;
-(void)changeEmergencyAddress:(id)arg1 ;
-(void)setThumperProvisioningController:(PHSettingsThumperProvisioningController *)arg1 ;
-(PHSettingsWiFiCallingEmergencyAddressController *)emergencyAddressController;
-(void)wifiProvisioningURLChanged:(id)arg1 ;
-(id)upgradeToThumperForOtherDevicesButton;
-(void)capabilityChanged:(id)arg1 ;
-(PHSettingsThumperProvisioningController *)thumperProvisioningController;
-(void)addWifiCallingForOtherDevices:(id)arg1 ;
-(id)bundleDescriptor;
-(void)setWiFiRoamingEnabled:(id)arg1 specifier:(id)arg2 ;
-(void)setWiFiCallsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)getWiFiRoamingEnabled:(id)arg1 ;
-(void)setButtonSpecifiers:(NSArray *)arg1 ;
-(NSArray *)buttonSpecifiers;
-(id)getWiFiCallsEnabled:(id)arg1 ;
-(void)setEmergencyAddressController:(PHSettingsWiFiCallingEmergencyAddressController *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)title;
-(void)applicationDidResume;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)specifiers;
@end
