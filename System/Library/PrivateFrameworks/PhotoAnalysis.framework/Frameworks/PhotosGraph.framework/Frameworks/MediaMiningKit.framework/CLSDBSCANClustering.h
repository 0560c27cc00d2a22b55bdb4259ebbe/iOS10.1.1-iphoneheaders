/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDataDensityClustering.h>

@interface CLSDBSCANClustering : CLSDataDensityClustering {

	double maximumDistance;
	unsigned long long minimumNumberOfObjects;
	double _maximumDistance;
	unsigned long long _minimumNumberOfObjects;

}
-(id)init;
-(id)performWithDataset:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)setMaximumDistance:(double)arg1 ;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(double)maximumDistance;
-(unsigned long long)minimumNumberOfObjects;
-(id)_neighborsAtIndex:(unsigned long long)arg1 withDistancesMatrix:(double*)arg2 number:(unsigned long long)arg3 ;
-(id)_expandClusterForObject:(id)arg1 dataset:(id)arg2 objectsMappedToCluster:(id)arg3 visitedObjects:(unsigned long long*)arg4 distancesMatrix:(double*)arg5 neighbors:(id)arg6 ;
@end

