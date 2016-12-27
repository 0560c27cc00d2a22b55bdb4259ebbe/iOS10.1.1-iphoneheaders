/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString;

@interface PLPersonInfoManager : NSObject {

	NSMutableDictionary* _personDictsForPersonID;
	NSString* _plistPath;

}
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(void)setPersonInfo:(id)arg1 forPersonID:(id)arg2 ;
-(id)personInfoForPersonID:(id)arg1 ;
-(id)plistPath;
-(void)_loadDictionariesIfNeeded;
-(void)setFirstName:(id)arg1 lastName:(id)arg2 fullName:(id)arg3 email:(id)arg4 forPersonID:(id)arg5 ;
-(id)firstNameForPersonID:(id)arg1 ;
-(id)lastNameForPersonID:(id)arg1 ;
-(id)fullNameForPersonID:(id)arg1 ;
-(id)emailForPersonID:(id)arg1 ;
-(void)setEmails:(id)arg1 phones:(id)arg2 forInvitationRecordGUID:(id)arg3 ;
-(void)deleteEmailsAndPhonesForInvitationRecordGUID:(id)arg1 ;
-(id)emailsForInvitationRecordGUID:(id)arg1 ;
-(id)phonesForInvitationRecordGUID:(id)arg1 ;
-(void)clearCacheForPersonID:(id)arg1 ;
-(void)removePersistedInfo;
@end

