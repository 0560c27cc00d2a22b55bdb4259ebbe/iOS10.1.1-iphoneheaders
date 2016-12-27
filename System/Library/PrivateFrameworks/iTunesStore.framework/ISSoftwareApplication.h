/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SSXPCCoding.h>

@class NSNumber, NSString, SSItemContentRating, NSArray, NSDate;

@interface ISSoftwareApplication : NSObject <SSXPCCoding> {

	NSNumber* _accountDSID;
	NSString* _accountIdentifier;
	BOOL _beta;
	NSString* _bundleIdentifier;
	NSString* _bundleShortVersionString;
	NSString* _bundleVersion;
	NSString* _containerPath;
	SSItemContentRating* _contentRating;
	NSString* _deviceIdentifierForVendor;
	NSNumber* _familyAccountIdentifier;
	BOOL _hasMIDBasedSINF;
	NSNumber* _itemIdentifier;
	NSString* _itemName;
	BOOL _missingRequiredSINF;
	BOOL _placeholder;
	BOOL _profileValidated;
	NSString* _softwareType;
	NSNumber* _storeFrontIdentifier;
	NSString* _vendorName;
	NSNumber* _versionIdentifier;
	NSArray* _versionOrdering;
	NSDate* _receiptExpirationDate;
	unsigned long long _vppStateFlags;
	BOOL _launchProhibited;
	BOOL _didCheckLaunchProhibited;
	unsigned long long _removableStatus;

}

@property (assign,nonatomic) BOOL didCheckLaunchProhibited;                                //@synthesize didCheckLaunchProhibited=_didCheckLaunchProhibited - In the implementation block
@property (nonatomic,readonly) NSDate * receiptExpirationDate;                             //@synthesize receiptExpirationDate=_receiptExpirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long removableStatus;                         //@synthesize removableStatus=_removableStatus - In the implementation block
@property (nonatomic,readonly) unsigned long long vppStateFlags; 
@property (nonatomic,retain) NSNumber * accountDSID;                                       //@synthesize accountDSID=_accountDSID - In the implementation block
@property (nonatomic,copy) NSString * accountIdentifier;                                   //@synthesize accountIdentifier=_accountIdentifier - In the implementation block
@property (assign,getter=isBeta,nonatomic) BOOL beta;                                      //@synthesize beta=_beta - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                                    //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleShortVersionString;                            //@synthesize bundleShortVersionString=_bundleShortVersionString - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                                       //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (nonatomic,copy) NSString * containerPath;                                       //@synthesize containerPath=_containerPath - In the implementation block
@property (nonatomic,copy) SSItemContentRating * contentRating;                            //@synthesize contentRating=_contentRating - In the implementation block
@property (nonatomic,copy) NSString * deviceIdentifierForVendor;                           //@synthesize deviceIdentifierForVendor=_deviceIdentifierForVendor - In the implementation block
@property (nonatomic,copy) NSNumber * familyAccountIdentifier;                             //@synthesize familyAccountIdentifier=_familyAccountIdentifier - In the implementation block
@property (nonatomic,retain) NSNumber * itemIdentifier;                                    //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,copy) NSString * itemName;                                            //@synthesize itemName=_itemName - In the implementation block
@property (assign,getter=isLaunchProhibited,nonatomic) BOOL launchProhibited;              //@synthesize launchProhibited=_launchProhibited - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;                        //@synthesize placeholder=_placeholder - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (nonatomic,copy) NSString * softwareType;                                        //@synthesize softwareType=_softwareType - In the implementation block
@property (nonatomic,retain) NSNumber * storeFrontIdentifier;                              //@synthesize storeFrontIdentifier=_storeFrontIdentifier - In the implementation block
@property (nonatomic,copy) NSString * vendorName;                                          //@synthesize vendorName=_vendorName - In the implementation block
@property (nonatomic,retain) NSNumber * versionIdentifier;                                 //@synthesize versionIdentifier=_versionIdentifier - In the implementation block
@property (nonatomic,copy) NSArray * versionOrdering;                                      //@synthesize versionOrdering=_versionOrdering - In the implementation block
@property (assign,nonatomic) BOOL hasMIDBasedSINF;                                         //@synthesize hasMIDBasedSINF=_hasMIDBasedSINF - In the implementation block
@property (assign,nonatomic) BOOL missingRequiredSINF;                                     //@synthesize missingRequiredSINF=_missingRequiredSINF - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)hasMIDBasedSINF;
-(BOOL)missingRequiredSINF;
-(NSString *)itemName;
-(void)setLaunchProhibited:(BOOL)arg1 ;
-(NSNumber *)familyAccountIdentifier;
-(void)setFamilyAccountIdentifier:(NSNumber *)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
-(void)dealloc;
-(NSString *)description;
-(NSString *)bundleIdentifier;
-(void)setPlaceholder:(BOOL)arg1 ;
-(NSString *)deviceIdentifierForVendor;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSString *)bundleVersion;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setVendorName:(NSString *)arg1 ;
-(id)initWithLaunchServicesApplication:(id)arg1 containerPath:(id)arg2 ;
-(void)setAccountDSID:(NSNumber *)arg1 ;
-(void)setBundleShortVersionString:(NSString *)arg1 ;
-(void)setContainerPath:(NSString *)arg1 ;
-(void)_loadMetadataFromContainer:(id)arg1 ;
-(void)setHasMIDBasedSINF:(BOOL)arg1 ;
-(void)setMissingRequiredSINF:(BOOL)arg1 ;
-(BOOL)didCheckLaunchProhibited;
-(void)setDidCheckLaunchProhibited:(BOOL)arg1 ;
-(void)setItemName:(NSString *)arg1 ;
-(id)initWithLaunchServicesApplication:(id)arg1 ;
-(void)resetVPPStateFlags;
-(unsigned long long)vppStateFlags;
-(id)ITunesMetadataDictionary;
-(void)setDeviceIdentifierForVendor:(NSString *)arg1 ;
-(NSDate *)receiptExpirationDate;
-(unsigned long long)removableStatus;
-(void)setStoreFrontIdentifier:(NSNumber *)arg1 ;
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSNumber *)accountDSID;
-(NSString *)bundleShortVersionString;
-(NSString *)softwareType;
-(NSArray *)versionOrdering;
-(void)setSoftwareType:(NSString *)arg1 ;
-(void)setVersionIdentifier:(NSNumber *)arg1 ;
-(void)setVersionOrdering:(NSArray *)arg1 ;
-(NSNumber *)itemIdentifier;
-(void)setItemIdentifier:(NSNumber *)arg1 ;
-(BOOL)isPlaceholder;
-(BOOL)isBeta;
-(BOOL)isLaunchProhibited;
-(NSNumber *)versionIdentifier;
-(NSNumber *)storeFrontIdentifier;
-(void)setContentRating:(SSItemContentRating *)arg1 ;
-(SSItemContentRating *)contentRating;
-(NSString *)accountIdentifier;
-(void)setAccountIdentifier:(NSString *)arg1 ;
-(NSString *)containerPath;
-(NSString *)vendorName;
@end

