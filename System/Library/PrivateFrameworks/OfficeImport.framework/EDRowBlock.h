/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EDRowBlock : NSObject {

	CFDataRef mPackedData;
	CFDataRef mCellOffsets;

}

@property (nonatomic,readonly) unsigned rowCount; 
@property (nonatomic,readonly) unsigned firstRowNumber; 
@property (nonatomic,readonly) unsigned lastRowNumber; 
@property (nonatomic,readonly) unsigned minRowNumber; 
@property (nonatomic,readonly) unsigned maxRowNumber; 
+(id)rowBlock;
-(id)init;
-(void)dealloc;
-(id)description;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
-(unsigned)rowCount;
-(unsigned)maxRowNumber;
-(EDCellHeader*)cellAtIndex:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDCellHeader*)cellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDRowInfo*)rowInfoWithRowNumber:(unsigned)arg1 ;
-(EDRowInfo*)addRowInfoWithRowNumber:(unsigned)arg1 cellCountHint:(unsigned)arg2 ;
-(void)doneWithContent;
-(unsigned)firstRowNumber;
-(unsigned)indexOfRowInfoWithRowNumber:(unsigned)arg1 ;
-(unsigned)indexOfCellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(unsigned)lastRowNumber;
-(void)removeCellAtIndex:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(unsigned long long)startOfCellsOrThrow;
-(void)checkCellOffsetOrThrow:(unsigned long long)arg1 ;
-(unsigned)minRowNumber;
-(void)incrementIndex;
-(void)unarchiveFromData:(CFDataRef)arg1 offset:(unsigned long long*)arg2 ;
-(void)archiveByAppendingToMutableData:(CFDataRef)arg1 ;
-(EDRowInfo*)rowInfoWithRowNumber:(unsigned)arg1 createIfNil:(BOOL)arg2 ;
-(EDRowInfo*)rowInfoAtIndex:(unsigned)arg1 ;
-(unsigned)expectedIndexOfCellWithColumnNumber:(unsigned)arg1 rowInfo:(EDRowInfo*)arg2 ;
-(EDCellHeader*)addCellWithColumnNumber:(unsigned)arg1 type:(int)arg2 isFormulaCell:(BOOL)arg3 rowInfo:(EDRowInfo*)arg4 rowBlocks:(id)arg5 ;
@end

