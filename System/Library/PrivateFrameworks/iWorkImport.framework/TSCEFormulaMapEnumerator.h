/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCEFormulaMap;

@interface TSCEFormulaMapEnumerator : NSObject {

	TSCEFormulaMap* mFormulaMap;
	hash_map_iterator<std::__1::__hash_iterator<std::__1::__hash_node<std::__1::__hash_value_type<const __CFUUID *, std::__1::vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula> > > >, void *> *> >* mOwnersToFormulasIterator;
	wrap_iter<std::__1::pair<TSUCellCoord, TSCEFormula> *>* mFormulasForAnOwnerIterator;

}
-(id)initWithFormulaMap:(id)arg1 ;
-(TSCEFormula*)nextFormulaGettingOwner:(const _CFUUID*)arg1 cellCoordinate:(TSUCellCoord*)arg2 ;
-(void)dealloc;
-(BOOL)hasNext;
@end

