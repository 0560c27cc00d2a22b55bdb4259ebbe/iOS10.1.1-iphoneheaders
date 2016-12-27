/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:38:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <libobjc.A.dylib/SSRequestDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, SSKeyValueStore, SSURLBag, NSSet;

@interface SSDevice : NSObject <SSRequestDelegate> {

	NSString* _appleTVProductVersion;
	id _cloudMediaLibraryIdentifier;
	long long _deviceType;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	SSKeyValueStore* _keyValueStore;
	NSString* _legacyUserAgent;
	NSString* _localStoreFrontIdentifier;
	BOOL _localStoreFrontIsTransient;
	id _mediaLibraryIdentifier;
	NSObject*<OS_dispatch_queue> _notificationQueue;
	NSString* _phoneNumber;
	NSString* _productType;
	NSString* _productVersion;
	id _softwareLibraryIdentifier;
	NSString* _synchedStoreFrontIdentifier;
	int _telephonyCapability;
	CTServerConnectionRef _telephonyServer;
	NSString* _udid;
	SSURLBag* _urlBag;
	NSString* _userAgent;
	double _batteryLevel;
	unsigned _batteryMonitorNotification;
	IONotificationPortRef _batteryMonitorPort;
	BOOL _pluggedIn;
	int _pluggedInToken;
	long long _powerMonitorCount;

}

