/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/RemindersSettings.bundle/RemindersSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSAccountsClientListController.h>

@class PSSpecifier, EKEventStore;

@interface RemindersSettingsPlugin : PSAccountsClientListController {

	PSSpecifier* _syncDaysSpecifier;
	PSSpecifier* _defaultCalendarSpecifier;
	EKEventStore* _eventStore;
	BOOL _isSyncingReminders;

}
-(BOOL)_calculateIsSyncingReminders;
-(id)_localizedOneMonthSyncTitleOverride;
-(void)_eventStoreChanged;
-(id)init;
-(void)dealloc;
-(id)requestedAccountDataclass;
-(void)setDaysToSync:(id)arg1 specifier:(id)arg2 ;
-(id)daysToSync:(id)arg1 ;
-(id)_titlesForDaysToSync;
-(void)setDefaultCalendar:(id)arg1 specifier:(id)arg2 ;
-(id)defaultCalendarName:(id)arg1 ;
-(id)specifiers;
@end

