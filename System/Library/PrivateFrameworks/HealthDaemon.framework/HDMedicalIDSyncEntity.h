/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>

@class NSString;

@interface HDMedicalIDSyncEntity : NSObject <HDNanoSyncEntity, HDSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)syncEntityType;
+(BOOL)generateSyncObjectsForStore:(id)arg1 predicate:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 maxEncodedBytesPerMessage:(long long)arg4 profile:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
+(long long)nextSyncAnchorWithStore:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)syncEntityDependencies;
+(int)nanoSyncObjectType;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(long long)_getCurrentSyncAnchorWithProfile:(id)arg1 error:(id*)arg2 ;
+(BOOL)_setSyncAnchor:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_codableFromMedicalID:(id)arg1 ;
+(id)_medicalIDFromCodable:(id)arg1 ;
+(BOOL)incrementSyncAnchorWithProfile:(id)arg1 error:(id*)arg2 ;
@end

