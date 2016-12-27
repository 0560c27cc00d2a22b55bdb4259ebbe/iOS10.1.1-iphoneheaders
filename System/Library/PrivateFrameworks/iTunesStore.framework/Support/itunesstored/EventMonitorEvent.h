/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface EventMonitorEvent : NSObject <NSCopying> {

	double _lastOccurrenceCheckTime;
	long long _pollInterval;
	BOOL _shouldKeepDaemonAlive;

}

@property (assign,setter=_setLastOccurrenceCheckTime:,getter=_lastOccurrenceCheckTime,nonatomic) double _lastOccurrenceCheckTime;              //@synthesize lastOccurrenceCheckTime=_lastOccurrenceCheckTime - In the implementation block
@property (nonatomic,readonly) BOOL hasOccurred; 
@property (assign,nonatomic) long long pollInterval;                                                                                           //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,nonatomic) BOOL shouldKeepDaemonAlive;                                                                                       //@synthesize shouldKeepDaemonAlive=_shouldKeepDaemonAlive - In the implementation block
-(void)_setLastOccurrenceCheckTime:(double)arg1 ;
-(BOOL)shouldKeepDaemonAlive;
-(double)_lastOccurrenceCheckTime;
-(BOOL)hasOccurred;
-(void)setPollInterval:(long long)arg1 ;
-(void)setShouldKeepDaemonAlive:(BOOL)arg1 ;
-(long long)pollInterval;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)performAction;
@end

