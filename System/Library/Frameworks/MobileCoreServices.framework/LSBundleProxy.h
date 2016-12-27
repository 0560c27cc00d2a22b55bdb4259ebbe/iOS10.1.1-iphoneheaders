/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MobileCoreServices.framework/MobileCoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCoreServices/LSResourceProxy.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSUUID, NSArray, _LSLazyPropertyList, NSDictionary;

@interface LSBundleProxy : LSResourceProxy <NSSecureCoding> {

	unsigned long long _bundleFlags;
	unsigned _plistContentFlags;
	BOOL _foundBackingBundle;
	BOOL _isContainerized;
	BOOL _profileValidated;
	BOOL _UPPValidated;
	NSString* _bundleType;
	NSString* _localizedShortName;
	NSURL* _bundleURL;
	NSString* _bundleExecutable;
	NSURL* _appStoreReceiptURL;
	NSString* _bundleVersion;
	NSString* _signerIdentity;
	NSUUID* _cacheGUID;
	unsigned long long _sequenceNumber;
	NSArray* _machOUUIDs;
	_LSLazyPropertyList* __infoDictionary;
	_LSLazyPropertyList* __groupContainers;
	_LSLazyPropertyList* __entitlements;
	_LSLazyPropertyList* __environmentVariables;

}

@property (setter=_setInfoDictionary:,nonatomic,copy) _LSLazyPropertyList * _infoDictionary;                          //@synthesize _infoDictionary=__infoDictionary - In the implementation block
@property (nonatomic,copy) NSURL * appStoreReceiptURL;                                                                //@synthesize appStoreReceiptURL=_appStoreReceiptURL - In the implementation block
@property (nonatomic,copy) NSArray * machOUUIDs;                                                                      //@synthesize machOUUIDs=_machOUUIDs - In the implementation block
@property (setter=_setGroupContainers:,nonatomic,copy) _LSLazyPropertyList * _groupContainers;                        //@synthesize _groupContainers=__groupContainers - In the implementation block
@property (setter=_setEntitlements:,nonatomic,copy) _LSLazyPropertyList * _entitlements;                              //@synthesize _entitlements=__entitlements - In the implementation block
@property (setter=_setEnvironmentVariables:,nonatomic,copy) _LSLazyPropertyList * _environmentVariables;              //@synthesize _environmentVariables=__environmentVariables - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * bundleType;                                                                 //@synthesize bundleType=_bundleType - In the implementation block
@property (nonatomic,readonly) NSString * localizedShortName;                                                         //@synthesize localizedShortName=_localizedShortName - In the implementation block
@property (nonatomic,readonly) NSURL * bundleURL;                                                                     //@synthesize bundleURL=_bundleURL - In the implementation block
@property (nonatomic,readonly) NSString * bundleExecutable;                                                           //@synthesize bundleExecutable=_bundleExecutable - In the implementation block
@property (nonatomic,readonly) NSURL * containerURL; 
@property (nonatomic,readonly) NSURL * dataContainerURL; 
@property (nonatomic,readonly) NSURL * bundleContainerURL; 
@property (nonatomic,readonly) NSString * bundleVersion;                                                              //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,readonly) NSString * signerIdentity;                                                             //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) NSDictionary * environmentVariables; 
@property (nonatomic,readonly) NSDictionary * groupContainerURLs; 
@property (nonatomic,readonly) BOOL foundBackingBundle;                                                               //@synthesize foundBackingBundle=_foundBackingBundle - In the implementation block
@property (nonatomic,readonly) BOOL isContainerized;                                                                  //@synthesize isContainerized=_isContainerized - In the implementation block
@property (nonatomic,readonly) BOOL profileValidated;                                                                 //@synthesize profileValidated=_profileValidated - In the implementation block
@property (nonatomic,readonly) BOOL UPPValidated;                                                                     //@synthesize UPPValidated=_UPPValidated - In the implementation block
@property (nonatomic,readonly) NSUUID * cacheGUID;                                                                    //@synthesize cacheGUID=_cacheGUID - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                                                     //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
+(id)hk_appExtensionContainerBundleForCurrentTask;
+(id)_hk_appExtensionContainerBundleProxyWithProperties:(id)arg1 ;
+(id)hk_appExtensionContainerBundleForConnection:(id)arg1 ;
+(id)bundleProxyForIdentifier:(id)arg1 ;
+(id)bundleProxyForCurrentProcess;
+(BOOL)supportsSecureCoding;
+(id)bundleProxyForURL:(id)arg1 ;
-(id)__ck_icon;
-(id)un_applicationBundle;
-(id)_un_applicationBundleURL;
-(NSURL *)appStoreReceiptURL;
-(NSDictionary *)environmentVariables;
-(NSDictionary *)groupContainerURLs;
-(void)setPropertyListCachingStrategy:(unsigned long long)arg1 ;
-(id)_initWithBundleUnit:(unsigned)arg1 bundleType:(unsigned long long)arg2 bundleID:(id)arg3 localizedName:(id)arg4 bundleContainerURL:(id)arg5 dataContainerURL:(id)arg6 resourcesDirectoryURL:(id)arg7 iconsDictionary:(id)arg8 iconFileNames:(id)arg9 version:(id)arg10 ;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(void)setLocalizedShortName:(NSString *)arg1 ;
-(BOOL)UPPValidated;
-(unsigned long long)_containerClassForLSBundleType:(id)arg1 ;
-(id)_dataContainerURLFromContainerManager;
-(id)_environmentVariablesFromContainerManager;
-(_LSLazyPropertyList *)_environmentVariables;
-(_LSLazyPropertyList *)_entitlements;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 valuesOfClass:(Class)arg3 ;
-(id)_groupContainerURLsFromContainerManager;
-(_LSLazyPropertyList *)_groupContainers;
-(_LSLazyPropertyList *)_infoDictionary;
-(id)_valueForEqualityTesting;
-(NSURL *)containerURL;
-(id)entitlementValueForKey:(id)arg1 ofClass:(Class)arg2 ;
-(void)setAppStoreReceiptURL:(NSURL *)arg1 ;
-(void)setMachOUUIDs:(NSArray *)arg1 ;
-(void)_setInfoDictionary:(id)arg1 ;
-(void)_setGroupContainers:(id)arg1 ;
-(void)_setEntitlements:(id)arg1 ;
-(void)_setEnvironmentVariables:(id)arg1 ;
-(NSURL *)bundleContainerURL;
-(BOOL)foundBackingBundle;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)bundleIdentifier;
-(NSURL *)bundleURL;
-(NSURL *)dataContainerURL;
-(id)uniqueIdentifier;
-(NSString *)localizedShortName;
-(NSString *)bundleVersion;
-(unsigned long long)sequenceNumber;
-(id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 ;
-(NSString *)bundleExecutable;
-(NSUUID *)cacheGUID;
-(BOOL)profileValidated;
-(NSString *)bundleType;
-(BOOL)isContainerized;
-(NSDictionary *)entitlements;
-(NSArray *)machOUUIDs;
-(NSString *)signerIdentity;
@end

