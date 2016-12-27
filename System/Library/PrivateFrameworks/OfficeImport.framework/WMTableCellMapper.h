/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/CMMapper.h>

@class WDTableCell;

@interface WMTableCellMapper : CMMapper {

	WDTableCell* mWdTableCell;
	unsigned mColSpan;
	double mHeight;
	double mWidth;
	double mLeftPadding;
	double mRightPadding;

}
-(void)mapAt:(id)arg1 withState:(id)arg2 ;
-(id)tableMapper;
-(void)mapCellStyleAt:(id)arg1 ;
-(id)initWithWDTableCell:(id)arg1 atIndex:(unsigned)arg2 parent:(id)arg3 ;
-(unsigned)colSpan;
@end

