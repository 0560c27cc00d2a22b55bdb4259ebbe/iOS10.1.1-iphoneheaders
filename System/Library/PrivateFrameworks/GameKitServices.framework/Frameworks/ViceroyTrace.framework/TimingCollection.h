/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface TimingCollection : NSObject {

	NSMutableDictionary* timings;
	NSObject*<OS_dispatch_queue> queue;

}
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isValidTimingForKey:(int)arg1 ;
-(float)timingForKey:(int)arg1 ;
-(void)setTiming:(float)arg1 forKey:(int)arg2 ;
-(float)totalTimeForKey:(int)arg1 ;
-(void)removeTimingForKey:(int)arg1 ;
-(BOOL)hasKey:(int)arg1 ;
-(void)startTimingForKey:(int)arg1 ;
-(void)stopTimingForKey:(int)arg1 ;
@end

