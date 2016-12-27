/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BLTSettingsSendSerializerDelegate;
@interface BLTSettingsSendSerializerPassthrough : NSObject {

	id<BLTSettingsSendSerializerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BLTSettingsSendSerializerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<BLTSettingsSendSerializerDelegate>)arg1 ;
-(id<BLTSettingsSendSerializerDelegate>)delegate;
-(void)handleFileURL:(id)arg1 ;
-(void)sendRequest:(id)arg1 type:(unsigned short)arg2 withTimeout:(id)arg3 withDescription:(id)arg4 onlyOneFor:(id)arg5 didSend:(/*^block*/id)arg6 andResponse:(/*^block*/id)arg7 spoolToFile:(BOOL)arg8 ;
-(void)sendNowWithSent:(/*^block*/id)arg1 withAcknowledgement:(/*^block*/id)arg2 withTimeout:(id)arg3 ;
@end

