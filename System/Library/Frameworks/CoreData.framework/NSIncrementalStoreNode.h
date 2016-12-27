/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long _versionNumber;
	id _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)initialize;
-(id)valueForPropertyDescription:(id)arg1 ;
-(const id*)knownKeyValuesPointer;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(void)updateFromSQLRow:(id)arg1 ;
-(id)_snapshot_;
-(unsigned)_versionNumber;
-(id)_propertyCache;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(void)dealloc;
-(id)description;
-(unsigned long long)version;
-(NSManagedObjectID *)objectID;
@end

