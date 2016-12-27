/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSPArchiverManagerDelegate, OS_dispatch_queue;
#import <iWorkImport/iWorkImport-Structs.h>
@class NSMapTable, NSObject, TSPDescriptionGenerator;

@interface TSPArchiverManager : NSObject {

	id<TSPArchiverManagerDelegate> _delegate;
	Class _archiverClass;
	NSMapTable* _archivers;
	NSObject*<OS_dispatch_queue> _archiversHighQueue;
	NSObject*<OS_dispatch_queue> _archiversLowQueue;
	NSObject*<OS_dispatch_queue> _archiveHighQueue;
	NSObject*<OS_dispatch_queue> _archiveDefaultQueue;
	NSObject*<OS_dispatch_queue> _archiveLowQueue;
	NSObject*<OS_dispatch_queue> _archiveCompletionQueue;
	struct {
		unsigned isStopped : 1;
		unsigned delegateRespondsToDidCreateArchiver : 1;
		unsigned delegateRespondsToShouldDelayArchivingObject : 1;
	}  _flags;
	TSPDescriptionGenerator* _descriptionGenerator;

}

@property (nonatomic,retain) TSPDescriptionGenerator * descriptionGenerator;              //@synthesize descriptionGenerator=_descriptionGenerator - In the implementation block
-(void)archiveObjectWithHighPriority:(id)arg1 ;
-(void)performAsynchronousArchiverAccessUsingBlock:(/*^block*/id)arg1 ;
-(id)explicitComponentRootObjectForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2 ;
-(void)archiveObjectWithLowPriority:(id)arg1 ;
-(void)archiverForObject:(id)arg1 hasArchiverAccessLock:(BOOL)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)initWithDelegate:(id)arg1 archiverClass:(Class)arg2 ;
-(void)impl_archiverForObject:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)archiverForObject:(id)arg1 archiveQueue:(id)arg2 archiveCompletion:(/*^block*/id)arg3 ;
-(id)impl_explicitComponentRootObjectForObject:(id)arg1 ;
-(void)archiveWithArchiver:(id)arg1 queue:(id)arg2 archiveCompletion:(/*^block*/id)arg3 ;
-(TSPDescriptionGenerator *)descriptionGenerator;
-(void)setDescriptionGenerator:(TSPDescriptionGenerator *)arg1 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(id)initWithDelegate:(id)arg1 ;
@end

