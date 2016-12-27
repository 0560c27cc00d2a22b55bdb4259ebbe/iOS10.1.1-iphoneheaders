/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface ECFormulaProcessor : NSObject {

	XlFormulaProcessor* mXlFormulaProcessorLasso;
	XlFormulaProcessor* mXlFormulaProcessorXl;
	XlNameTable* mXlNameTable;
	ChVector<OcText>* mLassoSheetNames;
	ChVector<OcText>* mXlSheetNames;
	XlLinkTable* mXlLinkTable;

}
+(id)formulaStringForEDFormula:(id)arg1 edWorksheet:(id)arg2 xlFormulaProcessor:(XlFormulaProcessor*)arg3 ;
-(id)init;
-(void)dealloc;
-(ChVector<OcText>*)sheetNamesFromWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)setupWithWorkbook:(id)arg1 xlNameTable:(XlNameTable*)arg2 sheetNames:(ChVector<OcText>*)arg3 xlLinkTable:(XlLinkTable*)arg4 lassoSyntax:(BOOL)arg5 ;
-(void)setupWithWorkbook:(id)arg1 ;
-(XlFormulaProcessor*)xlFormulaProcessorLasso;
-(XlFormulaProcessor*)xlFormulaProcessorXl;
@end
