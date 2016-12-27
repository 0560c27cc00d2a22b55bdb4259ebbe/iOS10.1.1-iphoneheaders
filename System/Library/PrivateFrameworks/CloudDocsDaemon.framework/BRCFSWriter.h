/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <libobjc.A.dylib/BRCModule.h>

@protocol OS_dispatch_queue;
@class BRCAccountSession, NSObject, brc_task_tracker, NSString;

@interface BRCFSWriter : NSObject <BRCModule> {

	BRCAccountSession* _session;
	Ai _suspendCount;
	NSObject*<OS_dispatch_queue> _serialQueue;
	brc_task_tracker* _taskTracker;
	BOOL _isCancelled;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,readonly) brc_task_tracker * taskTracker;                        //@synthesize taskTracker=_taskTracker - In the implementation block
@property (nonatomic,readonly) BRCAccountSession * session;                           //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isCancelled;                                      //@synthesize isCancelled=_isCancelled - In the implementation block
+(BOOL)_isPathMatchIdle:(const SCD_Struct_BR8*)arg1 ;
-(void)cancel;
-(void)suspend;
-(BOOL)isCancelled;
-(void)resume;
-(void)close;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(BRCAccountSession *)session;
-(brc_task_tracker *)taskTracker;
-(id)initWithAccountSession:(id)arg1 ;
-(void)applyChangesForServerItem:(id)arg1 localItem:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 activity:(id)arg5 hasFinished:(BOOL*)arg6 ;
-(void)fixupItemsAtStartup;
-(id)bouncePath:(id)arg1 toPreservePathMatch:(id)arg2 ;
-(id)_generateGentleBounceForPathMatch:(const SCD_Struct_BR8*)arg1 dirfd:(int)arg2 lastBounceNo:(unsigned long long*)arg3 ;
-(BOOL)bouncePathMatch:(const SCD_Struct_BR8*)arg1 toApplyServerItem:(id)arg2 clientZone:(id)arg3 ;
-(void)_applyChangesForServerAlias:(id)arg1 localAlias:(id)arg2 throttleID:(long long)arg3 zone:(id)arg4 diffs:(unsigned long long)arg5 ;
-(void)_stageCreationOfDirectory:(id)arg1 ;
-(void)_stageCreationOfSymlink:(id)arg1 ;
-(void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3 ;
-(void)_writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(BOOL)arg3 ;
@end

