/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/Applications/NanoClockBridgeSettings.bundle/NanoClockBridgeSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSpecifierDataSource.h>

@class NSMutableDictionary, NPSDomainAccessor, NPSManager;

@interface NCBSMainMenuDataSource : PSSpecifierDataSource {

	NSMutableDictionary* _sectionInfo;
	NPSDomainAccessor* _gizmoGlobalDomain;
	NPSManager* _syncManager;
	BOOL _localeForces24HourTime;

}
-(id)_getAlertsActive:(id)arg1 ;
-(id)_getTimeTravelEnabled:(id)arg1 ;
-(void)_writeSectionState;
-(void)_setAlertsActive:(id)arg1 withSpecifier:(id)arg2 ;
-(void)_loadSectionInfo;
-(void)_set24HourTime:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_is24HourTime:(id)arg1 ;
-(id)_getMonogram:(id)arg1 ;
-(void)_checkAndUpdateSettings;
-(void)_setNotificationsIndicatorActive:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_getNotificationsIndicatorActive:(id)arg1 ;
-(void)_setTimeTravelEnabled:(id)arg1 withSpecifier:(id)arg2 ;
-(void)handleCustomMonogramChange:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)loadSpecifiers;
-(id)_currentLocale;
-(id)applicationBundleIdentifier;
@end

