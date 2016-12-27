/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:26 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CDSession, NSString, NSMutableArray, NSObject, NSMutableDictionary, NSDate;

@interface CDAttribute : NSObject {

	CDSession* _session;
	NSString* _name;
	NSString* _fullName;
	long long _type;
	unsigned long long _integerId;
	NSMutableArray* resourceCallbackList;
	NSMutableArray* revocationCallbackList;
	NSObject*<OS_dispatch_queue> resourceCallbackQueue;
	int resourceCallToken;
	int focalAppToken;
	int conditionChangeToken;
	int systemConditionChangeToken;
	int localFocalInfoToken;
	int revocationToken;
	unsigned short _admissionMask;
	NSMutableDictionary* costCache;
	NSDate* lastUpdate;
	BOOL delayedUpdatePending;
	NSMutableDictionary* tokenCache;
	NSMutableDictionary* dateCache;
	NSMutableArray* activeReports;
	NSObject*<OS_dispatch_queue> _deferredRequestsQ;
	NSObject*<OS_dispatch_queue> admissionCacheQueue;
	NSMutableDictionary* admissionCache;
	CDSession* _sessionStrong;
	CDSession* _sessionWeak;

}

@property (readonly) CDSession * sessionStrong;                                   //@synthesize sessionStrong=_sessionStrong - In the implementation block
@property (__weak,readonly) CDSession * sessionWeak;                              //@synthesize sessionWeak=_sessionWeak - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> deferredRequestsQ;              //@synthesize deferredRequestsQ=_deferredRequestsQ - In the implementation block
@property (readonly) unsigned long long integerId;                                //@synthesize integerId=_integerId - In the implementation block
@property (readonly) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (readonly) NSString * fullName;                                         //@synthesize fullName=_fullName - In the implementation block
@property (readonly) long long type;                                              //@synthesize type=_type - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(long long)type;
-(BOOL)meteringUpdateWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)setResourceAvailabilityBlockWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)initWithMySession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)integerId;
-(id)fullNameFromString:(id)arg1 clientId:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)_initWithSession:(id)arg1 name:(id)arg2 type:(long long)arg3 integerId:(unsigned long long)arg4 weak:(BOOL)arg5 error:(id*)arg6 ;
-(BOOL)attributeIsClientWriteable;
-(BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(BOOL)arg4 fallingEdge:(BOOL)arg5 error:(id*)arg6 ;
-(NSObject*<OS_dispatch_queue>)deferredRequestsQ;
-(BOOL)isBypassClientForValue:(id)arg1 ;
-(BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 risingEdge:(BOOL)arg4 fallingEdge:(BOOL)arg5 deferredRequest:(BOOL)arg6 error:(id*)arg7 ;
-(id)temporalForecastXPCObjectToArray:(id)arg1 attributeValue:(id)arg2 forecastType:(long long)arg3 error:(id*)arg4 ;
-(id)peerForecastXPCObjectToDictionary:(id)arg1 attributeValue:(id)arg2 error:(id*)arg3 ;
-(id)histogramForHistoryWindow:(id)arg1 error:(id*)arg2 ;
-(id)repeatedStatisticXPCObjectToArray:(id)arg1 error:(id*)arg2 ;
-(void)stuffDictionary:(id*)arg1 forStatisticType:(long long)arg2 matchingStatisticType:(long long)arg3 xpcKey:(const char*)arg4 incomingXpcObject:(id)arg5 ;
-(long long)isAdmissionValid:(id)arg1 ;
-(void)addAdmissionValidity:(id)arg1 validity:(long long)arg2 ;
-(void)callListOfCallbacks:(id)arg1 oneshotCall:(BOOL)arg2 callList:(id)arg3 ;
-(BOOL)setRevocationDispatch;
-(BOOL)setResourceDispatch:(id*)arg1 ;
-(id)meteringLookupCachedToken:(id)arg1 ;
-(void)meteringInsertCachedToken:(id)arg1 meteringToken:(unsigned long long)arg2 ;
-(id)updateCostOnDownload:(id)arg1 meteringToken:(unsigned long long)arg2 date:(id)arg3 ;
-(unsigned long long)meteringIsActive:(id)arg1 ;
-(void)updateDuetWithCost;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 forecastType:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(BOOL)backgroundLaunchStartedWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)backgroundLaunchStoppedWithValue:(id)arg1 error:(id*)arg2 ;
-(BOOL)activityStartedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(BOOL)activityStartedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(BOOL)activityStoppedWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)activityWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 block:(/*^block*/id)arg4 ;
-(BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(double)correlationOfValue:(id)arg1 toAttribute:(id)arg2 withValue:(id)arg3 temporalLeeway:(double)arg4 error:(id*)arg5 ;
-(id)distinctValuesForHistoryWindow:(id)arg1 error:(id*)arg2 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 error:(id*)arg3 ;
-(BOOL)admissionCheckOfValue:(id)arg1 andStartedWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
-(BOOL)admissionCheckOfValue:(id)arg1 andOccurredWithValue:(id)arg2 cost:(long long)arg3 type:(long long)arg4 options:(id)arg5 error:(id*)arg6 handler:(/*^block*/id)arg7 ;
-(void)admissionCheckOfValueAsync:(id)arg1 type:(long long)arg2 options:(id)arg3 handleQueue:(id)arg4 handler:(/*^block*/id)arg5 ;
-(BOOL)setTrendBlockForValue:(id)arg1 withConfig:(id)arg2 error:(id*)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)setAdmissionRevocationBlockWithError:(id*)arg1 handler:(/*^block*/id)arg2 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 device:(id)arg3 error:(id*)arg4 ;
-(id)historyOfValue:(id)arg1 forWindow:(id)arg2 filter:(long long)arg3 maximumElements:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)reset:(long long)arg1 error:(id*)arg2 ;
-(id)temporalForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)peerForecastOfValue:(id)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 forecastType:(long long)arg4 temporalLeeway:(double)arg5 maximumElements:(unsigned long long)arg6 error:(id*)arg7 ;
-(id)statistic:(long long)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id*)arg4 ;
-(id)repeatedStatistic:(long long)arg1 forHistoryWindow:(id)arg2 deviceDescription:(id)arg3 error:(id*)arg4 ;
-(BOOL)setAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)resetAdmissionBitMask:(unsigned long long)arg1 error:(id*)arg2 ;
-(BOOL)requestTemporalForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(BOOL)requestPeerForecastFromDevice:(id)arg1 withValue:(id)arg2 forHistoryWindow:(id)arg3 forecastType:(long long)arg4 error:(id*)arg5 handler:(/*^block*/id)arg6 ;
-(BOOL)requestStatisticFromDevice:(id)arg1 statistic:(long long)arg2 forHistoryWindow:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(CDSession *)sessionStrong;
-(CDSession *)sessionWeak;
-(unsigned long long)meteringStartedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 error:(id*)arg4 ;
-(BOOL)meteringStoppedWithValue:(id)arg1 costDictionary:(id)arg2 onDate:(id)arg3 meteringToken:(unsigned long long)arg4 error:(id*)arg5 ;
-(BOOL)destroyWithError:(id*)arg1 ;
-(id)session;
-(BOOL)setCategory:(long long)arg1 error:(id*)arg2 ;
-(BOOL)associateToBudget:(id)arg1 error:(id*)arg2 ;
-(BOOL)occurredWithValue:(id)arg1 cost:(long long)arg2 error:(id*)arg3 ;
-(BOOL)admissionCheckOfValue:(id)arg1 type:(long long)arg2 options:(id)arg3 error:(id*)arg4 handler:(/*^block*/id)arg5 ;
-(NSString *)fullName;
@end

