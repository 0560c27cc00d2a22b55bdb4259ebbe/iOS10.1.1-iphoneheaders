/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface EXPivotTable : NSObject
+(void)readLocationFrom:(xmlNode*)arg1 toPivotTable:(id)arg2 ;
+(void)readStyleInfoFrom:(xmlNode*)arg1 toPivotTable:(id)arg2 ;
+(void)readPivotFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readItemsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readPageFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readDataFieldsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readConditionalFormatsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(void)readPivotAreasFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(id)edPivotTableFromXmlPivotTableElement:(xmlNode*)arg1 state:(id)arg2 ;
+(int)edPivotItemTypeFrom:(id)arg1 ;
+(int)edPivotFieldAxisFrom:(id)arg1 ;
+(void)readFieldItemsFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
+(int)edPivotDatFieldFormatFrom:(id)arg1 ;
+(int)edPivotConditionalFormatTypeFrom:(id)arg1 ;
+(int)edPivotConditionalFormatScopeFrom:(id)arg1 ;
+(int)edPivotAreaTypeFrom:(id)arg1 ;
+(void)readPivotAreaReferencesFrom:(xmlNode*)arg1 toCollection:(id)arg2 state:(id)arg3 ;
@end

