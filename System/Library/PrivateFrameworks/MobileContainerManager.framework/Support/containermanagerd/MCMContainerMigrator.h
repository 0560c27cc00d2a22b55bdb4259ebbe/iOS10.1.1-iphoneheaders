/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileContainerManager.framework/Support/containermanagerd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MCMContainerMigrator : NSObject
+(id)sharedInstance;
-(BOOL)_performBundleContainerOwnershipMigrationWithError:(id*)arg1 ;
-(BOOL)_performWhitelistMigrationWithError:(id*)arg1 ;
-(void)_checkIfDeviceMayNeedSystemContainerACLMigration:(id)arg1 ;
-(BOOL)_performInternalACLMigrationWithError:(id*)arg1 ;
-(BOOL)performSynchronousBuildUpgradeMigration:(id)arg1 withError:(id*)arg2 ;
-(BOOL)performDataMigratorMigrationWithError:(id*)arg1 ;
@end

