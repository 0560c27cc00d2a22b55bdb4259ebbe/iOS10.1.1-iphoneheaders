/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableOrderedSet;

@interface PBObjectToObjectCoercion : NSObject {

	Class _theClass;
	NSMutableDictionary* _blockByClass;
	NSMutableOrderedSet* _classOrder;

}

@property (nonatomic,retain) Class theClass;                                  //@synthesize theClass=_theClass - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blockByClass;              //@synthesize blockByClass=_blockByClass - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * classOrder;                //@synthesize classOrder=_classOrder - In the implementation block
-(id)initWithClass:(Class)arg1 ;
-(void)addCoercionToClass:(Class)arg1 block:(/*^block*/id)arg2 ;
-(id)availableClasses;
-(BOOL)canCoerceToObjectOfClass:(Class)arg1 ;
-(id)coerceObject:(id)arg1 toObjectOfClass:(Class)arg2 outError:(id*)arg3 ;
-(Class)theClass;
-(void)setTheClass:(Class)arg1 ;
-(NSMutableDictionary *)blockByClass;
-(void)setBlockByClass:(NSMutableDictionary *)arg1 ;
-(NSMutableOrderedSet *)classOrder;
-(void)setClassOrder:(NSMutableOrderedSet *)arg1 ;
@end

