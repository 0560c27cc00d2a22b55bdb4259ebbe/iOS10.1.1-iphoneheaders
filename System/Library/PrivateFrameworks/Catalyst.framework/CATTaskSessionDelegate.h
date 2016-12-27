/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATTaskSessionDelegate <NSObject>
@optional
-(void)session:(id)arg1 enqueueOperation:(id)arg2;
-(void)session:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
-(void)sessionDidConnect:(id)arg1;
-(void)session:(id)arg1 didInterruptWithError:(id)arg2;
-(void)sessionDidDisconnect:(id)arg1;
-(void)sessionWillInvalidate:(id)arg1;
-(void)sessionDidInvalidate:(id)arg1;

@required
-(id)session:(id)arg1 prepareOperationForRequest:(id)arg2 error:(id*)arg3;
-(BOOL)session:(id)arg1 shouldAcceptConnectionFromTransport:(id)arg2;

@end
