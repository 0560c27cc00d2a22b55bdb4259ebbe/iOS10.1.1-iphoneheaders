/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppLaunchStats/AppLaunchStats-Structs.h>
#import <libobjc.A.dylib/DuetLoggerProtocol.h>
#import <libobjc.A.dylib/DuetSaveAndRestore.h>

@protocol OS_dispatch_queue;
@class NSObject, AppLaunchStatsSaveAndRestore, NSMutableDictionary;

@interface AppLaunchStatsDelayLaunch : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {

	NSObject*<OS_dispatch_queue> aplsDelayLaunchQueue;
	AppLaunchStatsSaveAndRestore* saveAndRestoreContext;
	NSMutableDictionary* delayLaunchList;
	NSMutableDictionary* delayLaunchTimeInterval;

}
-(id)init;
-(void)save:(id)arg1 ;
-(void)logAll:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)logLight:(asl_object_sRef)arg1 withMsg:(asl_object_sRef)arg2 withLevel:(int)arg3 ;
-(void)restore:(id)arg1 ;
-(void)delayLaunch:(id)arg1 with:(double)arg2 ;
-(void)resetDelayLaunch:(id)arg1 ;
-(int)valueSetForDelay:(id)arg1 ;
-(BOOL)shouldDelayLaunch:(id)arg1 forTrending:(BOOL)arg2 ;
-(void)saveContext:(id)arg1 ;
@end