@property (readonly) NSString * compatibleProductType; 
@property (readonly) long long deviceType; 
@property (readonly) unsigned deviceTypeIdentifier; 
@property (readonly) NSString * phoneNumber; 
@property (readonly) NSString * productType; 
@property (readonly) NSString * productVersion; 
@property (readonly) NSString * serialNumber; 
@property (readonly) NSString * thinnedApplicationVariantIdentifier; 
@property (readonly) NSString * uniqueDeviceIdentifier; 
@property (getter=isPluggedIn,readonly) BOOL pluggedIn; 
@property (readonly) double batteryLevel; 
@property (copy) NSString * cloudMediaLibraryIdentifier; 
@property (copy) NSString * mediaLibraryIdentifier; 
@property (copy) NSString * softwareLibraryIdentifier; 
@property (getter=isStoreFrontIdentifierTransient,readonly) BOOL storeFrontIdentifierTransient; 
@property (readonly) NSString * synchedStoreFrontIdentifier; 
@property (readonly) NSString * storeFrontIdentifier; 
@property (readonly) NSString * legacyUserAgent; 
@property (readonly) NSString * userAgent; 
@property (readonly) NSSet * automaticDownloadKinds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)copyCachedAvailableItemKinds;
+(BOOL)promptNeedsDisplay:(id)arg1 ;
+(BOOL)setCachedAvailableItemKinds:(id)arg1 ;
+(void)setLastPromptAttemptDate:(id)arg1 forPromptWithIdentifier:(id)arg2 ;
+(void)setPromptWithIdentifier:(id)arg1 needsDisplay:(BOOL)arg2 ;
+(id)currentDevice;
-(NSString *)uniqueDeviceIdentifier;
-(void)setStoreFrontIdentifier:(id)arg1 accountIdentifier:(id)arg2 isTransient:(BOOL)arg3 ;
-(NSString *)cloudMediaLibraryIdentifier;
-(NSString *)mediaLibraryIdentifier;
-(NSString *)softwareLibraryIdentifier;
-(void)_cacheKeyValueStoreValues;
-(BOOL)_getDeviceType:(unsigned*)arg1 error:(id*)arg2 ;
-(void)setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(id)_newLegacyUserAgent:(BOOL*)arg1 ;
-(id)_userAgentClientNameForInfoPlist:(id)arg1 ;
-(id)_userAgentClientVersionForInfoPlist:(id)arg1 clientName:(id)arg2 ;
-(id)_newModernUserAgentWithClientName:(id)arg1 version:(id)arg2 isCachable:(BOOL*)arg3 ;
-(id)_copyCarrierBundleEligibilityWithStatus:(id)arg1 ;
-(long long)_deviceType;
-(void)_updateAutomaticDownloadKinds:(id)arg1 withValue:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_invalidatePhoneNumber;
-(id)_copyProductType;
-(long long)_deviceTypeForProductType:(id)arg1 ;
-(id)_productVersion;
-(void)_reloadAfterStoreFrontChange;
-(BOOL)_setStoreFrontIdentifier:(id)arg1 isTransient:(BOOL)arg2 ;
-(void)_postStoreFrontDidChangeNotification;
-(void)_updateBatteryLevelFromService:(unsigned)arg1 ;
-(void)_reloadPluggedInState;
-(BOOL)_is720pCapable;
-(BOOL)_is1080pCapable;
-(id)_userAgentClientNameForBundleID:(id)arg1 ;
-(void)setStoreFrontIdentifier:(id)arg1 account:(id)arg2 isTransient:(BOOL)arg3 ;
-(long long)_deviceTypeForUnknownIPad:(id)arg1 ;
-(long long)_deviceTypeForUnknownIPhone:(id)arg1 ;
-(long long)_deviceTypeForUnknownIPod:(id)arg1 ;
-(long long)_deviceTypeForUnknownAppleTV:(id)arg1 ;
-(int)_deviceClass;
-(int)_screenClass;
-(id)_diskCapacityString;
-(id)_fairPlayDeviceTypeString;
-(id)_appleTVProductVersion;
-(id)_userAgentClientNameForAppleTVBundleID:(id)arg1 ;
-(id)copyStoreFrontRequestHeaders;
-(void)getAvailableItemKindsWithBlock:(/*^block*/id)arg1 ;
-(void)getCellularNetworkingAllowedWithBlock:(/*^block*/id)arg1 ;
-(void)sdk_loadStoreFrontIdentifier:(/*^block*/id)arg1 ;
-(void)setCellularNetworkingAllowed:(BOOL)arg1 ;
-(void)setStoreFrontWithResponseHeaders:(id)arg1 ;
-(void)showPromptWithIdentifier:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSString *)legacyUserAgent;
-(id)carrierBundleStatusForService:(long long)arg1 ;
-(void)getCarrierBundleStatusForService:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enableAllAutomaticDownloadKindsWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)minusAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)setCloudMediaLibraryIdentifier:(NSString *)arg1 ;
-(void)setMediaLibraryIdentifier:(NSString *)arg1 ;
-(void)startPowerMonitoring;
-(void)stopPowerMonitoring;
-(void)synchronizeAutomaticDownloadKinds;
-(void)unionAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(id)userAgentWithBundleIdentifier:(id)arg1 version:(id)arg2 ;
-(void)resetStoreFrontForSignOut;
-(id)_copyKeyValueStoreValueForDomain:(id)arg1 key:(id)arg2 ;
-(void)_invalidateSoftwareCUID;
-(id)init;
-(void)dealloc;
-(NSString *)phoneNumber;
-(double)batteryLevel;
-(NSString *)userAgent;
-(BOOL)supportsDeviceCapability:(long long)arg1 ;
-(id)userAgentWithClientName:(id)arg1 version:(id)arg2 ;
-(BOOL)isPluggedIn;
-(void)setSoftwareLibraryIdentifier:(NSString *)arg1 ;
-(BOOL)getMachineIdentifier:(id*)arg1 otp:(id*)arg2 forAccountIdentifier:(id)arg3 ;
-(void)setAutomaticDownloadKinds:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(NSSet *)automaticDownloadKinds;
-(unsigned)deviceTypeIdentifier;
-(void)reloadStoreFrontIdentifier;
-(BOOL)isStoreFrontIdentifierTransient;
-(NSString *)synchedStoreFrontIdentifier;
-(NSString *)thinnedApplicationVariantIdentifier;
-(NSString *)compatibleProductType;
-(NSString *)serialNumber;
-(NSString *)storeFrontIdentifier;
-(NSString *)productType;
-(long long)deviceType;
-(NSString *)productVersion;
-(void)loadStoreFrontWithCompletionHandler:(/*^block*/id)arg1 ;
@end

