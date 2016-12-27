/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceClientDelegate;
@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint {

	id<NNMKMessagesSyncServiceClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NNMKMessagesSyncServiceClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<NNMKMessagesSyncServiceClientDelegate>)arg1 ;
-(id<NNMKMessagesSyncServiceClientDelegate>)delegate;
-(id)initWithQueue:(id)arg1 ;
-(id)sendMessage:(id)arg1 ;
-(id)deleteMessages:(id)arg1 ;
-(void)successfullySentProtobufWithIDSIdentifier:(id)arg1 ;
-(void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2 ;
-(void)readProtobufData:(id)arg1 type:(unsigned long long)arg2 ;
-(id)updateMessagesStatus:(id)arg1 ;
-(void)warnMessagesFilteredOut:(id)arg1 ;
-(void)requestCompactMessages:(id)arg1 ;
-(void)connectivityChanged;
@end

