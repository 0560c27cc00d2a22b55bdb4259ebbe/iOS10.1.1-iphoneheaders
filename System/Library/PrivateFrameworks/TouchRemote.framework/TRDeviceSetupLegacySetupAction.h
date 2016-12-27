/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRDeviceSetupLegacyAction.h>

@class TRDeviceSetupLegacySetupActionAuthInfo, NSString;

@interface TRDeviceSetupLegacySetupAction : TRDeviceSetupLegacyAction

@property (nonatomic,readonly) TRDeviceSetupLegacySetupActionAuthInfo * authInfo; 
@property (nonatomic,readonly) NSString * networkSSID; 
@property (nonatomic,readonly) NSString * networkPassword; 
@property (nonatomic,readonly) BOOL diagnosticsEnabled; 
@property (nonatomic,readonly) NSString * language; 
@property (nonatomic,readonly) NSString * countryCode; 
@property (nonatomic,readonly) NSString * homeSharingAppleID; 
@property (nonatomic,readonly) NSString * homeSharingGroupID; 
@property (nonatomic,readonly) BOOL rememberPassword; 
-(NSString *)language;
-(NSString *)countryCode;
-(NSString *)homeSharingGroupID;
-(TRDeviceSetupLegacySetupActionAuthInfo *)authInfo;
-(NSString *)homeSharingAppleID;
-(NSString *)networkSSID;
-(NSString *)networkPassword;
-(BOOL)rememberPassword;
-(id)initWithAuthInfo:(id)arg1 networkSSID:(id)arg2 networkPassword:(id)arg3 diagnosticsEnabled:(BOOL)arg4 language:(id)arg5 countryCode:(id)arg6 homeSharingAppleID:(id)arg7 homeSharingGroupID:(id)arg8 rememberPassword:(BOOL)arg9 ;
-(BOOL)diagnosticsEnabled;
@end

