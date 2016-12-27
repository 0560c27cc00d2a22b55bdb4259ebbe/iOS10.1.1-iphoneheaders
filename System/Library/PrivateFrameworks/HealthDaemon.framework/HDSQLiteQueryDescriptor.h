/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, HDSQLitePredicate, NSString;

@interface HDSQLiteQueryDescriptor : NSObject <NSCopying> {

	BOOL _returnsDistinctEntities;
	Class _entityClass;
	long long _limitCount;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	HDSQLitePredicate* _predicate;
	NSString* _groupBy;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) long long limitCount;                      //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) HDSQLitePredicate * predicate;               //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSString * groupBy;                          //@synthesize groupBy=_groupBy - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(HDSQLitePredicate *)arg1 ;
-(HDSQLitePredicate *)predicate;
-(void)setEntityClass:(Class)arg1 ;
-(void)setOrderingDirections:(NSArray *)arg1 ;
-(void)setOrderingProperties:(NSArray *)arg1 ;
-(Class)entityClass;
-(void)setLimitCount:(long long)arg1 ;
-(id)_joinClauseForProperties:(id)arg1 ;
-(id)_newSelectSQLWithProperties:(id)arg1 ;
-(NSString *)groupBy;
-(long long)limitCount;
-(id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2 ;
-(id)_sortedJoinClauses:(id)arg1 ;
-(NSArray *)orderingDirections;
-(NSArray *)orderingProperties;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
-(void)setGroupBy:(NSString *)arg1 ;
@end

