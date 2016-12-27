/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACUISettingsPluginParentProtocol;
@class PSViewController, NSMutableDictionary;

@interface ACUISettingsPluginManager : NSObject {

	PSViewController*<ACUISettingsPluginParentProtocol> _parentViewController;
	NSMutableDictionary* _pluginCache;

}
-(id)_settingsPluginFromBundleWithName:(id)arg1 ;
-(id)_loadSettingsPluginFromBundleWithName:(id)arg1 ;
-(void)parentViewControllerWillDisappear;
-(id)mailSettingsPlugin;
-(id)calendarSettingsPlugin;
-(id)contactsSettingsPlugin;
-(id)initWithParentViewController:(id)arg1 ;
@end

