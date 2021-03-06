/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKRecordZoneID, CKContainerID, CKServerChangeToken, NSData, NSString;

@interface CKRecordZone : NSObject <NSSecureCoding, NSCopying> {

	int _deviceCount;
	CKRecordZoneID* _zoneID;
	unsigned long long _capabilities;
	CKContainerID* _containerID;
	CKServerChangeToken* _currentServerChangeToken;
	NSData* _clientChangeToken;
	NSData* _protectionData;
	NSString* _protectionEtag;
	NSString* _previousProtectionEtag;
	long long _assetQuotaUsage;
	long long _metadataQuotaUsage;

}

@property (nonatomic,copy) CKContainerID * containerID;                                   //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,retain) CKRecordZoneID * zoneID;                                     //@synthesize zoneID=_zoneID - In the implementation block
@property (assign,nonatomic) unsigned long long capabilities;                             //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) int deviceCount;                                             //@synthesize deviceCount=_deviceCount - In the implementation block
@property (nonatomic,readonly) NSData * currentServerContinuationToken; 
@property (nonatomic,retain) CKServerChangeToken * currentServerChangeToken;              //@synthesize currentServerChangeToken=_currentServerChangeToken - In the implementation block
@property (nonatomic,retain) NSData * clientChangeToken;                                  //@synthesize clientChangeToken=_clientChangeToken - In the implementation block
@property (nonatomic,retain) NSData * protectionData;                                     //@synthesize protectionData=_protectionData - In the implementation block
@property (nonatomic,retain) NSString * protectionEtag;                                   //@synthesize protectionEtag=_protectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousProtectionEtag;                           //@synthesize previousProtectionEtag=_previousProtectionEtag - In the implementation block
@property (assign,nonatomic) long long assetQuotaUsage;                                   //@synthesize assetQuotaUsage=_assetQuotaUsage - In the implementation block
@property (assign,nonatomic) long long metadataQuotaUsage;                                //@synthesize metadataQuotaUsage=_metadataQuotaUsage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)defaultRecordZone;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKContainerID *)containerID;
-(id)CKPropertiesToDescribe:(BOOL)arg1 ;
-(id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2 ;
-(void)setDeviceCount:(int)arg1 ;
-(int)deviceCount;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(CKServerChangeToken *)currentServerChangeToken;
-(id)CKPropertiesDescription;
-(void)setProtectionData:(NSData *)arg1 ;
-(void)setProtectionEtag:(NSString *)arg1 ;
-(NSData *)protectionData;
-(NSString *)protectionEtag;
-(void)setPreviousProtectionEtag:(NSString *)arg1 ;
-(NSString *)previousProtectionEtag;
-(void)setAssetQuotaUsage:(long long)arg1 ;
-(void)setMetadataQuotaUsage:(long long)arg1 ;
-(NSData *)currentServerContinuationToken;
-(long long)assetQuotaUsage;
-(long long)metadataQuotaUsage;
-(void)setCurrentServerChangeToken:(CKServerChangeToken *)arg1 ;
-(id)initWithZoneID:(id)arg1 ;
-(unsigned long long)capabilities;
-(void)setCapabilities:(unsigned long long)arg1 ;
-(CKRecordZoneID *)zoneID;
-(id)initWithZoneName:(id)arg1 ;
-(void)setZoneID:(CKRecordZoneID *)arg1 ;
-(void)setClientChangeToken:(NSData *)arg1 ;
-(NSData *)clientChangeToken;
@end

