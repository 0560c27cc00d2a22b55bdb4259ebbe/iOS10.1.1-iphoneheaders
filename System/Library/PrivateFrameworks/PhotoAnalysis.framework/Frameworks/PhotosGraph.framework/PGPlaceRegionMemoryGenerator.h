/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceRegionMemoryGenerator : PGFeaturedMemoryGenerator {

	NSString* _region;
	long long _year;

}

@property (assign,nonatomic) NSString * region;              //@synthesize region=_region - In the implementation block
@property (assign,nonatomic) long long year;                 //@synthesize year=_year - In the implementation block
-(void)setRegion:(NSString *)arg1 ;
-(NSString *)region;
-(long long)year;
-(void)setYear:(long long)arg1 ;
-(id)_potentialMemories:(unsigned long long)arg1 ;
-(void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2 ;
-(void)_potentialMemoriesWithRegionNode:(id)arg1 inYear:(long long)arg2 result:(/*^block*/id)arg3 ;
@end

