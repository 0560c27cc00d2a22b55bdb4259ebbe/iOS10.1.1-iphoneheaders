/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity;
@class NSObject, SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	long long state;

}
-(long long)state;
-(void)setState:(long long)arg1 ;
-(unsigned long long)protocolVersion;
-(BOOL)isResetSync;
-(void)cancelWithError:(id)arg1 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(BOOL)isSending;
-(void)didCompleteSession;
-(void)_sendComplete;
-(void)_sendChanges;
-(void)_sendCancelled;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)wasCancelled;
@end
