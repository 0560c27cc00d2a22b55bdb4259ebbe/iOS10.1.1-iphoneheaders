/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTAbstractIDSDevice <NSObject>
@property (nonatomic,readonly) BOOL isDefaultPairedDevice; 
@property (nonatomic,readonly) BOOL isNearby; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (nonatomic,readonly) BOOL isCloudReachable; 
@required
-(BOOL)isConnected;
-(BOOL)isCloudReachable;
-(BOOL)isDefaultPairedDevice;
-(BOOL)isNearby;

@end

