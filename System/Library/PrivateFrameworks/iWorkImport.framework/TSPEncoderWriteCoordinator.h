/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/TSPArchiverManagerDelegate.h>
#import <iWorkImport/TSPComponentWriterDelegate.h>
#import <iWorkImport/TSPDataArchiver.h>
#import <iWorkImport/TSPObjectModifyDelegate.h>
#import <iWorkImport/TSPProxyObjectMapping.h>

@protocol TSPEncoder, TSPEncoderWriteCoordinatorDelegate, OS_dispatch_queue;
@class TSPArchiverManager, NSMutableArray, NSObject, NSHashTable, TSURetainedPointerKeyDictionary, TSPObjectContext, NSString, NSURL;

@interface TSPEncoderWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPObjectModifyDelegate, TSPProxyObjectMapping> {

	id<TSPEncoder> _encoder;
	TSPArchiverManager* _archiverManager;
	id<TSPEncoderWriteCoordinatorDelegate> _delegate;
	BOOL _didStopCapturingSnapshots;
	NSMutableArray* _dataFinalizeHandlers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSHashTable* _delayedObjects;
	BOOL _hasProxyObjects;
	TSURetainedPointerKeyDictionary* _proxyObjectMap;
	TSPObjectContext* _context;

}

@property (nonatomic,__weak,readonly) TSPObjectContext * context;               //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSURL * relativeURLForExternalData; 
-(NSURL *)relativeURLForExternalData;
-(void)stopCapturingSnapshots;
-(unsigned long long)objectTargetType;
-(void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2 shouldCaptureSnapshot:(BOOL)arg3 ;
-(id)initWithEncoder:(id)arg1 context:(id)arg2 archiverClass:(Class)arg3 delegate:(id)arg4 ;
-(void)writeRootObject:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)proxyForReferencedObject:(id)arg1 ;
-(void)archiverManager:(id)arg1 didCreateArchiver:(id)arg2 ;
-(BOOL)archiverManager:(id)arg1 shouldDelayArchivingObject:(id)arg2 ;
-(unsigned long long)objectTargetTypeForComponentWriter:(id)arg1 ;
-(id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 archiverOrNil:(id)arg3 claimingComponent:(id)arg4 hasArchiverAccessLock:(BOOL)arg5 ;
-(void)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)componentWriter:(id)arg1 shouldDelayWritingObject:(id)arg2 ;
-(void)addDataFinalizeHandlerForSuccessfulSave:(/*^block*/id)arg1 ;
-(BOOL)shouldDelayArchivingObject:(id)arg1 ;
-(void)delayArchivingOfObject:(id)arg1 ;
-(void)setProxy:(id)arg1 forReferencedObject:(id)arg2 ;
-(void)skipArchivingObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(TSPObjectContext *)context;
@end

