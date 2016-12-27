/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDTCell.h>

@interface GQDTGroupingCell : GQDTCell {

	unsigned short mLevel;
	unsigned short mRowIdx;
	unsigned short mRowCount;
	BOOL mIsCollapsed;
	id mValue;
	id mFormat;
	CFBundleRef mProcessorBundle;
	BOOL mHasValidFormulaValue;
	CFStringRef mFormulaValue;

}
+(CFStringRef)displayTypeString:(int)arg1 ;
-(void)setProcessorBundle:(CFBundleRef)arg1 ;
-(CFStringRef)createFormattedValue;
-(BOOL)hasFormulaValue;
-(int)readValue:(xmlTextReaderRef)arg1 ;
-(int)readElement:(xmlTextReaderRef)arg1 ;
-(int)readAttributes:(xmlTextReaderRef)arg1 ;
-(int)readRootFormat:(xmlTextReaderRef)arg1 ;
-(unsigned short)rowIdx;
-(void)dealloc;
-(id)value;
-(unsigned short)level;
-(BOOL)isCollapsed;
-(unsigned short)rowCount;
@end

