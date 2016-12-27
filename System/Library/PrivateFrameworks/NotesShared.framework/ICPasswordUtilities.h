/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/NotesShared-Structs.h>
#import <NotesShared/ICSharedPasswordUtilities.h>

@class UIAlertController, NSString;

@interface ICPasswordUtilities : ICSharedPasswordUtilities {

	BOOL _authenticationInProgress;
	UIAlertController* _displayedAlertController;
	NSString* _divergedSharedPassword;

}

@property (assign,nonatomic) BOOL authenticationInProgress;                                    //@synthesize authenticationInProgress=_authenticationInProgress - In the implementation block
@property (assign,nonatomic,__weak) UIAlertController * displayedAlertController;              //@synthesize displayedAlertController=_displayedAlertController - In the implementation block
@property (nonatomic,retain) NSString * divergedSharedPassword;                                //@synthesize divergedSharedPassword=_divergedSharedPassword - In the implementation block
+(id)sharedInstance;
+(BOOL)touchIDIsEnrolled;
+(BOOL)touchIDEnabledForSharedPassword;
+(void)setTouchIDEnabledForSharedPassword:(BOOL)arg1 ;
+(void)showFirstTimePasswordProtectNoteAlertForDisplayWindow:(id)arg1 ;
+(BOOL)touchIDHardwareIsAvailable;
+(BOOL)deviceHasPasscode;
+(void)authenticateiCloudPasswordFromRootViewController:(id)arg1 confirmButtonTitle:(id)arg2 reason:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
+(BOOL)authenticateDevicePasscodeIfNecessaryWithReason:(id)arg1 ;
+(UIImage*)imageForCurrentDecryptedStatusForNote:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)showPasswordSetUpSheetForAccount:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)showPasswordEntrySheetWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)authenticateForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticateUsingAlternateMethodForDeletingNotes:(id)arg1 displayWindow:(UIWindow*)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticateIfNecessaryForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)authenticatePasswordForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(UIAlertController *)displayedAlertController;
-(void)setDisplayedAlertController:(UIAlertController *)arg1 ;
-(void)setAuthenticationInProgress:(BOOL)arg1 ;
-(BOOL)authenticationInProgress;
-(BOOL)keychainContainsValidItemForAccount:(id)arg1 ;
-(BOOL)keychainContainsValidItemForNote:(id)arg1 ;
-(void)authenticateWithTouchIDWithReason:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 displayWindow:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 displayWindow:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_authenticatePasswordWithIntent:(unsigned long long)arg1 note:(id)arg2 incorrectAttempts:(long long)arg3 passwordDiverged:(BOOL)arg4 displayWindow:(id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)addTitleAndMessageToAlert:(id)arg1 intent:(unsigned long long)arg2 note:(id)arg3 incorrectAttempts:(long long)arg4 passwordDiverged:(BOOL)arg5 ;
-(void)setDivergedSharedPassword:(NSString *)arg1 ;
-(void)accessibilityAnnounceAuthSuccessForIntent:(unsigned long long)arg1 withNote:(id)arg2 ;
-(NSString *)divergedSharedPassword;
-(void)showUpdateDivergedPasswordForSharedPassword:(id)arg1 oldPassword:(id)arg2 displayWindow:(id)arg3 ;
-(BOOL)_keychainContainsValidItemForSyncingObject:(id)arg1 ;
-(void)authenticateWithTouchIDForDeletingNotes:(id)arg1 displayWindow:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_authenticatePasswordForDeletingNotes:(id)arg1 incorrectAttempts:(long long)arg2 displayWindow:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)showChangePasswordDialogueFromDisplayWindow:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

