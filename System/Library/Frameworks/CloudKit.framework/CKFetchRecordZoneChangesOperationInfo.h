/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperationInfo.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDictionary;

@interface CKFetchRecordZoneChangesOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {

	BOOL _shouldFetchAssetContents;
	BOOL _fetchAllChanges;
	NSArray* _recordZoneIDs;
	NSDictionary* _optionsByRecordZoneID;
	long long _changeTypes;

}

@property (nonatomic,retain) NSArray * recordZoneIDs;                           //@synthesize recordZoneIDs=_recordZoneIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * optionsByRecordZoneID;              //@synthesize optionsByRecordZoneID=_optionsByRecordZoneID - In the implementation block
@property (assign,nonatomic) BOOL shouldFetchAssetContents;                     //@synthesize shouldFetchAssetContents=_shouldFetchAssetContents - In the implementation block
@property (assign,nonatomic) long long changeTypes;                             //@synthesize changeTypes=_changeTypes - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                              //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)shouldFetchAssetContents;
-(long long)changeTypes;
-(void)setChangeTypes:(long long)arg1 ;
-(void)setShouldFetchAssetContents:(BOOL)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(NSArray *)recordZoneIDs;
-(NSDictionary *)optionsByRecordZoneID;
-(BOOL)fetchAllChanges;
-(void)setRecordZoneIDs:(NSArray *)arg1 ;
-(void)setOptionsByRecordZoneID:(NSDictionary *)arg1 ;
@end

