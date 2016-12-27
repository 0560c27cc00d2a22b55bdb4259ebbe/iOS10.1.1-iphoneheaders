/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface ICUserSpecificRecordID : NSObject {

	NSString* _recordType;
	NSString* _shareOwnerName;
	long long _databaseScope;
	NSString* _zoneName;
	NSString* _userSpecificOwnerName;
	NSString* _sharedRecordName;

}

@property (nonatomic,retain) NSString * recordType;                         //@synthesize recordType=_recordType - In the implementation block
@property (nonatomic,retain) NSString * shareOwnerName;                     //@synthesize shareOwnerName=_shareOwnerName - In the implementation block
@property (assign,nonatomic) long long databaseScope;                       //@synthesize databaseScope=_databaseScope - In the implementation block
@property (nonatomic,retain) NSString * zoneName;                           //@synthesize zoneName=_zoneName - In the implementation block
@property (nonatomic,retain) NSString * userSpecificOwnerName;              //@synthesize userSpecificOwnerName=_userSpecificOwnerName - In the implementation block
@property (nonatomic,retain) NSString * sharedRecordName;                   //@synthesize sharedRecordName=_sharedRecordName - In the implementation block
+(id)userSpecificRecordTypeFromSharedRecordType:(id)arg1 ;
+(BOOL)isUserSpecificRecordType:(id)arg1 ;
+(BOOL)isUserSpecificRecordID:(id)arg1 ;
-(id)recordID;
-(void)setZoneName:(NSString *)arg1 ;
-(void)setShareOwnerName:(NSString *)arg1 ;
-(void)setUserSpecificOwnerName:(NSString *)arg1 ;
-(void)setSharedRecordName:(NSString *)arg1 ;
-(NSString *)userSpecificOwnerName;
-(NSString *)shareOwnerName;
-(NSString *)sharedRecordName;
-(id)initWithRecordType:(id)arg1 shareOwnerName:(id)arg2 databaseScope:(long long)arg3 zoneName:(id)arg4 userSpecificOwnerName:(id)arg5 sharedRecordName:(id)arg6 ;
-(id)sharedRecordType;
-(id)sharedRecordID;
-(void)setDatabaseScope:(long long)arg1 ;
-(NSString *)recordType;
-(long long)databaseScope;
-(NSString *)zoneName;
-(void)setRecordType:(NSString *)arg1 ;
-(id)recordName;
-(id)initWithRecordName:(id)arg1 ;
@end

