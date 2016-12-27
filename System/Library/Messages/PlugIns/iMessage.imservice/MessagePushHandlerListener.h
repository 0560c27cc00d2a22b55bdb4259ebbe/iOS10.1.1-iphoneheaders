/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/PlugIns/iMessage.imservice/iMessage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MessagePushHandlerListener <NSObject>
@optional
-(void)handler:(id)arg1 messageIDSaved:(id)arg2 ofType:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 groupContext:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12;
-(void)handler:(id)arg1 incomingMessage:(id)arg2 originalEncryptionType:(id)arg3 messageID:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12 messageContext:(id)arg13 isBeingReplayed:(BOOL)arg14;
-(void)handler:(id)arg1 messageIDDelivered:(id)arg2 toIdentifier:(id)arg3 status:(id)arg4 deliveryContext:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10;
-(void)handler:(id)arg1 messageIDReflectedDelivered:(id)arg2 incomingMessage:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 status:(id)arg6 deliveryContext:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12;
-(void)handler:(id)arg1 messageIDRead:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10;
-(void)handler:(id)arg1 messageIDPlayed:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10;
-(void)handler:(id)arg1 receivedError:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11 additionalInfo:(id)arg12 shouldShowPeerErrors:(BOOL)arg13;
-(void)handler:(id)arg1 genericNotification:(id)arg2 incomingMessage:(id)arg3 userInfo:(id)arg4 toIdentifier:(id)arg5 fromIdentifier:(id)arg6 fromToken:(id)arg7 timeStamp:(id)arg8 fromIDSID:(id)arg9 needsDeliveryReceipt:(id)arg10 deliveryContext:(id)arg11 storageContext:(id)arg12;
-(void)handler:(id)arg1 locationShareInfo:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10;
-(void)handler:(id)arg1 groupMessageCommand:(id)arg2 toIdentifier:(id)arg3 fromIdentifier:(id)arg4 fromToken:(id)arg5 timeStamp:(id)arg6 fromIDSID:(id)arg7 needsDeliveryReceipt:(id)arg8 deliveryContext:(id)arg9 storageContext:(id)arg10;
-(void)handler:(id)arg1 bubblePayloadData:(id)arg2 forMessageID:(id)arg3 toIdentifier:(id)arg4 fromIdentifier:(id)arg5 fromToken:(id)arg6 timeStamp:(id)arg7 fromIDSID:(id)arg8 needsDeliveryReceipt:(id)arg9 deliveryContext:(id)arg10 storageContext:(id)arg11;
-(void)handler:(id)arg1 remoteFileRequest:(id)arg2;
-(void)handler:(id)arg1 remoteFileResponse:(id)arg2;
-(void)handler:(id)arg1 localIncommingMessage:(id)arg2;
-(void)handler:(id)arg1 localOutgoingMessage:(id)arg2;
-(void)handler:(id)arg1 localMessageDelivered:(id)arg2;
-(void)handler:(id)arg1 localMessageRead:(id)arg2;
-(void)handler:(id)arg1 payloadDataRequest:(id)arg2;
-(void)handler:(id)arg1 payloadDataResponse:(id)arg2;

@end

