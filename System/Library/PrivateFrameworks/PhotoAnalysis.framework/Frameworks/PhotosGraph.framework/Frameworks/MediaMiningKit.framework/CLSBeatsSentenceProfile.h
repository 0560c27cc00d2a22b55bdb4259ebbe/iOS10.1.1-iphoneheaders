/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:40 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CLSProfile.h>

@class CLSMeaningClue;

@interface CLSBeatsSentenceProfile : CLSProfile {

	CLSMeaningClue* _place;
	CLSMeaningClue* _activity;
	CLSMeaningClue* _people;

}

@property (nonatomic,retain) CLSMeaningClue * place;                 //@synthesize place=_place - In the implementation block
@property (nonatomic,retain) CLSMeaningClue * activity;              //@synthesize activity=_activity - In the implementation block
@property (nonatomic,retain) CLSMeaningClue * people;                //@synthesize people=_people - In the implementation block
+(id)classIdentifier;
+(id)informantDependenciesIdentifiers;
+(id)profileDependenciesIdentifiers;
+(id)supportedMeaningClueKeys;
+(id)reductionRulesPath;
-(id)init;
-(BOOL)isValid;
-(CLSMeaningClue *)activity;
-(void)setActivity:(CLSMeaningClue *)arg1 ;
-(CLSMeaningClue *)place;
-(void)setPlace:(CLSMeaningClue *)arg1 ;
-(void)setPeople:(CLSMeaningClue *)arg1 ;
-(CLSMeaningClue *)people;
-(id)processResultsOperationForInvestigation:(id)arg1 ;
-(void)processResultsWithReductionForInvestigation:(id)arg1 ;
-(id)_bestWordsFromCountedSet:(id)arg1 reverse:(BOOL)arg2 ;
-(unsigned long long)placeIdentifier;
-(unsigned long long)activityIdentifier;
-(unsigned long long)peopleIdentifier;
@end

