/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameCenterFoundation/GameCenterFoundation-Structs.h>
@interface GKReachability : NSObject {

	BOOL localWiFiRef;
	SCNetworkReachabilityRef reachabilityRef;

}
+(id)_gkReachabilityWithAddress:(const sockaddr_in*)arg1 ;
+(id)_gkReachabilityWithHostName:(id)arg1 ;
+(id)_gkReachabilityForInternetConnection;
+(id)_gkReachabilityForLocalWiFi;
-(void)dealloc;
-(void)_gkStopNotifier;
-(BOOL)_gkStartNotifier;
-(BOOL)_gkConnectionRequired;
-(int)_gkCurrentReachabilityStatus;
-(int)localWiFiStatusForFlags:(unsigned)arg1 ;
-(int)networkStatusForFlags:(unsigned)arg1 ;
@end

