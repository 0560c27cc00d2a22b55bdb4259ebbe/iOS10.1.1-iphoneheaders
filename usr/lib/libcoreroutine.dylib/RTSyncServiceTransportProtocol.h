/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTSyncServiceTransportProtocol <NSObject>
@required
-(id)devices;
-(void)establishLink:(/*^block*/id)arg1;
-(void)sendMessage:(id)arg1 recipients:(id)arg2 handler:(/*^block*/id)arg3;
-(void)invalidateLink:(/*^block*/id)arg1;
-(long long)linkState;

@end

