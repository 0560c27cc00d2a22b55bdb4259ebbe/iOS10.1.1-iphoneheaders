/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFAuthScheme.h>

@interface MFCRAM_MD5AuthScheme : MFAuthScheme
-(id)name;
-(BOOL)canAuthenticateAccountClass:(Class)arg1 connection:(id)arg2 ;
-(Class)authenticatorClass;
-(BOOL)hasEncryption;
-(id)humanReadableName;
-(BOOL)sendsPlainTextPasswords;
@end

