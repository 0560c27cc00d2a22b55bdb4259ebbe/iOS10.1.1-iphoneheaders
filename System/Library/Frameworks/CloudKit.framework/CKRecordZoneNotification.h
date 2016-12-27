/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKNotification.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CKRecordZoneID;

@interface CKRecordZoneNotification : CKNotification <NSSecureCoding> {

	CKRecordZoneID* _recordZoneID;
	long long _databaseScope;

}

@property (nonatomic,copy) CKRecordZoneID * recordZoneID;              //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (assign,nonatomic) long long databaseScope;                  //@synthesize databaseScope=_databaseScope - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRemoteNotificationDictionary:(id)arg1 ;
-(void)setDatabaseScope:(long long)arg1 ;
-(id)CKPropertiesDescription;
-(long long)databaseScope;
-(CKRecordZoneID *)recordZoneID;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
@end

