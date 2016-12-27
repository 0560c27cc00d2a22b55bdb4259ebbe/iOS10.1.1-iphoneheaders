/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PowerlogFullOperators.framework/PowerlogFullOperators
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PowerlogCore/PLService.h>

@class AWDServerConnection, NSMutableSet, NSMutableDictionary;

@interface PLAWDMetricsService : PLService {

	AWDServerConnection* _awdServerConn;
	NSMutableSet* _currRunningMetrics;
	NSMutableSet* _updateRunningMetrics;
	NSMutableDictionary* _classDictionary;

}

@property (retain) AWDServerConnection * awdServerConn;                //@synthesize awdServerConn=_awdServerConn - In the implementation block
@property (retain) NSMutableSet * currRunningMetrics;                  //@synthesize currRunningMetrics=_currRunningMetrics - In the implementation block
@property (retain) NSMutableSet * updateRunningMetrics;                //@synthesize updateRunningMetrics=_updateRunningMetrics - In the implementation block
@property (retain) NSMutableDictionary * classDictionary;              //@synthesize classDictionary=_classDictionary - In the implementation block
+(void)load;
+(id)entryAggregateDefinitions;
+(id)entryEventPointDefinitions;
+(id)entryEventNoneDefinitions;
-(id)init;
-(void)initOperatorDependancies;
-(AWDServerConnection *)awdServerConn;
-(void)setAwdServerConn:(AWDServerConnection *)arg1 ;
-(BOOL)initAWDInterface;
-(NSMutableDictionary *)classDictionary;
-(BOOL)connectToAWDServer;
-(NSMutableSet *)currRunningMetrics;
-(void)auxClassWrapper:(id)arg1 withAction:(long long)arg2 ;
-(void)setCurrRunningMetrics:(NSMutableSet *)arg1 ;
-(void)setClassDictionary:(NSMutableDictionary *)arg1 ;
-(void)setUpdateRunningMetrics:(NSMutableSet *)arg1 ;
-(NSMutableSet *)updateRunningMetrics;
-(void)threadFunc;
@end
