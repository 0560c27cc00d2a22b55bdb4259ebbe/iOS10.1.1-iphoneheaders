/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSString, CallSegment, NSMutableDictionary, NSObject;

@interface VCAggregator : NSObject {

	BOOL _isDuplicationEnabled;
	NSString* _localInterfaceType;
	NSString* _remoteInterfaceType;
	NSString* _connectionType;
	NSString* _currentSegmentKey;
	CallSegment* _currentSegment;
	NSMutableDictionary* _aggregatedStats;
	int _duration;
	NSObject*<OS_dispatch_queue> _stateQueue;

}
-(id)init;
-(void)dealloc;
-(void)reset;
-(id)interfaceTypeIndicator:(BOOL)arg1 ;
-(id)connectionTypeIndicator;
-(id)duplicationIndicator;
-(void)flushCurrentSegment;
-(BOOL)didUpdateStringFrom:(id*)arg1 toString:(id)arg2 ;
-(void)startNewSegment;
-(BOOL)changeDuplication:(BOOL)arg1 ;
-(void)updateRTStats:(id)arg1 ;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(id)segments;
@end

