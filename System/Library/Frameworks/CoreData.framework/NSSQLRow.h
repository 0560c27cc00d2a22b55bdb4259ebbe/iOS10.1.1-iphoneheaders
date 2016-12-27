/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPersistentCacheRow.h>

@class _CDSnapshot;

@interface NSSQLRow : NSPersistentCacheRow {

	_CDSnapshot* _snapshot;

}
+(unsigned)newBatchRowAllocation:(id*)arg1 count:(unsigned)arg2 forSQLEntity:(id)arg3 withOwnedObjectIDs:(NSScalarObjectID*)arg4 andTimestamp:(double)arg5 ;
+(id)allocForSQLEntity:(id)arg1 ;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)setForeignEntityKeySlot:(unsigned)arg1 entityKey:(unsigned)arg2 ;
-(void)setForeignOrderKeySlot:(unsigned)arg1 orderKey:(unsigned)arg2 ;
-(void)setForeignKeySlot:(unsigned)arg1 int64:(long long)arg2 ;
-(void)setOptLock:(long long)arg1 ;
-(id)initWithSQLEntity:(id)arg1 ownedObjectID:(NSScalarObjectID*)arg2 andTimestamp:(double)arg3 ;
-(const id*)knownKeyValuesPointer;
-(id)_snapshot_;
-(id)sqlEntity;
-(long long)pk64;
-(unsigned)sqlEntityID;
-(long long)optLock;
-(long long)foreignKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignEntityKeyForSlot:(unsigned)arg1 ;
-(unsigned)foreignOrderKeyForSlot:(unsigned)arg1 ;
-(id)attributeValueForSlot:(unsigned)arg1 ;
-(CFBitVectorRef)newUpdateMaskForConstrainedValues;
-(unsigned)_versionNumber;
-(CFBitVectorRef)newUpdateMaskFrom:(id)arg1 ;
-(id)initWithSQLEntity:(id)arg1 objectID:(NSScalarObjectID*)arg2 ;
-(NSScalarObjectID*)newObjectIDForToOne:(id)arg1 ;
-(void)_validateToOnes;
-(CFBitVectorRef)newColumnMaskFrom:(id)arg1 columnInclusionOptions:(unsigned long long)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copy;
-(long long)version;
-(NSScalarObjectID*)objectID;
-(void)setObjectID:(NSScalarObjectID*)arg1 ;
@end

