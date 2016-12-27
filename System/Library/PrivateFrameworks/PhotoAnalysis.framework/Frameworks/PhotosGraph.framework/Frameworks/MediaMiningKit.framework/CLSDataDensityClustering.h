/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSDataClustering.h>

@interface CLSDataDensityClustering : CLSDataClustering {

	double _maximumDistance;
	unsigned long long _minimumNumberOfObjects;

}

@property (assign,nonatomic) double maximumDistance;                                 //@synthesize maximumDistance=_maximumDistance - In the implementation block
@property (assign,nonatomic) unsigned long long minimumNumberOfObjects;              //@synthesize minimumNumberOfObjects=_minimumNumberOfObjects - In the implementation block
-(void)setMaximumDistance:(double)arg1 ;
-(void)setMinimumNumberOfObjects:(unsigned long long)arg1 ;
-(double)maximumDistance;
-(unsigned long long)minimumNumberOfObjects;
@end

