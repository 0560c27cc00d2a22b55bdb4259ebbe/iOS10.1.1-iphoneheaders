/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/appstored.bundle/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface DaemonDatabaseSchema : NSObject
+(id)_containerURL;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg1 ;
+(BOOL)_addSkipBackupAttributeToItemAtURL:(id)arg1 ;
+(void)createFunctionsInDatabase:(id)arg1 ;
+(id)scratchPath;
+(BOOL)_migrateToCurrentUserVersionUsingDatabase:(id)arg1 ;
+(void)createSchemaInDatabase:(id)arg1 ;
+(id)databasePath;
@end

