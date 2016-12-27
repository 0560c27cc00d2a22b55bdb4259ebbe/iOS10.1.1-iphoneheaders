/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCTransferBatchOperation.h>

@class BRCClientZone;

@interface BRCUploadBatchOperation : BRCTransferBatchOperation {

	BRCClientZone* _clientZone;
	/*^block*/id _perUploadCompletionBlock;

}

@property (copy) id perUploadCompletionBlock;              //@synthesize perUploadCompletionBlock=_perUploadCompletionBlock - In the implementation block
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)createActivity;
-(id)perUploadCompletionBlock;
-(void)_uploadRecordsByID:(id)arg1 ;
-(void)setPerUploadCompletionBlock:(id)arg1 ;
-(id)initWithSyncContext:(id)arg1 clientZone:(id)arg2 ;
-(void)addItem:(id)arg1 stageID:(id)arg2 record:(id)arg3 transferSize:(unsigned long long)arg4 ;
-(void)sendTransferCompletionCallBack:(id)arg1 error:(id)arg2 ;
-(void)mainWithTransfers:(id)arg1 ;
-(id)actionPrettyName;
@end

