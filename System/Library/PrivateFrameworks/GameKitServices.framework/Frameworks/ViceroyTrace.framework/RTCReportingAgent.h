/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class RTCReporting, NSObject, NSArray, VCAggregator;

@interface RTCReportingAgent : NSObject {

	RTCReporting* _reportingObject;
	int _client;
	NSObject*<OS_dispatch_queue> _reportingQueue;
	NSArray* _backends;
	BOOL _isUserInfoSet;
	VCAggregator* _aggregator;
	/*^block*/id _aggregationBlock;

}

@property (retain) RTCReporting * reportingObject;                             //@synthesize reportingObject=_reportingObject - In the implementation block
@property (assign) int client;                                                 //@synthesize client=_client - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> reportingQueue;              //@synthesize reportingQueue=_reportingQueue - In the implementation block
@property (copy) NSArray * backends;                                           //@synthesize backends=_backends - In the implementation block
@property (assign) BOOL isUserInfoSet;                                         //@synthesize isUserInfoSet=_isUserInfoSet - In the implementation block
@property (retain) VCAggregator * aggregator;                                  //@synthesize aggregator=_aggregator - In the implementation block
-(void)dealloc;
-(void)sendAggregatedReport;
-(id)initWithCallID:(unsigned)arg1 clientType:(int)arg2 ;
-(void)releaseReportingObject;
-(RTCReporting *)reportingObject;
-(void)setReportingObject:(RTCReporting *)arg1 ;
-(NSObject*<OS_dispatch_queue>)reportingQueue;
-(void)setBackends:(NSArray *)arg1 ;
-(BOOL)isUserInfoSet;
-(void)setIsUserInfoSet:(BOOL)arg1 ;
-(void)setAggregator:(VCAggregator *)arg1 ;
-(int)client;
-(NSArray *)backends;
-(void)setClient:(int)arg1 ;
-(VCAggregator *)aggregator;
@end

