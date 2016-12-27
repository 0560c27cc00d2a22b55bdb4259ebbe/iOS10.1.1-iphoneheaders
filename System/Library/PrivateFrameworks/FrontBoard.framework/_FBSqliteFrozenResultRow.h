/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBSqliteResultRow.h>

@class NSArray;

@interface _FBSqliteFrozenResultRow : FBSqliteResultRow {

	unsigned long long _count;
	NSArray* _frozenColumnNames;
	NSArray* _frozenObjects;
	NSArray* _frozenIntegers;
	NSArray* _frozenDoubles;
	NSArray* _frozenStrings;
	NSArray* _frozenDatas;

}
-(void)dealloc;
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)stringAtIndex:(unsigned long long)arg1 ;
-(id)initWithStatement:(sqlite3_stmtRef)arg1 ;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)_indexForKey:(id)arg1 ;
-(id)columnNameAtIndex:(unsigned long long)arg1 ;
-(id)initWithResultRow:(id)arg1 ;
-(long long)integerAtIndex:(unsigned long long)arg1 ;
-(double)doubleAtIndex:(unsigned long long)arg1 ;
@end

