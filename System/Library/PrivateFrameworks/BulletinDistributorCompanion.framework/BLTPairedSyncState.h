/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BLTPairedSyncState : NSObject {

	BOOL _initialSyncComplete;
	unsigned long long _state;

}

@property (assign,nonatomic) unsigned long long state;                                             //@synthesize state=_state - In the implementation block
@property (getter=isTrafficRestricted,nonatomic,readonly) BOOL trafficRestricted; 
@property (getter=isSyncRestricted,nonatomic,readonly) BOOL syncRestricted; 
@property (getter=isInitialSyncComplete,nonatomic,readonly) BOOL initialSyncComplete;              //@synthesize initialSyncComplete=_initialSyncComplete - In the implementation block
+(id)sharedInstance;
-(BOOL)isInitialSyncComplete;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)setInitialSyncComplete:(BOOL)arg1 ;
-(void)leaveState:(unsigned long long)arg1 ;
-(BOOL)becameTrafficUnrestricted:(id)arg1 ;
-(BOOL)isTrafficRestricted;
-(BOOL)isSyncRestricted;
-(BOOL)becameSyncUnrestricted:(id)arg1 ;
@end

