/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/Plugins/PreferencesAssistant.assistantBundle/PreferencesAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetSiriAuthorizationForApp.h>
#import <Accessibility/AFServiceCommand.h>

@class NSString;

@interface PASetSiriAuthorizationForApp : SASettingSetSiriAuthorizationForApp <AFServiceCommand>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_accessForAppID:(id)arg1 ;
-(BOOL)_setAccess:(BOOL)arg1 appID:(id)arg2 ;
-(void)performWithCompletion:(/*^block*/id)arg1 ;
-(id)_tccAccessInfoForBundle:(id)arg1 ;
@end

