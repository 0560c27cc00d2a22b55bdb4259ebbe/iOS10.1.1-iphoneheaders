/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSManagedObjectID;

@interface PFUbiquityGlobalObjectID : NSObject <NSCopying> {

	NSString* _storeName;
	NSString* _entityName;
	NSString* _primaryKey;
	NSString* _owningPeerID;
	unsigned long long _hash;
	NSManagedObjectID* _managedObjectID;
	unsigned long long _primaryKeyInteger;

}

@property (nonatomic,readonly) NSString * storeName;                              //@synthesize storeName=_storeName - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                             //@synthesize entityName=_entityName - In the implementation block
@property (nonatomic,readonly) NSString * primaryKey;                             //@synthesize primaryKey=_primaryKey - In the implementation block
@property (nonatomic,readonly) NSString * owningPeerID;                           //@synthesize owningPeerID=_owningPeerID - In the implementation block
@property (nonatomic,readonly) unsigned long long hash;                           //@synthesize hash=_hash - In the implementation block
@property (nonatomic,retain) NSManagedObjectID * managedObjectID;                 //@synthesize managedObjectID=_managedObjectID - In the implementation block
@property (nonatomic,readonly) unsigned long long primaryKeyInteger;              //@synthesize primaryKeyInteger=_primaryKeyInteger - In the implementation block
-(NSString *)primaryKey;
-(NSString *)storeName;
-(NSString *)owningPeerID;
-(NSManagedObjectID *)managedObjectID;
-(void)setManagedObjectID:(NSManagedObjectID *)arg1 ;
-(id)createGlobalIDString;
-(void)updateHash;
-(id)initFromCopyWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 peerID:(id)arg4 andHash:(unsigned long long)arg5 managedObjectID:(id)arg6 primaryKeyInteger:(unsigned long long)arg7 ;
-(unsigned long long)primaryKeyInteger;
-(id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKeyInteger:(unsigned long long)arg3 andPeerID:(id)arg4 ;
-(id)initWithStoreName:(id)arg1 entityName:(id)arg2 primaryKey:(id)arg3 andPeerID:(id)arg4 ;
-(id)initWithCompressedString:(id)arg1 forStoreWithName:(id)arg2 andEntityNames:(id)arg3 primaryKeys:(id)arg4 peerIDs:(id)arg5 ;
-(id)createCompressedStringWithEntityNameToIndex:(id)arg1 primaryKeyToIndex:(id)arg2 peerIDToIndex:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)entityName;
@end

