/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AWDMetricContainer;

@interface BLTAWDMetric : NSObject {

	AWDMetricContainer* _metricContainer;
	id _metric;

}

@property (nonatomic,retain,readonly) id metric;              //@synthesize metric=_metric - In the implementation block
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 isGizmoDate:(BOOL)arg6 startTime:(id)arg7 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 startTime:(id)arg3 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7 hasPublicationDate:(BOOL)arg8 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 ;
+(id)metricForDelayWithID:(unsigned)arg1 class:(Class)arg2 sectionID:(id)arg3 publisherMatchID:(id)arg4 companionPublicationDate:(id)arg5 startTime:(id)arg6 connectionStatus:(unsigned long long)arg7 ;
+(id)metricForDelayAckFromSecondaryDeviceWithSectionID:(id)arg1 publisherMatchID:(id)arg2 companionPublicationDate:(id)arg3 startTime:(id)arg4 connectionStatus:(unsigned long long)arg5 origConnectionStatus:(unsigned long long)arg6 timedOut:(BOOL)arg7 ;
+(id)metricForDelayToSyncWithStartTime:(id)arg1 initial:(BOOL)arg2 ;
-(void)submit;
-(id)initWithMetricID:(unsigned)arg1 class:(Class)arg2 ;
-(id)metric;
@end

