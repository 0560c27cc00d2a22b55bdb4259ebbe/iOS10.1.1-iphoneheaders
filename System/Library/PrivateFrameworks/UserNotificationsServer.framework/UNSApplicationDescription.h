/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsServer.framework/UserNotificationsServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface UNSApplicationDescription : NSObject {

	BOOL _requiresLocalNotifications;
	BOOL _shouldUseDefaultDataProvider;
	BOOL _systemApplication;
	BOOL _usesCloudKit;
	NSString* _bundleIdentifier;
	NSURL* _bundleURL;
	NSURL* _dataContainerURL;
	NSString* _localizedName;

}

@property (nonatomic,copy) NSString * bundleIdentifier;                                      //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSURL * bundleURL;                                                //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,copy) NSURL * dataContainerURL;                                         //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,copy) NSString * localizedName;                                         //@synthesize localizedName=_localizedName - In the implementation block
@property (assign,nonatomic) BOOL requiresLocalNotifications;                                //@synthesize requiresLocalNotifications=_requiresLocalNotifications - In the implementation block
@property (assign,nonatomic) BOOL shouldUseDefaultDataProvider;                              //@synthesize shouldUseDefaultDataProvider=_shouldUseDefaultDataProvider - In the implementation block
@property (assign,getter=isSystemApplication,nonatomic) BOOL systemApplication;              //@synthesize systemApplication=_systemApplication - In the implementation block
@property (assign,nonatomic) BOOL usesCloudKit;                                              //@synthesize usesCloudKit=_usesCloudKit - In the implementation block
+(id)descriptionWithApplication:(id)arg1 ;
-(id)description;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSString *)localizedName;
-(NSURL *)dataContainerURL;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setLocalizedName:(NSString *)arg1 ;
-(BOOL)usesCloudKit;
-(BOOL)isSystemApplication;
-(BOOL)requiresLocalNotifications;
-(void)setDataContainerURL:(NSURL *)arg1 ;
-(void)setRequiresLocalNotifications:(BOOL)arg1 ;
-(void)setShouldUseDefaultDataProvider:(BOOL)arg1 ;
-(void)setSystemApplication:(BOOL)arg1 ;
-(void)setUsesCloudKit:(BOOL)arg1 ;
-(BOOL)shouldUseDefaultDataProvider;
@end

