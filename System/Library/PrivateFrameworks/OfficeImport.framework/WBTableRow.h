/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface WBTableRow : NSObject
+(void)readFrom:(id)arg1 textRuns:(id)arg2 to:(id)arg3 index:(unsigned long long)arg4 row:(id)arg5 ;
+(void)readCellsFrom:(id)arg1 textRuns:(id)arg2 level:(int)arg3 to:(id)arg4 properties:(WrdTableProperties*)arg5 tracked:(WrdTableProperties*)arg6 ;
+(void)collectCellProperties:(WrdTableProperties*)arg1 tracked:(WrdTableProperties*)arg2 for:(id)arg3 ;
@end
