/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface RadioNetworkObserver : NSObject {

	long long _networkUsageCount;
	NSObject*<OS_dispatch_queue> _networkUsageQueue;

}

@property (nonatomic,readonly) BOOL isUsingNetwork; 
@property (nonatomic,readonly) BOOL isCellularNetworkingAllowed; 
+(id)sharedNetworkObserver;
-(id)init;
-(void)dealloc;
-(id)_init;
-(void)_cellularNetworkAllowedDidChangeNotification:(id)arg1 ;
-(void)beginUsingNetwork;
-(void)endUsingNetwork;
-(BOOL)isUsingNetwork;
-(BOOL)isCellularNetworkingAllowed;
@end

