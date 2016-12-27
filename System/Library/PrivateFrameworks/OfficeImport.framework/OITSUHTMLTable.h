/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray;

@interface OITSUHTMLTable : NSObject {

	NSMutableDictionary* _columnAttributes;
	NSMutableDictionary* _rowClasses;
	NSMutableDictionary* _cellAttributes;
	NSMutableArray* _columnHeaders;
	NSMutableArray* _rows;
	unsigned long long _rowClassStride;

}

@property (nonatomic,readonly) unsigned long long lastRowIndex; 
@property (nonatomic,readonly) unsigned long long count; 
@property (assign,nonatomic) unsigned long long rowClassStride;              //@synthesize rowClassStride=_rowClassStride - In the implementation block
+(id)_keyForCell:(unsigned long long)arg1 :(unsigned long long)arg2 ;
+(id)_attributesStringFromAttributes:(id)arg1 ;
+(id)htmlTable;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(void)enumerateRowsUsingBlock:(/*^block*/id)arg1 ;
-(void)addRowWithCellMarkup:(id)arg1 ;
-(void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfColumnWithTitle:(id)arg1 ;
-(unsigned long long)lastRowIndex;
-(id)markup;
-(void)addRowWithCellText:(id)arg1 ;
-(void)setColumnClasses:(id)arg1 ;
-(void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2 ;
-(void)setColumnHeaders:(id)arg1 ;
-(void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 ;
-(void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3 ;
-(void)deleteColumnWithTitle:(id)arg1 ;
-(unsigned long long)rowClassStride;
-(void)setRowClassStride:(unsigned long long)arg1 ;
@end

