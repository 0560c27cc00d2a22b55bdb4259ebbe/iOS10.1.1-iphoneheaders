/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXCellFormatTable : NSObject
+(void)readCellFormatsFrom:(xmlNode*)arg1 isStyle:(BOOL)arg2 state:(id)arg3 ;
+(void)setDefaultWithState:(id)arg1 ;
+(void)readFromCellXfsElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromCellStyleXfsElement:(xmlNode*)arg1 state:(id)arg2 ;
+(void)readFromCellStylesElement:(xmlNode*)arg1 state:(id)arg2 ;
@end

