/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PASampleAggregator, NSMutableDictionary, PASampleTimeSeriesDataStore;

@interface PAAggregatedTask : NSObject {

	PASampleAggregator* _aggregator;
	NSMutableDictionary* _binaryImages;

}

@property (__weak,readonly) PASampleTimeSeriesDataStore * sampleStore; 
-(long long)compare:(id)arg1 ;
-(PASampleTimeSeriesDataStore *)sampleStore;
-(void)printToOutputStream:(id)arg1 ;
-(void)addSampleTask:(id)arg1 atTimestampIndex:(unsigned long long)arg2 ;
-(void)fillGaps;
-(id)aggregator;
-(unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 isKernel:(BOOL)arg2 ;
-(unsigned long long)displayedBaseAddressForBinaryImage:(id)arg1 andUpdateIfLower:(BOOL)arg2 isKernel:(BOOL)arg3 ;
-(id)initWithAggregator:(id)arg1 andSampleTask:(id)arg2 atTimestampIndex:(unsigned long long)arg3 ;
-(id)copyDescriptionForDisplayAddress:(unsigned long long)arg1 withSymbolicationAddress:(unsigned long long)arg2 inSymbolHandle:(id)arg3 displayFrameAddress:(BOOL)arg4 isKernel:(BOOL)arg5 ;
-(void)updateBinaryLocationIfLower:(id)arg1 isKernel:(BOOL)arg2 ;
-(void)printBinaryImagesToOutputStream:(id)arg1 ;
@end

