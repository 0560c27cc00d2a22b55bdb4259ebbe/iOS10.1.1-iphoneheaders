/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class AVAsset, NSArray, NSMutableDictionary;

@interface VCPLightVideoAnalyzer : NSObject {

	unsigned long long _requestedAnalyses;
	AVAsset* _avAsset;
	CGAffineTransform _transform;
	NSArray* _metaTracks;
	NSMutableDictionary* _results;

}
-(id)findMetaTrackforType:(id)arg1 ;
-(int)processMetaTrackForType:(id)arg1 cancel:(/*^block*/id)arg2 flags:(unsigned long long*)arg3 ;
-(id)initWithAVAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2 ;
-(id)analyzeAsset:(/*^block*/id)arg1 flags:(unsigned long long*)arg2 ;
@end

