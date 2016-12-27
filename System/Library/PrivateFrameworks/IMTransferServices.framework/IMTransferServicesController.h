/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/IMTransferServices.framework/IMTransferServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IMTransferServicesController : NSObject
+(id)sharedInstance;
-(void)_sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 retries:(int)arg5 progressBlock:(/*^block*/id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)_receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 retries:(int)arg8 fileSize:(unsigned long long)arg9 progressBlock:(/*^block*/id)arg10 completionBlock:(/*^block*/id)arg11 ;
-(void)sendFilePath:(id)arg1 topic:(id)arg2 transferID:(id)arg3 encryptFile:(BOOL)arg4 progressBlock:(/*^block*/id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)receiveFileTransfer:(id)arg1 topic:(id)arg2 path:(id)arg3 requestURLString:(id)arg4 ownerID:(id)arg5 signature:(id)arg6 decryptionKey:(id)arg7 fileSize:(unsigned long long)arg8 progressBlock:(/*^block*/id)arg9 completionBlock:(/*^block*/id)arg10 ;
@end

