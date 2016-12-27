/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBBundleInfo.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@protocol OS_dispatch_queue;
@class NSURL, NSString, NSDictionary, NSArray, FBMutableApplicationDefaults, NSSet, FBProfileManager, NSObject, FBApplicationDefaults, NSNumber;

@interface FBApplicationInfo : FBBundleInfo <BSDescriptionProviding> {

	NSURL* _executableURL;
	NSURL* _bundleContainerURL;
	NSURL* _dataContainerURL;
	NSURL* _sandboxURL;
	double _lastModifiedDate;
	NSString* _preferenceDomain;
	NSString* _signerIdentity;
	NSDictionary* _environmentVariables;
	NSDictionary* _entitlements;
	BOOL _provisioningProfileValidated;
	BOOL _isManaged;
	NSString* _sdkVersion;
	NSArray* _customMachServices;
	unsigned long long _type;
	NSArray* _requiredCapabilities;
	NSArray* _tags;
	NSArray* _deviceFamilies;
	BOOL _enabled;
	BOOL _newsstand;
	BOOL _restricted;
	BOOL _beta;
	FBMutableApplicationDefaults* _defaults;
	NSSet* _backgroundModes;
	unsigned long long _supportedInterfaceOrientations;
	BOOL _exitsOnSuspend;
	BOOL _requiresPersistentWiFi;
	float _minimumBrightnessLevel;
	NSArray* _externalAccessoryProtocols;
	long long _ratingRank;
	NSArray* _folderNames;
	NSString* _fallbackFolderName;
	BOOL _installing;
	BOOL _uninstalling;
	FBProfileManager* _profileManager;
	NSObject*<OS_dispatch_queue> _workQueue;

}

