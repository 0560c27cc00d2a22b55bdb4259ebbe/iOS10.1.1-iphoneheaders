/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AppSupport/AppSupport-Structs.h>
@class CPLRUDictionaryNode;

@interface CPLRUDictionary : NSObject {

	CFDictionaryRef _dictionary;
	unsigned long long _maxCount;
	CPLRUDictionaryNode* _head;
	CPLRUDictionaryNode* _tail;

}
+(id)dictionaryWithMaximumCapacity:(unsigned long long)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(void)removeAllObjects;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)allKeys;
-(id)initWithMaximumCapacity:(unsigned long long)arg1 ;
-(void)_removeNode:(id)arg1 ;
-(void)_addNodeToFront:(id)arg1 ;
-(void)_moveNodeToFront:(id)arg1 ;
-(id)allKeysInLRUOrder;
-(id)allValuesInLRUOrder;
-(id)objectForKeyWithoutAffectingLRU:(id)arg1 ;
-(void)_removeNodeFromLinkedList:(id)arg1 ;
-(unsigned long long)linkedListCount;
@end

