#import <MediaMiningKit/CLSHolidayCalendarEventRule.h>
#import <MediaMiningKit/CLSSocialServiceCalendar.h>
#import <MediaMiningKit/CLSServiceManager.h>
#import <MediaMiningKit/CLSDiscoveryProfile.h>
#import <MediaMiningKit/CLSHolidayCalendarEventRuleRequiredTraits.h>
#import <MediaMiningKit/CLSInvestigationSnapshotAsset.h>
#import <MediaMiningKit/CLSMoodProfile.h>
#import <MediaMiningKit/CLSMoodProfileResult.h>
#import <MediaMiningKit/CLSRegionsHierarchicalClusteringObject.h>
#import <MediaMiningKit/CLSRegionsHierarchicalClustering.h>
#import <MediaMiningKit/CLSInspector.h>
#import <MediaMiningKit/CLSLocationCacheTestObject.h>
#import <MediaMiningKit/CLSLocationCacher.h>
#import <MediaMiningKit/CLSRegionsDensityClustering.h>
#import <MediaMiningKit/CLSSamplingClustering.h>
#import <MediaMiningKit/CLSImage.h>
#import <MediaMiningKit/CLSDateIntervalFormatter.h>
#import <MediaMiningKit/CLSRatingServiceEvent.h>
#import <MediaMiningKit/CSLDataTokenizer.h>
#import <MediaMiningKit/CLSRatingServiceContacts.h>
#import <MediaMiningKit/CLSPrimitive.h>
#import <MediaMiningKit/CLSLocationCache.h>
#import <MediaMiningKit/CSLFeature.h>
#import <MediaMiningKit/CLSHierarchicalClustering.h>
#import <MediaMiningKit/CLSInvestigationSnapshotAssetCollectionBundle.h>
#import <MediaMiningKit/CLSPeopleInformant.h>
#import <MediaMiningKit/CLSPerson.h>
#import <MediaMiningKit/PGGeoServiceThread.h>
#import <MediaMiningKit/CLSLocationShifter.h>
#import <MediaMiningKit/CLSQueryHandler.h>
#import <MediaMiningKit/CLSRegionItemCacheCreator.h>
#import <MediaMiningKit/CLSLocationQueryPerformer.h>
#import <MediaMiningKit/CLSBusinessItemGenericQueryPerformer.h>
#import <MediaMiningKit/CLSAreaOfInterestQueryPerformer.h>
#import <MediaMiningKit/CLSPointOfInterestQueryPerformer.h>
#import <MediaMiningKit/CLSRegionOfInterestQueryPerformer.h>
#import <MediaMiningKit/CLSNatureQueryPerformer.h>
#import <MediaMiningKit/CLSAssetsBeautifier.h>
#import <MediaMiningKit/CLSBusinessCategoryCache.h>
#import <MediaMiningKit/CLSDBCache.h>
#import <MediaMiningKit/CLSLogging.h>
#import <MediaMiningKit/CLSClueDefines.h>
#import <MediaMiningKit/CLSKMeansClustering.h>
#import <MediaMiningKit/CLSInvestigationFeeder.h>
#import <MediaMiningKit/CLSChecklistItem.h>
#import <MediaMiningKit/CSLEmailXMLDelegate.h>
#import <MediaMiningKit/CSLVectorizer.h>
#import <MediaMiningKit/CLSPlace.h>
#import <MediaMiningKit/CLSEvent.h>
#import <MediaMiningKit/CLSArchiveInformant.h>
#import <MediaMiningKit/CLSAutoupdatingCurrentCalendar.h>
#import <MediaMiningKit/CLSProfile.h>
#import <MediaMiningKit/CLSRatingServicePeople.h>
#import <MediaMiningKit/CLSSocialServicePeople.h>
#import <MediaMiningKit/CLSRegionsClustering.h>
#import <MediaMiningKit/CLSLocationManager.h>
#import <MediaMiningKit/CLSInformant.h>
#import <MediaMiningKit/CLSRatingServiceManager.h>
#import <MediaMiningKit/CSLNLEventClassification.h>
#import <MediaMiningKit/CLSRatingService.h>
#import <MediaMiningKit/CLSEventResult.h>
#import <MediaMiningKit/CLSArchivePrimitive.h>
#import <MediaMiningKit/CLSVisionKitResult.h>
#import <MediaMiningKit/CLSReachability.h>
#import <MediaMiningKit/CLSRulesContext.h>
#import <MediaMiningKit/CLSNewLocationInformant.h>
#import <MediaMiningKit/CLSInvestigationPhotoKitFeeder.h>
#import <MediaMiningKit/CLSInvestigation.h>
#import <MediaMiningKit/CLSWeather.h>
#import <MediaMiningKit/CLSArchiveRoom.h>
#import <MediaMiningKit/CSLFeatureVector.h>
#import <MediaMiningKit/CLSHolidayCalendarEventDateRule.h>
#import <MediaMiningKit/CLSFullSentenceProfile.h>
#import <MediaMiningKit/CLSArchiveRoomCache.h>
#import <MediaMiningKit/CLSSceneMatcher.h>
#import <MediaMiningKit/CSLNGramFeature.h>
#import <MediaMiningKit/CLSClue.h>
#import <MediaMiningKit/CLSOutputClue.h>
#import <MediaMiningKit/CLSMeaningClue.h>
#import <MediaMiningKit/CLSInputClue.h>
#import <MediaMiningKit/CLSInputTimeClue.h>
#import <MediaMiningKit/CLSInputLocationClue.h>
#import <MediaMiningKit/CLSInputPeopleClue.h>
#import <MediaMiningKit/CLSDBSCANClustering.h>
#import <MediaMiningKit/CSLSimpleClassifier.h>
#import <MediaMiningKit/CLSTestInvestigationFeeder.h>
#import <MediaMiningKit/CLSTestInvestigationItem.h>
#import <MediaMiningKit/CLSHealthInformant.h>
#import <MediaMiningKit/CLSArchiveClue.h>
#import <MediaMiningKit/CLSMetadataDBCache.h>
#import <MediaMiningKit/CLSProximityManager.h>
#import <MediaMiningKit/CLSLRUMemoryCache.h>
#import <MediaMiningKit/CLSOPTICSClusterDescriptor.h>
#import <MediaMiningKit/CLSOPTICSClusteringObject.h>
#import <MediaMiningKit/CLSOPTICSClustering.h>
#import <MediaMiningKit/CLSError.h>
#import <MediaMiningKit/CLSObjectDiskCache.h>
#import <MediaMiningKit/CLSRatingServicePerson.h>
#import <MediaMiningKit/CLSDiscoveryMatch.h>
#import <MediaMiningKit/CLSEKEvent.h>
#import <MediaMiningKit/CLSEKParticipant.h>
#import <MediaMiningKit/CLSEKCalendar.h>
#import <MediaMiningKit/CLSEKSharee.h>
#import <MediaMiningKit/CLSHolidayCalendarEventRuleTraits.h>
#import <MediaMiningKit/CLSClueCollection.h>
#import <MediaMiningKit/CLSPersonResult.h>
#import <MediaMiningKit/CLSPhotoClassificationResult.h>
#import <MediaMiningKit/CLSPhotoInformant.h>
#import <MediaMiningKit/CLSCalendar.h>
#import <MediaMiningKit/CLSCachedGeocoderOperation.h>
#import <MediaMiningKit/CLSSocialServiceContacts.h>
#import <MediaMiningKit/CLSDataCluster.h>
#import <MediaMiningKit/CLSCalendarEventsCacheDay.h>
#import <MediaMiningKit/CLSCalendarEventsCacheMonth.h>
#import <MediaMiningKit/CLSCalendarEventsCacheYear.h>
#import <MediaMiningKit/CLSCalendarEventsCache.h>
#import <MediaMiningKit/CLSChecklist.h>
#import <MediaMiningKit/CLSPublicEventInformant.h>
#import <MediaMiningKit/CSLMessageTextProcessor.h>
#import <MediaMiningKit/CLSTextAnalyzer.h>
#import <MediaMiningKit/CLSSummaryClustering.h>
#import <MediaMiningKit/CLSTimeInformant.h>
#import <MediaMiningKit/CLSBeatsSentenceProfile.h>
#import <MediaMiningKit/CLSBeatsSentenceProfileResult.h>
#import <MediaMiningKit/CLSRate.h>
#import <MediaMiningKit/CLSLitePlacemark.h>
#import <MediaMiningKit/CLSMessageSuggestionProfile.h>
#import <MediaMiningKit/CLSTimeZones.h>
#import <MediaMiningKit/CLSTimeSpanClustering.h>
#import <MediaMiningKit/CLSHolidayCalendarEventRulesFactory.h>
#import <MediaMiningKit/CLSDataClustering.h>
#import <MediaMiningKit/CLSDataDensityClustering.h>
#import <MediaMiningKit/CLSPublicEvent.h>
#import <MediaMiningKit/CSLEmail.h>
#import <MediaMiningKit/CLSRegionsAgglomerativeClusteringDataVector.h>
#import <MediaMiningKit/CLSRegionsAgglomerativeClusteringDataCluster.h>
#import <MediaMiningKit/CLSRegionsAgglomerativeClustering.h>
#import <MediaMiningKit/CLSSocialService.h>
#import <MediaMiningKit/CLSVisionKitManager.h>
#import <MediaMiningKit/CLSAggregate.h>
#import <MediaMiningKit/CLSArchiveFile.h>
#import <MediaMiningKit/CLSHolidayCalendarEventService.h>
#import <MediaMiningKit/CSLClassifier.h>
#import <MediaMiningKit/CLSWeatherInformant.h>
#import <MediaMiningKit/CLSInvestigationSnapshotAssetFeeder.h>
#import <MediaMiningKit/CLSBusinessItem.h>
#import <MediaMiningKit/CLSCurrentCalendar.h>
#import <MediaMiningKit/CSLNBClassifier.h>
#import <MediaMiningKit/CLSClassificationInformant.h>
