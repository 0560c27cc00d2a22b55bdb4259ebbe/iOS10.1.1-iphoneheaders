/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/identityservicesd.app/identityservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol IDSSocketPairConnectionDelegate <NSObject>
@optional
-(void)connectionDidReachInFlightMessageLowWaterMark:(id)arg1;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 withIdentifier:(unsigned)arg3;
-(void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;
-(void)connectionDidReceiveBytes:(id)arg1;
-(void)connectionBecameEmpty:(id)arg1;
-(void)connectionDidClose:(id)arg1;

@end

