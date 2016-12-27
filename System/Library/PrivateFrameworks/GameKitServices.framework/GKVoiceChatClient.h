/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GKVoiceChatClient <NSObject>
@optional
-(void)voiceChatService:(id)arg1 didReceiveInvitationFromParticipantID:(id)arg2 callID:(unsigned)arg3;
-(void)voiceChatService:(id)arg1 didStartWithParticipantID:(id)arg2;
-(void)voiceChatService:(id)arg1 didNotStartWithParticipantID:(id)arg2 error:(id)arg3;
-(void)voiceChatService:(id)arg1 didStopWithParticipantID:(id)arg2 error:(id)arg3;
-(void)voiceChatService:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;

@required
-(id)participantID;
-(void)voiceChatService:(id)arg1 sendData:(id)arg2 toParticipantID:(id)arg3;

@end

