/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString;

@interface PFUbiquityToManyConflictDiff : NSObject {

	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSString* _relationshipKey;

}

@property (nonatomic,readonly) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * relationshipKey;                    //@synthesize relationshipKey=_relationshipKey - In the implementation block
-(NSMutableSet *)insertedObjectIDs;
-(id)initForRelationshipAtKey:(id)arg1 ;
-(void)diffWithLogSnapshot:(id)arg1 andPreviousSnapshot:(id)arg2 ;
-(NSString *)relationshipKey;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSMutableSet *)deletedObjectIDs;
@end

