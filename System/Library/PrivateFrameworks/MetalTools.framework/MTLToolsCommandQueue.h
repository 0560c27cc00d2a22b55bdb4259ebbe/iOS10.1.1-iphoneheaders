/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLCommandQueueSPI.h>

@class MTLToolsPointerArray, NSString;

@interface MTLToolsCommandQueue : MTLToolsObject <MTLCommandQueueSPI> {

	MTLToolsPointerArray* _commandBuffers;

}

@property (nonatomic,readonly) MTLToolsPointerArray * commandBuffers;                               //@synthesize commandBuffers=_commandBuffers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (assign) int backgroundTrackingPID; 
@property (readonly) unsigned long long maxCommandBufferCount; 
@property (readonly) unsigned long long qosClass; 
@property (readonly) long long qosRelativePriority; 
@property (assign) BOOL skipRender; 
@property (assign) BOOL executionEnabled; 
@property (assign) BOOL isOpenGLQueue; 
@property (getter=isProfilingEnabled) BOOL profilingEnabled; 
@property (assign,getter=isStatEnabled,nonatomic) BOOL StatEnabled; 
@property (assign,getter=getStatOptions,nonatomic) unsigned long long StatOptions; 
@property (assign,getter=getStatLocations,nonatomic) unsigned long long StatLocations; 
-(BOOL)isProfilingEnabled;
-(id)initWithBaseObject:(id)arg1 parent:(id)arg2 ;
-(unsigned long long)maxCommandBufferCount;
-(BOOL)isStatEnabled;
-(BOOL)setGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 offset:(unsigned short)arg2 ;
-(int)backgroundTrackingPID;
-(BOOL)skipRender;
-(void)setStatEnabled:(BOOL)arg1 ;
-(long long)qosRelativePriority;
-(BOOL)isOpenGLQueue;
-(int)requestCounters:(id)arg1 ;
-(id)availableCounters;
-(void)addPerfSampleHandler:(/*^block*/id)arg1 ;
-(int)requestCounters:(id)arg1 withIndex:(unsigned long long)arg2 ;
-(void)setSkipRender:(BOOL)arg1 ;
-(unsigned long long)getStatOptions;
-(void)setStatOptions:(unsigned long long)arg1 ;
-(unsigned long long)getStatLocations;
-(void)setStatLocations:(unsigned long long)arg1 ;
-(BOOL)executionEnabled;
-(void)setExecutionEnabled:(BOOL)arg1 ;
-(void)setBackgroundTrackingPID:(int)arg1 ;
-(void)setIsOpenGLQueue:(BOOL)arg1 ;
-(void)setSubmissionQueue:(id)arg1 ;
-(BOOL)setBackgroundGPUPriority:(unsigned long long)arg1 ;
-(BOOL)setGPUPriority:(unsigned long long)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)finish;
-(unsigned long long)qosClass;
-(void)insertDebugCaptureBoundary;
-(id)commandBufferWithUnretainedReferences;
-(id)commandBuffer;
-(void)setProfilingEnabled:(BOOL)arg1 ;
-(id<MTLDevice>)device;
-(void)setCompletionQueue:(id)arg1 ;
-(void)acceptVisitor:(id)arg1 ;
-(id)subdivideCounterList:(id)arg1 ;
-(id)getRequestedCounters;
-(id)counterInfo;
-(MTLToolsPointerArray *)commandBuffers;
@end

