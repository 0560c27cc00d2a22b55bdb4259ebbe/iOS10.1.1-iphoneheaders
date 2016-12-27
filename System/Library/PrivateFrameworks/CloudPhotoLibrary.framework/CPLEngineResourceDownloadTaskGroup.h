/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSSet;

@interface CPLEngineResourceDownloadTaskGroup : NSObject {

	NSMutableSet* _activeTasks;

}

@property (nonatomic,readonly) NSSet * activeTasks;                          //@synthesize activeTasks=_activeTasks - In the implementation block
@property (getter=isComplete,nonatomic,readonly) BOOL complete; 
-(id)initWithTasks:(id)arg1 ;
-(BOOL)isTrackingTask:(id)arg1 ;
-(void)taskDidComplete:(id)arg1 ;
-(NSSet *)activeTasks;
-(BOOL)isComplete;
@end

