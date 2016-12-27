/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Support/pasted
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PBPasteboardModel : NSObject {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSMutableDictionary* _workQueue_pasteboardCache;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                       //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * workQueue_pasteboardCache;              //@synthesize workQueue_pasteboardCache=_workQueue_pasteboardCache - In the implementation block
+(id)sharedModel;
-(void)setWorkQueue_pasteboardCache:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)workQueue_pasteboardCache;
-(id)workQueue_unserializePasteboardWithPersistenceName:(id)arg1 ;
-(void)workQueue_deletePasteboardWithPersistenceName:(id)arg1 ;
-(id)workQueue_pasteboardWithPersistenceName:(id)arg1 name:(id)arg2 localOnly:(BOOL)arg3 ;
-(void)workQueue_faultMetadataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)getPasteboardWithPersistenceName:(id)arg1 name:(id)arg2 createIfNeeded:(BOOL)arg3 localOnly:(BOOL)arg4 processInfo:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)workQueue_faultDataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_clearRemotePasteboard;
-(void)_pushRemotePasteboard:(id)arg1 ;
-(id)workQueue_getAllPasteboardsOutError:(id*)arg1 ;
-(void)workQueue_deleteOrphanedPasteboardFiles;
-(void)getPasteboardNamed:(id)arg1 bundleID:(id)arg2 teamID:(id)arg3 createIfNeeded:(BOOL)arg4 localOnly:(BOOL)arg5 processInfo:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(void)getExistingPasteboardWithPersistenceName:(id)arg1 name:(id)arg2 UUID:(id)arg3 processInfo:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)savePasteboard:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)deletePasteboardNamed:(id)arg1 bundleID:(id)arg2 teamID:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)deleteOrphanedPasteboardFilesCompletionBlock:(/*^block*/id)arg1 ;
-(void)_remotePasteboardDidBecomeAvailable:(BOOL)arg1 ;
-(void)_remotePasteboardWillBeFetched:(/*^block*/id)arg1 ;
-(void)startContinuityWatchdog:(unsigned long long)arg1 ;
-(void)updateContinuityOperationCount;
-(void)workQueue_reallyFaultMetadataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueue_saveGeneralPasteboardFromContinuityPasteboard:(id)arg1 ;
-(void)workQueue_reallyFaultDataForRemotePasteboard:(id)arg1 processInfo:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)workQueue_createRemoteGeneralPasteboardWithChangeCount:(long long)arg1 ;
-(void)workQueue_removeRemotePasteboardAndRestoreGeneralPasteboard;
-(id)_init;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)getAllPasteboardsCompletionBlock:(/*^block*/id)arg1 ;
@end

