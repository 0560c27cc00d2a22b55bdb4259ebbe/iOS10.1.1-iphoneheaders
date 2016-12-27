/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSNumber, NSDictionary, NSString, NSArray;

@interface SiriCoreConnectionMetrics : NSObject {

	NSNumber* _timeUntilOpen;
	NSNumber* _timeUntilFirstByteRead;
	NSNumber* _attemptCount;
	NSNumber* _metricsCount;
	NSNumber* _meanPing;
	NSNumber* _pingCount;
	NSDictionary* _tcpInfoMetricsByInterfaceName;
	NSNumber* _subflowCount;
	NSNumber* _connectedSubflowCount;
	NSString* _primarySubflowInterfaceName;
	NSDictionary* _subflowSwitchCounts;
	SiriCoreConnectionMetrics* _remoteMetrics;
	NSString* _connectionMethod;
	NSString* _connectionEdgeID;
	NSArray* _connectionMethodHistory;
	NSString* _connectionEdgeType;
	NSNumber* _connectionFallbackReason;
	NSNumber* _connectionDelay;
	NSNumber* _firstTxByteDelay;
	NSString* _carrierName;
	NSDictionary* _flowNetworkInterfaceType;

}

@property (nonatomic,copy) NSNumber * timeUntilOpen;                                                                           //@synthesize timeUntilOpen=_timeUntilOpen - In the implementation block
@property (nonatomic,copy) NSNumber * timeUntilFirstByteRead;                                                                  //@synthesize timeUntilFirstByteRead=_timeUntilFirstByteRead - In the implementation block
@property (nonatomic,copy) NSNumber * attemptCount;                                                                            //@synthesize attemptCount=_attemptCount - In the implementation block
@property (nonatomic,copy) NSNumber * metricsCount;                                                                            //@synthesize metricsCount=_metricsCount - In the implementation block
@property (nonatomic,copy) NSNumber * meanPing;                                                                                //@synthesize meanPing=_meanPing - In the implementation block
@property (nonatomic,copy) NSNumber * pingCount;                                                                               //@synthesize pingCount=_pingCount - In the implementation block
@property (setter=setTCPInfoMetricsByInterfaceName:,nonatomic,copy) NSDictionary * tcpInfoMetricsByInterfaceName;              //@synthesize tcpInfoMetricsByInterfaceName=_tcpInfoMetricsByInterfaceName - In the implementation block
@property (nonatomic,copy) NSNumber * subflowCount;                                                                            //@synthesize subflowCount=_subflowCount - In the implementation block
@property (nonatomic,copy) NSNumber * connectedSubflowCount;                                                                   //@synthesize connectedSubflowCount=_connectedSubflowCount - In the implementation block
@property (nonatomic,copy) NSString * primarySubflowInterfaceName;                                                             //@synthesize primarySubflowInterfaceName=_primarySubflowInterfaceName - In the implementation block
@property (nonatomic,copy) NSDictionary * subflowSwitchCounts;                                                                 //@synthesize subflowSwitchCounts=_subflowSwitchCounts - In the implementation block
@property (nonatomic,retain) SiriCoreConnectionMetrics * remoteMetrics;                                                        //@synthesize remoteMetrics=_remoteMetrics - In the implementation block
@property (nonatomic,copy) NSString * connectionMethod;                                                                        //@synthesize connectionMethod=_connectionMethod - In the implementation block
@property (nonatomic,copy) NSString * connectionEdgeID;                                                                        //@synthesize connectionEdgeID=_connectionEdgeID - In the implementation block
@property (nonatomic,copy) NSArray * connectionMethodHistory;                                                                  //@synthesize connectionMethodHistory=_connectionMethodHistory - In the implementation block
@property (nonatomic,copy) NSString * connectionEdgeType;                                                                      //@synthesize connectionEdgeType=_connectionEdgeType - In the implementation block
@property (nonatomic,copy) NSNumber * connectionFallbackReason;                                                                //@synthesize connectionFallbackReason=_connectionFallbackReason - In the implementation block
@property (nonatomic,copy) NSNumber * connectionDelay;                                                                         //@synthesize connectionDelay=_connectionDelay - In the implementation block
@property (nonatomic,copy) NSNumber * firstTxByteDelay;                                                                        //@synthesize firstTxByteDelay=_firstTxByteDelay - In the implementation block
@property (nonatomic,copy) NSString * carrierName;                                                                             //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy) NSDictionary * flowNetworkInterfaceType;                                                            //@synthesize flowNetworkInterfaceType=_flowNetworkInterfaceType - In the implementation block
-(NSNumber *)metricsCount;
-(NSNumber *)attemptCount;
-(void)setAttemptCount:(NSNumber *)arg1 ;
-(NSNumber *)pingCount;
-(NSNumber *)connectionDelay;
-(NSNumber *)firstTxByteDelay;
-(void)setConnectionDelay:(NSNumber *)arg1 ;
-(void)setFirstTxByteDelay:(NSNumber *)arg1 ;
-(NSString *)carrierName;
-(void)setConnectionMetricsFromStreamForPOP:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setConnectionMetricsFromStreamForDirect:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setTCPInfoMetricsByInterfaceName:(id)arg1 ;
-(void)setFlowNetworkInterfaceType:(NSDictionary *)arg1 ;
-(void)setSubflowCount:(NSNumber *)arg1 ;
-(void)setConnectedSubflowCount:(NSNumber *)arg1 ;
-(void)setPrimarySubflowInterfaceName:(NSString *)arg1 ;
-(void)setSubflowSwitchCounts:(NSDictionary *)arg1 ;
-(void)setConnectionMethod:(NSString *)arg1 ;
-(void)setConnectionEdgeID:(NSString *)arg1 ;
-(void)setConnectionEdgeType:(NSString *)arg1 ;
-(void)setConnectionFallbackReason:(NSNumber *)arg1 ;
-(void)setConnectionMetricsFromStream:(id)arg1 isPop:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSNumber *)timeUntilOpen;
-(void)setTimeUntilOpen:(NSNumber *)arg1 ;
-(NSNumber *)timeUntilFirstByteRead;
-(void)setTimeUntilFirstByteRead:(NSNumber *)arg1 ;
-(void)setMetricsCount:(NSNumber *)arg1 ;
-(NSNumber *)meanPing;
-(void)setMeanPing:(NSNumber *)arg1 ;
-(void)setPingCount:(NSNumber *)arg1 ;
-(NSDictionary *)tcpInfoMetricsByInterfaceName;
-(NSNumber *)subflowCount;
-(NSNumber *)connectedSubflowCount;
-(NSString *)primarySubflowInterfaceName;
-(NSDictionary *)subflowSwitchCounts;
-(SiriCoreConnectionMetrics *)remoteMetrics;
-(void)setRemoteMetrics:(SiriCoreConnectionMetrics *)arg1 ;
-(NSString *)connectionMethod;
-(NSString *)connectionEdgeID;
-(NSArray *)connectionMethodHistory;
-(void)setConnectionMethodHistory:(NSArray *)arg1 ;
-(NSString *)connectionEdgeType;
-(NSNumber *)connectionFallbackReason;
-(NSDictionary *)flowNetworkInterfaceType;
-(void)setCarrierName:(NSString *)arg1 ;
@end

