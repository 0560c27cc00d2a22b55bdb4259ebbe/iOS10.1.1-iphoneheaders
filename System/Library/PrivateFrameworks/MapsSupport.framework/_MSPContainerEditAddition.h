/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/_MSPContainerEdit.h>
#import <libobjc.A.dylib/MSPContainerEditAddition.h>

@class NSArray, NSIndexSet, NSMapTable, NSString;

@interface _MSPContainerEditAddition : _MSPContainerEdit <MSPContainerEditAddition> {

	NSMapTable* _identifiersAtopByIdentifier;
	NSArray* _objects;
	NSArray* _addedImmutableObjects;
	NSIndexSet* _indexesOfAddedObjects;

}

@property (nonatomic,readonly) NSArray * objects;                               //@synthesize objects=_objects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * addedImmutableObjects;                 //@synthesize addedImmutableObjects=_addedImmutableObjects - In the implementation block
@property (nonatomic,readonly) NSIndexSet * indexesOfAddedObjects;              //@synthesize indexesOfAddedObjects=_indexesOfAddedObjects - In the implementation block
-(NSString *)description;
-(NSArray *)objects;
-(void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(/*^block*/id)arg2 ;
-(id)identifierForObjectAtopAddedImmutableObject:(id)arg1 ;
-(NSArray *)addedImmutableObjects;
-(NSIndexSet *)indexesOfAddedObjects;
-(id)initWithObjects:(id)arg1 indexes:(id)arg2 identifiersAtop:(id)arg3 ;
@end

