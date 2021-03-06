/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMDCameraGetSnapshotProtocol;
@class HMDCameraSessionID, HMDSnapshotCompletionTimer, NSMutableArray, NSString;

@interface HMDSnapshotSession : NSObject <HMFLogging> {

	HMDCameraSessionID* _sessionID;
	id<HMDCameraGetSnapshotProtocol> _snapshotGetter;
	HMDSnapshotCompletionTimer* _snapshotCompletionTimer;
	NSMutableArray* _sessionMessages;
	unsigned long long _streamingTierType;

}

@property (nonatomic,readonly) HMDCameraSessionID * sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) id<HMDCameraGetSnapshotProtocol> snapshotGetter;                 //@synthesize snapshotGetter=_snapshotGetter - In the implementation block
@property (nonatomic,retain) HMDSnapshotCompletionTimer * snapshotCompletionTimer;              //@synthesize snapshotCompletionTimer=_snapshotCompletionTimer - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sessionMessages;                                //@synthesize sessionMessages=_sessionMessages - In the implementation block
@property (nonatomic,readonly) unsigned long long streamingTierType;                            //@synthesize streamingTierType=_streamingTierType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(void)dealloc;
-(NSString *)description;
-(HMDCameraSessionID *)sessionID;
-(unsigned long long)streamingTierType;
-(id)logIdentifier;
-(id)initWithSessionID:(id)arg1 snapshotGetter:(id)arg2 message:(id)arg3 waitPeriod:(double)arg4 streamingTierType:(unsigned long long)arg5 ;
-(NSMutableArray *)sessionMessages;
-(void)respond:(id)arg1 payload:(id)arg2 ;
-(id<HMDCameraGetSnapshotProtocol>)snapshotGetter;
-(HMDSnapshotCompletionTimer *)snapshotCompletionTimer;
-(void)setSnapshotCompletionTimer:(HMDSnapshotCompletionTimer *)arg1 ;
@end

