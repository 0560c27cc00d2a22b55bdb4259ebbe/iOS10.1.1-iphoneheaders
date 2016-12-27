/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, HAPOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshotData : NSObject {

	NSData* _snapshotData;
	HAPOSTransaction* _snapshotDataTrasaction;
	HMDVideoResolution* _videoResolution;

}

@property (nonatomic,readonly) NSData * snapshotData;                                  //@synthesize snapshotData=_snapshotData - In the implementation block
@property (nonatomic,readonly) HAPOSTransaction * snapshotDataTrasaction;              //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (nonatomic,readonly) HMDVideoResolution * videoResolution;                   //@synthesize videoResolution=_videoResolution - In the implementation block
-(void)dealloc;
-(HMDVideoResolution *)videoResolution;
-(HAPOSTransaction *)snapshotDataTrasaction;
-(id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3 ;
-(NSData *)snapshotData;
@end

