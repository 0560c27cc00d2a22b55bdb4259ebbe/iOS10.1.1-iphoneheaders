/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WPTransferDelegate <NSObject>
@required
-(void)transferDidUpdateAdvertiserState:(id)arg1;
-(void)transferDidUpdateScannerState:(id)arg1;
-(id)transferDidReceiveData:(id)arg1;
-(void)transferDidFailWithError:(id)arg1;
-(void)transferDidFailToStartAdvertising:(id)arg1;
-(void)transferDidFailToStartScanning:(id)arg1;
-(void)transferComplete;

@end

