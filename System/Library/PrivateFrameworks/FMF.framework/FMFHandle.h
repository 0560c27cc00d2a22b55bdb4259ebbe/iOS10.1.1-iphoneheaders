/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber, NSArray, NSDictionary;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isFamilyMember;
	BOOL _pending;
	BOOL _reachable;
	NSString* _identifier;
	NSString* _serverId;
	NSNumber* _dsid;
	NSArray* _aliasServerIds;
	NSArray* _invitationSentToIds;
	NSDictionary* _expiresByGroupId;
	NSString* _hashedDSID;
	NSNumber* _trackingTimestamp;
	NSNumber* _favoriteOrder;
	NSString* __prettyNameInternal;
	long long _idsStatus;
	NSString* _qualifiedIdentifier;

}

@property (nonatomic,copy) NSString * identifier;                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * serverId;                          //@synthesize serverId=_serverId - In the implementation block
@property (nonatomic,copy) NSNumber * dsid;                              //@synthesize dsid=_dsid - In the implementation block
@property (assign,nonatomic) BOOL isFamilyMember;                        //@synthesize isFamilyMember=_isFamilyMember - In the implementation block
@property (nonatomic,copy) NSArray * aliasServerIds;                     //@synthesize aliasServerIds=_aliasServerIds - In the implementation block
@property (nonatomic,copy) NSArray * invitationSentToIds;                //@synthesize invitationSentToIds=_invitationSentToIds - In the implementation block
@property (nonatomic,copy) NSDictionary * expiresByGroupId;              //@synthesize expiresByGroupId=_expiresByGroupId - In the implementation block
@property (nonatomic,copy) NSString * hashedDSID;                        //@synthesize hashedDSID=_hashedDSID - In the implementation block
@property (assign,getter=isPending,nonatomic) BOOL pending;              //@synthesize pending=_pending - In the implementation block
@property (nonatomic,copy) NSNumber * trackingTimestamp;                 //@synthesize trackingTimestamp=_trackingTimestamp - In the implementation block
@property (nonatomic,copy) NSNumber * favoriteOrder;                     //@synthesize favoriteOrder=_favoriteOrder - In the implementation block
@property (nonatomic,copy) NSString * _prettyNameInternal;               //@synthesize _prettyNameInternal=__prettyNameInternal - In the implementation block
@property (assign,nonatomic) long long idsStatus;                        //@synthesize idsStatus=_idsStatus - In the implementation block
@property (assign,nonatomic) BOOL reachable;                             //@synthesize reachable=_reachable - In the implementation block
@property (nonatomic,copy) NSString * qualifiedIdentifier;               //@synthesize qualifiedIdentifier=_qualifiedIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)handleWithId:(id)arg1 ;
+(id)handleWithId:(id)arg1 serverId:(id)arg2 ;
+(id)familyHandleWithId:(id)arg1 dsid:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)prettyName;
-(void)setPending:(BOOL)arg1 ;
-(NSString *)serverId;
-(BOOL)isPhoneNumber;
-(void)setServerId:(NSString *)arg1 ;
-(NSNumber *)dsid;
-(void)setDsid:(NSNumber *)arg1 ;
-(BOOL)isPending;
-(void)set_prettyNameInternal:(NSString *)arg1 ;
-(void)setQualifiedIdentifier:(NSString *)arg1 ;
-(void)setIdsStatus:(long long)arg1 ;
-(void)setTrackingTimestamp:(NSNumber *)arg1 ;
-(void)setIsFamilyMember:(BOOL)arg1 ;
-(NSDictionary *)expiresByGroupId;
-(void)setExpiresByGroupId:(NSDictionary *)arg1 ;
-(NSNumber *)trackingTimestamp;
-(NSNumber *)favoriteOrder;
-(void)setFavoriteOrder:(NSNumber *)arg1 ;
-(long long)idsStatus;
-(NSString *)qualifiedIdentifier;
-(NSString *)_prettyNameInternal;
-(void)abPreferencesDidChange;
-(void)setICloudId:(id)arg1 ;
-(BOOL)isSharingThroughGroupId:(id)arg1 ;
-(void)clearFavoriteOrder;
-(NSArray *)aliasServerIds;
-(void)setAliasServerIds:(NSArray *)arg1 ;
-(NSArray *)invitationSentToIds;
-(void)setInvitationSentToIds:(NSArray *)arg1 ;
-(NSString *)hashedDSID;
-(long long)prettyNameCompare:(id)arg1 ;
-(void)setHashedDSID:(NSString *)arg1 ;
-(BOOL)isFamilyMember;
-(void)addressBookDidChange;
-(id)recordId;
-(void)setReachable:(BOOL)arg1 ;
-(BOOL)reachable;
@end

