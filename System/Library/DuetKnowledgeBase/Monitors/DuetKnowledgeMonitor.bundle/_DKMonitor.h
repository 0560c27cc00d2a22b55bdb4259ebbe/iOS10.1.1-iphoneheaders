/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/DuetKnowledgeBase/Monitors/DuetKnowledgeMonitor.bundle/DuetKnowledgeMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_DKInstantMonitor.h>
#import <libobjc.A.dylib/_DKHistoricalMonitor.h>

@protocol OS_dispatch_queue;
@class _DKEvent, NSDate, NSDictionary, NSString, NSMutableDictionary, NSObject;

@interface _DKMonitor : NSObject <_DKInstantMonitor, _DKHistoricalMonitor> {

	NSDictionary* _state;
	NSString* _bootSessionUUID;
	/*^block*/id instantHandler;
	/*^block*/id historicalHandler;
	NSDate* lastUpdate;
	_DKEvent* _currentEvent;
	NSMutableDictionary* _instantState;
	NSMutableDictionary* _historicalState;
	/*^block*/id _eventComparator;
	/*^block*/id _filter;
	long long _references;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _eventQueue;

}

@property (nonatomic,retain) NSDate * lastUpdate; 
@property (nonatomic,retain) _DKEvent * currentEvent;                                //@synthesize currentEvent=_currentEvent - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> eventQueue;              //@synthesize eventQueue=_eventQueue - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * instantState;                   //@synthesize instantState=_instantState - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * historicalState;                //@synthesize historicalState=_historicalState - In the implementation block
@property (nonatomic,copy) id eventComparator;                                       //@synthesize eventComparator=_eventComparator - In the implementation block
@property (nonatomic,copy) id filter;                                                //@synthesize filter=_filter - In the implementation block
@property (nonatomic,readonly) long long references;                                 //@synthesize references=_references - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                   //@synthesize queue=_queue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id instantHandler; 
@property (nonatomic,copy) id historicalHandler; 
+(BOOL)shouldMergeUnchangedEvents;
+(id)eventStream;
+(id)entitlements;
-(NSMutableDictionary *)instantState;
-(BOOL)instantMonitorNeedsDeactivation;
-(id)eventComparator;
-(NSMutableDictionary *)historicalState;
-(void)setCurrentEvent:(id)arg1 inferHistoricalState:(BOOL)arg2 ;
-(BOOL)instantMonitorNeedsActivation;
-(void)setEventComparator:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)setFilter:(id)arg1 ;
-(void)start;
-(NSDate *)lastUpdate;
-(void)update;
-(NSObject*<OS_dispatch_queue>)eventQueue;
-(_DKEvent *)currentEvent;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)synchronouslyReflectCurrentValue;
-(id)instantHandler;
-(void)setInstantHandler:(id)arg1 ;
-(id)historicalHandler;
-(void)setHistoricalHandler:(id)arg1 ;
-(id)loadState;
-(id)filter;
-(void)saveState;
-(void)setCurrentEvent:(_DKEvent *)arg1 ;
-(long long)references;
-(void)setLastUpdate:(NSDate *)arg1 ;
@end

