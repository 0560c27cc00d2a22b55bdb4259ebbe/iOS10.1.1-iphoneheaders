/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/FacebookSettings.bundle/FacebookSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FacebookSettings/SLFacebookRegistrationInfoPrompt.h>

@class NSString;

@interface SLFacebookRegistrationGenderPrompt : SLFacebookRegistrationInfoPrompt {

	NSString* _gender;
	long long _selectedRow;

}
-(void)updateRegistrationInfo;
-(BOOL)isReadyToValidate;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)validate;
-(id)specifiers;
@end

