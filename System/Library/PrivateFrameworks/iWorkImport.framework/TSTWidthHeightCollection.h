/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSTWidthHeightCollection : NSObject {

	vector<std::__1::pair<TSUCellCoord, double>, std::__1::allocator<std::__1::pair<TSUCellCoord, double> > >* mFittingHeights;
	vector<TSUCellCoord, std::__1::allocator<TSUCellCoord> >* mResetHeights;

}
-(void)addFittingHeight:(double)arg1 forCellID:(TSUCellCoord)arg2 ;
-(void)enumerateFittingHeightsUsingBlock:(/*^block*/id)arg1 ;
-(void)addResetHeightForCellID:(TSUCellCoord)arg1 ;
-(void)enumerateResetHeightsUsingBlock:(/*^block*/id)arg1 ;
@end

