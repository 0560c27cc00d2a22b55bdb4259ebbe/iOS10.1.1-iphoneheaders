/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPRecordZoneIdentifier;

@interface CKDPZoneDeleteRequest : PBRequest <NSCopying> {

	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _userPurge;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;              //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasUserPurge; 
@property (assign,nonatomic) BOOL userPurge;                                         //@synthesize userPurge=_userPurge - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(void)setUserPurge:(BOOL)arg1 ;
-(void)setHasUserPurge:(BOOL)arg1 ;
-(BOOL)hasUserPurge;
-(BOOL)userPurge;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
@end

