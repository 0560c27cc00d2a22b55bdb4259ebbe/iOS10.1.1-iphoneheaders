/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, AASetupAssistantDelegateService;
@class NSArray, AAStorableLoginContext, NSObject;

@interface AALoginPluginManager : NSObject {

	NSArray* _allowedPluginBundleIDs;
	NSArray* _plugins;
	BOOL _shouldStashLoginResponse;
	AAStorableLoginContext* _stashedLoginContext;
	NSObject*<OS_dispatch_queue> _pluginNotificationQueue;
	id<AASetupAssistantDelegateService> _idsPlugin;
	BOOL _shouldSkipiTunesPlugin;

}

@property (assign,nonatomic) BOOL shouldSkipiTunesPlugin;                //@synthesize shouldSkipiTunesPlugin=_shouldSkipiTunesPlugin - In the implementation block
@property (assign,nonatomic) BOOL shouldStashLoginResponse; 
+(id)sharedInstance;
-(id)init;
-(id)_loadPluginsLimitedToBundleIDs:(id)arg1 ;
-(id)_idsPlugin;
-(void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 rawPassword:(id)arg4 ;
-(id)_createLoginContextForAppleID:(id)arg1 rawPassword:(id)arg2 loginResponse:(id)arg3 ;
-(void)restrictToPluginBundleIDs:(id)arg1 ;
-(id)collectParametersForLoginRequest;
-(id)collectParametersForIdentityEstablishmentRequest;
-(void)notifyServicesOfLoginResponse:(id)arg1 forAppleID:(id)arg2 password:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)shouldStashLoginResponse;
-(void)setShouldStashLoginResponse:(BOOL)arg1 ;
-(void)unstashLoginResponse;
-(BOOL)shouldSkipiTunesPlugin;
-(void)setShouldSkipiTunesPlugin:(BOOL)arg1 ;
-(id)_plugins;
@end

