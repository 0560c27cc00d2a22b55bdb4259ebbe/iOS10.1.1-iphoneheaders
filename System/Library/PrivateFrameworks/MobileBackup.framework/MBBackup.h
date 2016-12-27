/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileBackup/MobileBackup-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSArray;

@interface MBBackup : NSObject <NSCopying, NSCoding> {

	NSString* _backupUDID;
	NSString* _deviceClass;
	NSString* _productType;
	NSString* _hardwareModel;
	NSString* _marketingName;
	NSArray* _snapshots;
	BOOL _restoreSystemFiles;
	BOOL _isMBSBackup;
	NSString* _backupUUID;

}

@property (nonatomic,readonly) NSString * backupUDID;                                             //@synthesize backupUDID=_backupUDID - In the implementation block
@property (nonatomic,readonly) NSString * backupUUID;                                             //@synthesize backupUUID=_backupUUID - In the implementation block
@property (nonatomic,readonly) NSString * backupUUIDSansPrefix; 
@property (nonatomic,readonly) NSString * deviceClass;                                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * productType;                                            //@synthesize productType=_productType - In the implementation block
@property (nonatomic,readonly) NSString * hardwareModel;                                          //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) NSString * marketingName;                                          //@synthesize marketingName=_marketingName - In the implementation block
@property (nonatomic,readonly) NSArray * snapshots;                                               //@synthesize snapshots=_snapshots - In the implementation block
@property (getter=canRestoreSystemFiles,nonatomic,readonly) BOOL restoreSystemFiles;              //@synthesize restoreSystemFiles=_restoreSystemFiles - In the implementation block
@property (nonatomic,readonly) BOOL isMBSBackup;                                                  //@synthesize isMBSBackup=_isMBSBackup - In the implementation block
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)snapshots;
-(NSString *)hardwareModel;
-(NSString *)backupUUID;
-(id)initWithBackupUDID:(id)arg1 backupUUID:(id)arg2 deviceClass:(id)arg3 productType:(id)arg4 hardwareModel:(id)arg5 marketingName:(id)arg6 snapshots:(id)arg7 restoreSystemFiles:(BOOL)arg8 isMBSBackup:(BOOL)arg9 ;
-(NSString *)backupUDID;
-(NSString *)backupUUIDSansPrefix;
-(NSString *)marketingName;
-(BOOL)canRestoreSystemFiles;
-(BOOL)isMBSBackup;
-(NSString *)productType;
-(NSString *)deviceClass;
@end