@property (assign,setter=_setInstalling:,getter=_isInstalling,nonatomic) BOOL installing;                                      //@synthesize installing=_installing - In the implementation block
@property (assign,setter=_setUninstalling:,getter=_isUninstalling,nonatomic) BOOL uninstalling;                                //@synthesize uninstalling=_uninstalling - In the implementation block
@property (assign,setter=_setProfileManager:,getter=_profileManager,nonatomic) FBProfileManager * profileManager;              //@synthesize profileManager=_profileManager - In the implementation block
@property (nonatomic,readonly) long long signatureState; 
@property (getter=hasFreeDeveloperProvisioningProfile,nonatomic,readonly) BOOL freeDeveloperProvisioningProfile; 
@property (getter=hasUniversalProvisioningProfile,nonatomic,readonly) BOOL universalProvisioningProfile; 
@property (nonatomic,retain,readonly) NSURL * executableURL;                                                                   //@synthesize executableURL=_executableURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * bundleContainerURL;                                                              //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * dataContainerURL;                                                                //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * sandboxURL;                                                                      //@synthesize sandboxURL=_sandboxURL - In the implementation block
@property (nonatomic,readonly) double lastModifiedDate;                                                                        //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferenceDomain;                                                               //@synthesize preferenceDomain=_preferenceDomain - In the implementation block
@property (nonatomic,copy,readonly) NSString * signerIdentity;                                                                 //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * environmentVariables;                                                     //@synthesize environmentVariables=_environmentVariables - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * entitlements;                                                             //@synthesize entitlements=_entitlements - In the implementation block
@property (getter=isProvisioningProfileValidated,nonatomic,readonly) BOOL provisioningProfileValidated;                        //@synthesize provisioningProfileValidated=_provisioningProfileValidated - In the implementation block
@property (getter=isNewsstand,nonatomic,readonly) BOOL newsstand;                                                              //@synthesize newsstand=_newsstand - In the implementation block
@property (nonatomic,retain,readonly) NSArray * tags;                                                                          //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain,readonly) NSArray * customMachServices;                                                            //@synthesize customMachServices=_customMachServices - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                                        //@synthesize type=_type - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;                                                            //@synthesize restricted=_restricted - In the implementation block
@property (nonatomic,retain,readonly) NSArray * requiredCapabilities;                                                          //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,retain,readonly) NSArray * deviceFamilies;                                                                //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (nonatomic,copy,readonly) NSString * sdkVersion;                                                                     //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (getter=isBeta,nonatomic,readonly) BOOL beta;                                                                        //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain,readonly) FBApplicationDefaults * defaults;                                                        //@synthesize defaults=_defaults - In the implementation block
@property (getter=isExitsOnSuspend,nonatomic,readonly) BOOL exitsOnSuspend;                                                    //@synthesize exitsOnSuspend=_exitsOnSuspend - In the implementation block
@property (nonatomic,readonly) BOOL requiresPersistentWiFi;                                                                    //@synthesize requiresPersistentWiFi=_requiresPersistentWiFi - In the implementation block
@property (nonatomic,readonly) float minimumBrightnessLevel;                                                                   //@synthesize minimumBrightnessLevel=_minimumBrightnessLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations;                                              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,retain,readonly) NSArray * externalAccessoryProtocols;                                                    //@synthesize externalAccessoryProtocols=_externalAccessoryProtocols - In the implementation block
@property (nonatomic,readonly) long long ratingRank;                                                                           //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,retain,readonly) NSArray * folderNames;                                                                   //@synthesize folderNames=_folderNames - In the implementation block
@property (nonatomic,retain,readonly) NSString * fallbackFolderName;                                                           //@synthesize fallbackFolderName=_fallbackFolderName - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID; 
@property (nonatomic,retain,readonly) NSNumber * purchaserDSID; 
@property (nonatomic,retain,readonly) NSNumber * downloaderDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSURL *)executableURL;
-(NSDictionary *)environmentVariables;
-(NSArray *)tags;
-(NSNumber *)purchaserDSID;
-(NSURL *)bundleContainerURL;
-(BOOL)isNewsstand;
-(void)dealloc;
-(NSString *)description;
-(NSString *)debugDescription;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)type;
-(BOOL)isEnabled;
-(NSURL *)dataContainerURL;
-(BOOL)isRestricted;
-(id)initWithApplicationProxy:(id)arg1 ;
-(double)lastModifiedDate;
-(long long)ratingRank;
-(NSArray *)requiredCapabilities;
-(BOOL)isBeta;
-(NSArray *)deviceFamilies;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(void)_parse:(id)arg1 fromBundle:(id)arg2 ;
-(void)_setInstalling:(BOOL)arg1 ;
-(void)_setUninstalling:(BOOL)arg1 ;
-(BOOL)supportsBackgroundMode:(id)arg1 ;
-(BOOL)_isInstalling;
-(BOOL)_isUninstalling;
-(BOOL)builtOnOrAfterSDKVersion:(id)arg1 ;
-(NSArray *)customMachServices;
-(unsigned long long)_applicationType:(id)arg1 ;
-(double)_lastModifiedDateForPath:(id)arg1 ;
-(id)_preferenceDomain;
-(unsigned long long)_computeSupportedInterfaceOrientations:(id)arg1 ;
-(NSString *)sdkVersion;
-(id)_configureEnvironment:(id)arg1 ;
-(void)_cacheFolderNamesForSystemApp:(id)arg1 ;
-(void)_buildDefaultsFromInfoPlist:(id)arg1 ;
-(NSNumber *)downloaderDSID;
-(id)_copyiTunesMetadata;
-(id)_localizedGenreFromDictionary:(id)arg1 ;
-(id)_applicationTrustData;
-(long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1 ;
-(NSURL *)sandboxURL;
-(id)_localizedGenreNameForID:(long long)arg1 ;
-(NSArray *)folderNames;
-(NSString *)fallbackFolderName;
-(BOOL)supportsInterfaceOrientation:(long long)arg1 ;
-(BOOL)supportsAllInterfaceOrientations;
-(BOOL)supportsDeviceFamily:(unsigned long long)arg1 ;
-(void)acceptApplicationSignatureIdentity;
-(BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(long long)signatureState;
-(BOOL)hasFreeDeveloperProvisioningProfile;
-(BOOL)hasUniversalProvisioningProfile;
-(NSString *)preferenceDomain;
-(BOOL)isProvisioningProfileValidated;
-(BOOL)isExitsOnSuspend;
-(BOOL)requiresPersistentWiFi;
-(float)minimumBrightnessLevel;
-(NSArray *)externalAccessoryProtocols;
-(id)_profileManager;
-(void)_setProfileManager:(id)arg1 ;
-(NSNumber *)itemID;
-(NSDictionary *)entitlements;
-(NSString *)signerIdentity;
-(FBApplicationDefaults *)defaults;
@end

