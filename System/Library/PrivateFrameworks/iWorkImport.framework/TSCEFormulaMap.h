/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEFormulaMap : NSObject {

	unordered_map<const __CFUUID *, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula> > >, TSCEFormulaOwnerIDHash, TSCEFormulaOwnerIDEqual, std::__1::allocator<std::__1::pair<const __CFUUID *const, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula> > > > > >* mOwnerToFormulasMap;
	int mCount;

}
-(void)addFormula:(TSCEFormula*)arg1 inOwner:(CFUUIDRef)arg2 atCellCoordinate:(TSUCellCoord)arg3 ;
-(id)formulaEnumerator;
-(int)count;
@end

