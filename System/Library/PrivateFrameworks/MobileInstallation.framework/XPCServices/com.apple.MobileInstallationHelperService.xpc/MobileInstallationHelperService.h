/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/XPCServices/com.apple.MobileInstallationHelperService.xpc/com.apple.MobileInstallationHelperService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <com.apple.MobileInstallationHelperService/MobileInstallationHelperServiceProtocol.h>

@class NSXPCConnection;

@interface MobileInstallationHelperService : NSObject <MobileInstallationHelperServiceProtocol> {

	NSXPCConnection* _xpcConnection;

}

@property (assign,nonatomic,__weak) NSXPCConnection * xpcConnection;              //@synthesize xpcConnection=_xpcConnection - In the implementation block
-(void)migrateMobileContentWithCompletion:(/*^block*/id)arg1 ;
-(void)migrateSystemAppDataWithCompletion:(/*^block*/id)arg1 ;
-(void)wipeStagingRootWithCompletion:(/*^block*/id)arg1 ;
-(void)stageItemAtURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)makeSymlinkFromAppDataContainerToBundleForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)createSafeHarborWithIdentifier:(id)arg1 containerType:(long long)arg2 andMigrateDataFrom:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)createAppSnapshotWithBundleID:(id)arg1 snapshotToURL:(id)arg2 onlyV1AppIfPresent:(BOOL)arg3 placeholderOnly:(BOOL)arg4 completion:(/*^block*/id)arg5 ;
-(unsigned long long)_changeOwnerTo:(unsigned)arg1 atURL:(id)arg2 ;
-(BOOL)_moveAndUpdateOwnershipFromURL:(id)arg1 toURL:(id)arg2 withError:(id*)arg3 ;
-(void)_writeMigrationFileToDiskAtURL:(id)arg1 ;
-(id)_asUser:(unsigned)arg1 runSyncBlock:(/*^block*/id)arg2 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

