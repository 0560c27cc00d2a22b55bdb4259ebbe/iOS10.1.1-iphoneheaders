/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSProfile.h>

@interface CLSDiscoveryProfile : CLSProfile {

	unsigned long long _options;
	double _peopleWeight;
	double _activityWeight;
	double _locationWeight;
	double _timeWeight;
	double _weatherWeight;
	BOOL _useAllMainOptions;
	BOOL _wantsDebugClue;

}
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
+(id)profileWithOptions:(unsigned long long)arg1 ;
-(id)init;
-(id)meaningCluesForInvestigation:(id)arg1 ;
-(id)_peopleMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2 ;
-(id)_activityMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2 ;
-(id)_locationMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2 ;
-(id)_timeMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2 ;
-(id)_weatherMatchesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2 ;
-(id)meaningCluesForCurrentClueCollection:(id)arg1 urisToClueCollections:(id)arg2 ;
-(unsigned long long)levenshteinDistanceFromString:(id)arg1 toString:(id)arg2 ;
-(void)_printClusters:(id)arg1 ;
-(id)processResultsOperationForInvestigation:(id)arg1 ;
-(void)enableDebuggingClue;
-(id)_debugInfoWithUrisToClueCollections:(id)arg1 ;
-(id)_peopleClusteringForClueCollections:(id)arg1 ;
-(id)_activityClusteringForClueCollections:(id)arg1 ;
-(id)_locationClusteringForClueCollections:(id)arg1 ;
-(id)_timeClusteringForClueCollections:(id)arg1 ;
@end

