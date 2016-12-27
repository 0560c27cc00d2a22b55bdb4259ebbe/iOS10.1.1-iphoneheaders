/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSCache;

@interface MiroVPAnalysisHelpers : NSObject {

	NSCache* _analysisInfos;

}
+(id)sharedHelpers;
+(unsigned long long)_extendedFlagsWithFlags:(unsigned long long)arg1 ;
+(int)_timeInFramesWithDictionaryRepresentation:(id)arg1 naturalFrameRate:(long long)arg2 ;
+(id)_createAnalysisInfoWithVPResultDictionary:(id)arg1 asset:(id)arg2 scoringHandler:(/*^block*/id)arg3 ;
-(id)init;
-(void)clearCaches;
-(void)cancelFetchAnalysisInfoWithRequestID:(int)arg1 ;
-(int)fetchAnalysisInfoWithAsset:(id)arg1 scoringHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(int)sortByAnalysisInfoScoreWithAssets:(id)arg1 scoringHandler:(/*^block*/id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)cancelSortByAnalysisInfoScoreWithRequestID:(int)arg1 ;
@end

