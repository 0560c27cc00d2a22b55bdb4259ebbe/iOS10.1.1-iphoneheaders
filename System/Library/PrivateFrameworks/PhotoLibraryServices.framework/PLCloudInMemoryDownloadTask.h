/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, NSString, CPLResourceTransferTask, NSArray;

@interface PLCloudInMemoryDownloadTask : NSObject {

	NSMapTable* _taskIDsToCompletionHandlers;
	BOOL _completed;
	NSString* _resourceID;
	CPLResourceTransferTask* _transferTask;

}

@property (nonatomic,copy,readonly) NSString * resourceID;                        //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,retain) CPLResourceTransferTask * transferTask;              //@synthesize transferTask=_transferTask - In the implementation block
@property (getter=isCompleted,nonatomic,readonly) BOOL completed;                 //@synthesize completed=_completed - In the implementation block
@property (nonatomic,readonly) NSArray * taskIDs; 
-(void)dealloc;
-(BOOL)isCompleted;
-(void)setTransferTask:(CPLResourceTransferTask *)arg1 ;
-(NSArray *)taskIDs;
-(id)initWithResourceID:(id)arg1 taskID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)addClientWithTaskID:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)cancelClientWithTaskID:(id)arg1 ;
-(void)reportCompletionWithData:(id)arg1 error:(id)arg2 ;
-(NSString *)resourceID;
-(CPLResourceTransferTask *)transferTask;
@end

