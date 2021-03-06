/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsNaturalLanguage.framework/DataDetectorsNaturalLanguage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DataDetectorsNaturalLanguage/DataDetectorsNaturalLanguage-Structs.h>
@interface IPFeatureManager : NSObject
+(id)sharedFeatureManager;
+(id)dataDetectorsFeatureExtractor;
+(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 extractors:(id)arg3 context:(id)arg4 ;
+(id)featureExtractorsExceptDataDetectorsExtractor;
+(id)_sortedFeaturesByRange:(id)arg1 ;
+(id)_featureWithClass:(Class)arg1 inFeatures:(id)arg2 atIndex:(unsigned long long)arg3 ;
+(id)_featureSentenceInFeatures:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(id)_sortedFeaturesByDistance:(id)arg1 aroundRange:(NSRange)arg2 ;
+(unsigned long long)_distanceBetweenFeature:(id)arg1 andFeature:(id)arg2 ;
+(id)_nearbyFeatureSentences:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 ;
+(id)stringsFromDataFeatures:(id)arg1 matchingTypes:(id)arg2 ;
+(BOOL)isNaturalLanguageEventDetectionEnabled;
+(id)subjectEventVocabularyRejectionKeyword:(id)arg1 ;
+(BOOL)isBlacklistedSender:(id)arg1 ;
+(id)subjectEventVocabularyIgnoreDateKeyword:(id)arg1 ;
+(unsigned long long)countOfFeaturesContainDateInTheFuture:(id)arg1 messageUnitSentDate:(id)arg2 ;
+(BOOL)shouldReplaceSendDateWithCurrentDate;
+(BOOL)features:(id)arg1 containDateOlderThan:(id)arg2 ;
+(BOOL)isEventProposalFromFeatures:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 eventIsTenseDependent:(BOOL)arg4 extractedFromSubject:(BOOL)arg5 clusterType:(unsigned long long*)arg6 ;
+(BOOL)isDateAroundNoon:(id)arg1 ;
+(id)_nearbyFeatureDatas:(id)arg1 fromFeatureAtIndex:(unsigned long long)arg2 messageUnit:(id)arg3 ;
+(id)notesStringsFromFeatures:(id)arg1 ;
+(id)cleanedStringForFeatureData:(id)arg1 ;
+(id)stitchedEventsFromEvents:(id)arg1 ;
+(void)enrichEvents:(id)arg1 messageUnits:(id)arg2 dateInSubject:(BOOL)arg3 features:(id)arg4 ;
+(id)filteredEventsForDetectedEvents:(id)arg1 referenceDate:(id)arg2 resultType:(unsigned long long*)arg3 ;
+(void)normalizedEvents:(id)arg1 ;
+(id)movieTitlesFromFeatures:(id)arg1 ;
+(id)sportTeamNamesFromFeatures:(id)arg1 ;
+(id)artisNamesFromFeatures:(id)arg1 ;
+(id)restaurantAndBarPOINamesFromFeatures:(id)arg1 ;
+(id)entertainmentPOINamesFromFeatures:(id)arg1 ;
+(id)normalizedAllDayDateFromDate:(id)arg1 ;
+(id)decoratedTitle:(id)arg1 withSubtitles:(id)arg2 ;
+(id)descriptionForScanResultType:(unsigned long long)arg1 ;
+(void)_scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)featuresForTextString:(id)arg1 inMessageUnit:(id)arg2 ;
+(id)_featureDataInFeatures:(id)arg1 atIndex:(unsigned long long)arg2 ;
+(unsigned long long)featureSentencePolarityForFeatureAtIndex:(unsigned long long)arg1 inFeatures:(id)arg2 ;
+(void)setEventStoreForTesting:(id)arg1 ;
+(id)bestEventFromEvents:(id)arg1 ;
+(void)scanEventsInMessageUnits:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
+(void)scanEventsInMessageUnits:(id)arg1 synchronously:(BOOL)arg2 completionHandler:(/*^block*/id)arg3 ;
@end

