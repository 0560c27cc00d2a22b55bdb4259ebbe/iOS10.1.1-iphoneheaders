/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSTCellStyle, TSWPParagraphStyle;

@interface TSTLocalStylesKey : NSObject <NSCopying> {

	TSTCellStyle* mCellStyle;
	TSWPParagraphStyle* mTextStyle;

}

@property (retain) TSTCellStyle * cellStyle; 
@property (retain) TSWPParagraphStyle * textStyle; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSWPParagraphStyle *)textStyle;
-(void)setTextStyle:(TSWPParagraphStyle *)arg1 ;
-(TSTCellStyle *)cellStyle;
-(void)setCellStyle:(TSTCellStyle *)arg1 ;
@end
