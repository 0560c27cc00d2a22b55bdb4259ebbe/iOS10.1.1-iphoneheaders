/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CloudPhotoLibrary-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSCopying, NSFastEnumeration, NSCopying> {

	NSMutableArray* _records;
	NSMutableDictionary* _additionalRecords;
	NSMutableDictionary* _localResources;
	BOOL _calculateEstimatedBatchSize;
	unsigned long long _estimatedBatchSize;

}

@property (nonatomic,readonly) NSArray * records; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_CP7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)records;
-(void)addRecord:(id)arg1 ;
-(id)_additionalRecords;
-(void)_setAdditionalRecords:(id)arg1 ;
-(id)cplFullDescription;
-(void)addRecordsFromBatch:(id)arg1 ;
-(void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4 ;
-(void)_setRecords:(id)arg1 ;
-(void)sortBatch;
-(void)extractInitialDownloadBatch:(id*)arg1 shouldConsiderRecordFilter:(/*^block*/id)arg2 ;
-(id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2 ;
-(void)removeRecordWithIdentifier:(id)arg1 ;
-(void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2 ;
-(void)_addAdditionalRecord:(id)arg1 ;
-(id)_initWithRecords:(id)arg1 ;
-(id)initWithRecords:(id)arg1 ;
-(id)extractDeletesFromBatchDeletedRecordIdentifiers:(id*)arg1 trashedRecordIdentifiers:(id*)arg2 ;
-(unsigned long long)estimatedBatchSize;
-(id)summaryDescription;
-(id)additionalRecordWithIdentifier:(id)arg1 ;
@end

