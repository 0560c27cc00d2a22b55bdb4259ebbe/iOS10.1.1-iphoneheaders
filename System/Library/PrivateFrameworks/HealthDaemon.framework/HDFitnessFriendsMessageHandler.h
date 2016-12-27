/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HDFitnessFriendsMessageHandler : NSObject {

	Class _protobufClass;
	SEL _handleReceiveMessageAction;
	SEL _handleErrorSendingMessageAction;

}

@property (assign,nonatomic) Class protobufClass;                              //@synthesize protobufClass=_protobufClass - In the implementation block
@property (assign,nonatomic) SEL handleReceiveMessageAction;                   //@synthesize handleReceiveMessageAction=_handleReceiveMessageAction - In the implementation block
@property (assign,nonatomic) SEL handleErrorSendingMessageAction;              //@synthesize handleErrorSendingMessageAction=_handleErrorSendingMessageAction - In the implementation block
-(Class)protobufClass;
-(void)setProtobufClass:(Class)arg1 ;
-(SEL)handleReceiveMessageAction;
-(void)setHandleReceiveMessageAction:(SEL)arg1 ;
-(SEL)handleErrorSendingMessageAction;
-(void)setHandleErrorSendingMessageAction:(SEL)arg1 ;
@end

