/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface EDTableFilterColumn : NSObject {

	unsigned long long mColumnIndex;
	NSMutableArray* mFilters;
	int mFiltersRelation;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(void)addFilter:(id)arg1 ;
-(id)filterAtIndex:(unsigned long long)arg1 ;
-(void)setColumnIndex:(unsigned long long)arg1 ;
-(unsigned long long)columnIndex;
-(unsigned long long)filterCount;
-(int)filtersRelation;
-(void)setFiltersRelation:(int)arg1 ;
@end

