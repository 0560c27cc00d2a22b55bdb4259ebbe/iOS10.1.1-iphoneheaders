/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, GKSessionInternal, GKRWLock;

@interface GKVoiceChatSessionListener : NSObject {

	NSMutableArray* _conferenceList;
	GKSessionInternal* _gkSession;
	GKRWLock* _rwlock;

}
-(void)dealloc;
-(id)currentSessions;
-(id)initWithSession:(id)arg1 ;
-(void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2 ;
-(void)registerNewGKVoiceChatSession:(id)arg1 ;
-(void)removeSession:(id)arg1 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
@end

