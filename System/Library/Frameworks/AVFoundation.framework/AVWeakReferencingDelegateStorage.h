/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVDelegateStorage.h>

@protocol OS_dispatch_queue;
@class NSObject, AVWeakReference, NSString;

@interface AVWeakReferencingDelegateStorage : NSObject <AVDelegateStorage> {

	NSObject*<OS_dispatch_queue> _delegateReadWriteQueue;
	AVWeakReference* _weakReferenceToDelegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;

}

@property (nonatomic,readonly) id delegate; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> delegateQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)delegate;
-(id)_delegate;
-(void)_setDelegate:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)invokeDelegateCallbackWithBlock:(/*^block*/id)arg1 ;
-(void)_collectUncollectables;
-(void)getRetainedDelegate:(id*)arg1 retainedDelegateQueue:(id*)arg2 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(void)finalize;
@end

