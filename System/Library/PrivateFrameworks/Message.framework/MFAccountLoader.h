/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MFAccountLoader : NSObject
+(Class)accountClassForPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(Class)_accountClassForString:(id)arg1 error:(id*)arg2 ;
+(BOOL)loadBundleForAccountClassString:(id)arg1 error:(id*)arg2 ;
+(id)_bundlePathForAccountClassString:(id)arg1 ;
+(id)accountWithPersistentAccount:(id)arg1 error:(id*)arg2 ;
+(id)accountWithAccountTypeIdentifier:(id)arg1 error:(id*)arg2 ;
@end

