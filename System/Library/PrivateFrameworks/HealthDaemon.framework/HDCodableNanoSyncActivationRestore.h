/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/HDNanoSyncDescription.h>
#import <libobjc.A.dylib/HDNanoSyncPersistentUserInfoCopying.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSMutableArray;

@interface HDCodableNanoSyncActivationRestore : PBCodable <HDNanoSyncDescription, HDNanoSyncPersistentUserInfoCopying, NSCopying> {

	long long _sequenceNumber;
	NSString* _defaultSourceBundleIdentifier;
	NSData* _restoreIdentifier;
	NSMutableArray* _restores;
	int _statusCode;
	SCD_Struct_HD18 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL hasRestoreIdentifier; 
@property (nonatomic,retain) NSData * restoreIdentifier;                            //@synthesize restoreIdentifier=_restoreIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasSequenceNumber; 
@property (assign,nonatomic) long long sequenceNumber;                              //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign,nonatomic) BOOL hasStatusCode; 
@property (assign,nonatomic) int statusCode;                                        //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultSourceBundleIdentifier; 
@property (nonatomic,retain) NSString * defaultSourceBundleIdentifier;              //@synthesize defaultSourceBundleIdentifier=_defaultSourceBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableArray * restores;                             //@synthesize restores=_restores - In the implementation block
+(id)activationRestoreWithRestoreUUID:(id)arg1 sequenceNumber:(long long)arg2 statusCode:(int)arg3 ;
+(id)retreiveFromPersistentUserInfo:(id)arg1 ;
+(id)persistentUserInfoKey;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)statusCode;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSequenceNumber:(long long)arg1 ;
-(void)setHasSequenceNumber:(BOOL)arg1 ;
-(BOOL)hasSequenceNumber;
-(long long)sequenceNumber;
-(void)setStatusCode:(int)arg1 ;
-(void)setHasStatusCode:(BOOL)arg1 ;
-(BOOL)hasStatusCode;
-(NSMutableArray *)restores;
-(void)setRestores:(NSMutableArray *)arg1 ;
-(id)nanoSyncDescription;
-(void)setDefaultSourceBundleIdentifier:(NSString *)arg1 ;
-(id)decodedRestoreUUID;
-(BOOL)hasRequiredFields;
-(NSString *)defaultSourceBundleIdentifier;
-(void)setRestoreIdentifier:(NSData *)arg1 ;
-(BOOL)hasRestoreIdentifier;
-(void)addToPersistentUserInfo:(id)arg1 ;
-(id)copyForPersistentUserInfo;
-(void)addRestores:(id)arg1 ;
-(unsigned long long)restoresCount;
-(void)clearRestores;
-(id)restoresAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasDefaultSourceBundleIdentifier;
-(NSData *)restoreIdentifier;
@end

