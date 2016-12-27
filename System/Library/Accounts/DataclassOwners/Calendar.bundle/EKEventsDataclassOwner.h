/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Accounts/DataclassOwners/Calendar.bundle/Calendar
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDCOCalendarDataClassOwner;

@interface EKEventsDataclassOwner : NSObject {

	CDCOCalendarDataClassOwner* _calendarOwner;

}
-(BOOL)_isReadOnlyAccount:(id)arg1 ;
-(BOOL)_isLocalStoreEmpty;
-(id)actionsForAddingAccount:(id)arg1 ;
-(BOOL)_isStoreEmptyForAccount:(id)arg1 ;
-(BOOL)_drainLocalStore;
-(void)_setLocalStoreEnabled:(BOOL)arg1 ;
-(BOOL)_clearAllEventsFromStore:(void*)arg1 ;
-(id)actionsForEnablingDataclassOnAccount:(id)arg1 ;
-(BOOL)_removeStoreForAccount:(id)arg1 withChildren:(id)arg2 ;
-(id)initWithCalendarOwner:(id)arg1 ;
-(BOOL)_createFacebookStoreForParentAccount:(id)arg1 withChildren:(id)arg2 ;
-(BOOL)_setUpCalStoreForParentAccount:(id)arg1 withChildren:(id)arg2 ;
-(void*)_copyStoreForAccount:(id)arg1 withChildren:(id)arg2 ;
-(BOOL)_mergeEventsFromLocalStoreIntoStore:(void*)arg1 ;
-(BOOL)_clearAllEventsFromStoreForParentAccount:(id)arg1 withChildren:(id)arg2 ;
-(void)_disableStoreForAccount:(id)arg1 withChildren:(id)arg2 ;
-(BOOL)_mergeEventsIntoLocalStoreFromStore:(void*)arg1 ;
-(id)_syncingAccountForParentAccount:(id)arg1 withChildren:(id)arg2 ;
-(void*)_copyStoreWithExternalIdentifier:(id)arg1 ;
-(void)_enableLocalStoreIfNecessaryIgnoringAccount:(id)arg1 ;
-(BOOL)performAction:(id)arg1 forAccount:(id)arg2 withChildren:(id)arg3 ;
-(id)actionsForDisablingDataclassOnAccount:(id)arg1 ;
-(id)actionsForDeletingAccount:(id)arg1 ;
@end

