/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUnlockClientProtocol <NSObject>
@required
-(void)keyDeviceLocked:(id)arg1;
-(void)enabledDevice:(id)arg1;
-(void)failedToEnableDevice:(id)arg1 error:(id)arg2;
-(void)beganAttemptWithDevice:(id)arg1;
-(void)completedUnlockWithDevice:(id)arg1;
-(void)failedUnlockWithError:(id)arg1;

@end

