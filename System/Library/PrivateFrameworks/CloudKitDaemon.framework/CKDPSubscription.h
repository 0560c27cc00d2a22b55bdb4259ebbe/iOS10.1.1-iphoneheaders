/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CKDPIdentifier, CKDPSubscriptionNotification, CKDPRecordZoneIdentifier;

@interface CKDPSubscription : PBCodable <NSCopying> {

	SCD_Struct_CK20* _mutationTriggers;
	int _evaluationType;
	NSMutableArray* _filters;
	CKDPIdentifier* _identifier;
	CKDPSubscriptionNotification* _notification;
	int _owner;
	NSMutableArray* _recordTypes;
	CKDPRecordZoneIdentifier* _zoneIdentifier;
	BOOL _fireOnce;
	SCD_Struct_CK10 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) CKDPIdentifier * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasEvaluationType; 
@property (assign,nonatomic) int evaluationType;                                       //@synthesize evaluationType=_evaluationType - In the implementation block
@property (assign,nonatomic) BOOL hasOwner; 
@property (assign,nonatomic) int owner;                                                //@synthesize owner=_owner - In the implementation block
@property (nonatomic,readonly) unsigned long long mutationTriggersCount; 
@property (nonatomic,readonly) int* mutationTriggers; 
@property (nonatomic,readonly) BOOL hasNotification; 
@property (nonatomic,retain) CKDPSubscriptionNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (nonatomic,retain) NSMutableArray * filters;                                 //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) NSMutableArray * recordTypes;                             //@synthesize recordTypes=_recordTypes - In the implementation block
@property (assign,nonatomic) BOOL hasFireOnce; 
@property (assign,nonatomic) BOOL fireOnce;                                            //@synthesize fireOnce=_fireOnce - In the implementation block
@property (nonatomic,readonly) BOOL hasZoneIdentifier; 
@property (nonatomic,retain) CKDPRecordZoneIdentifier * zoneIdentifier;                //@synthesize zoneIdentifier=_zoneIdentifier - In the implementation block
+(Class)filtersType;
+(Class)recordTypesType;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(CKDPIdentifier *)identifier;
-(CKDPSubscriptionNotification *)notification;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSMutableArray *)arg1 ;
-(void)setIdentifier:(CKDPIdentifier *)arg1 ;
-(NSMutableArray *)filters;
-(int)owner;
-(void)setOwner:(int)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearFilters;
-(unsigned long long)filtersCount;
-(BOOL)hasIdentifier;
-(BOOL)hasNotification;
-(void)setNotification:(CKDPSubscriptionNotification *)arg1 ;
-(void)addRecordTypes:(id)arg1 ;
-(unsigned long long)mutationTriggersCount;
-(void)clearMutationTriggers;
-(int)mutationTriggersAtIndex:(unsigned long long)arg1 ;
-(void)addMutationTriggers:(int)arg1 ;
-(unsigned long long)recordTypesCount;
-(void)clearRecordTypes;
-(id)recordTypesAtIndex:(unsigned long long)arg1 ;
-(int)evaluationType;
-(void)setEvaluationType:(int)arg1 ;
-(void)setHasEvaluationType:(BOOL)arg1 ;
-(BOOL)hasEvaluationType;
-(id)evaluationTypeAsString:(int)arg1 ;
-(int)StringAsEvaluationType:(id)arg1 ;
-(void)setHasOwner:(BOOL)arg1 ;
-(BOOL)hasOwner;
-(id)ownerAsString:(int)arg1 ;
-(int)StringAsOwner:(id)arg1 ;
-(int*)mutationTriggers;
-(void)setMutationTriggers:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)mutationTriggersAsString:(int)arg1 ;
-(int)StringAsMutationTriggers:(id)arg1 ;
-(void)setFireOnce:(BOOL)arg1 ;
-(void)setHasFireOnce:(BOOL)arg1 ;
-(BOOL)hasFireOnce;
-(BOOL)fireOnce;
-(NSMutableArray *)recordTypes;
-(void)setRecordTypes:(NSMutableArray *)arg1 ;
-(CKDPRecordZoneIdentifier *)zoneIdentifier;
-(void)addFilters:(id)arg1 ;
-(id)filtersAtIndex:(unsigned long long)arg1 ;
-(void)setZoneIdentifier:(CKDPRecordZoneIdentifier *)arg1 ;
-(BOOL)hasZoneIdentifier;
@end

