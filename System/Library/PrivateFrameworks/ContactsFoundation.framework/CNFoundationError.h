/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CNFoundationError : NSObject
+(BOOL)isCanceledError:(id)arg1 ;
+(id)errorWithErrno;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)errorWithErrno:(int)arg1 userInfo:(id)arg2 ;
+(id)ifResultIsNil:(id)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 withBlock:(/*^block*/id)arg3 ;
+(BOOL)isTimeoutError:(id)arg1 ;
+(BOOL)isFileNotFoundError:(id)arg1 ;
+(BOOL)isCertificateError:(id)arg1 ;
+(id)errorWithErrno:(int)arg1 ;
+(id)errorWithErrnoAndUserInfo:(id)arg1 ;
+(id)errorWithCode:(unsigned long long)arg1 userInfo:(id)arg2 ;
+(BOOL)isError:(id)arg1 errorWithDomain:(id)arg2 code:(long long)arg3 ;
+(BOOL)ifResultIsNo:(BOOL)arg1 setOutputError:(id*)arg2 toError:(id)arg3 ;
+(id)timeoutError;
@end

