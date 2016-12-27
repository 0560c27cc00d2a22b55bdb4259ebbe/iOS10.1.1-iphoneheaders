/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/ActiveSyncSettings.bundle/ActiveSyncSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ACUIAccountViewsProviderProtocol.h>

@class NSString;

@interface ASSettingsPlugin : NSObject <ACUIAccountViewsProviderProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)controllerClassForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForCreatingAccountWithType:(id)arg1 ;
-(id)configurationInfoForCreatingAccountWithType:(id)arg1 ;
-(Class)viewControllerClassForViewingAccount:(id)arg1 ;
-(id)configurationInfoForViewingAccount:(id)arg1 ;
-(id)supportedAccountTypeIdentifiers;
@end

