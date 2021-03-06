/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RTDaemonInternalProtocol <NSObject>
@required
-(void)fetchMagicalMomentsModelPropertyListRepresentation:(/*^block*/id)arg1;
-(void)requestCurrentMicroLocation;
-(void)forceSequentialClusterIdentification:(/*^block*/id)arg1;
-(void)injectLocationOfInterest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)removeLocationOfInterest:(id)arg1 reply:(/*^block*/id)arg2;
-(void)injectVisit:(id)arg1 locationOfInterest:(id)arg2 reply:(/*^block*/id)arg3;
-(void)removeVisit:(id)arg1 locationOfInterest:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchStoredLocationsFromDate:(id)arg1 toDate:(id)arg2 reply:(/*^block*/id)arg3;
-(void)fetchPredictedApplicationsForEvent:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)processDataForPredictionModelWithReply:(/*^block*/id)arg1;
-(void)printMagicalMomentsModelWithReply:(/*^block*/id)arg1;
-(void)syncRoutineStateModelFromCompanionToGizmo:(/*^block*/id)arg1;
-(void)forceUpdateAssetMetadata;
-(void)updateAssetServerURL:(id)arg1 assetType:(id)arg2 reply:(/*^block*/id)arg3;
-(void)processDataForRoomAssistModelWithReply:(/*^block*/id)arg1;
-(void)printRoomAssistModel:(/*^block*/id)arg1;
-(void)forceEventModelRefresh;

@end

