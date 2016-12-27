/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface APSFileLogging : NSObject
+(id)getMainBundleId;
+(void)initialize;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 arguments:(char*)arg6 ;
+(void)logString:(id)arg1 toFolder:(id)arg2 toFileNamed:(id)arg3 ;
+(id)logFileDirectory;
+(BOOL)loggingEnabledForLevel:(int)arg1 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 insertProcessInfo:(BOOL)arg4 format:(id)arg5 ;
+(void)logAtLevel:(int)arg1 type:(id)arg2 category:(id)arg3 format:(id)arg4 arguments:(char*)arg5 ;
+(id)timeFormatter;
+(id)dateFormatter;
@end

