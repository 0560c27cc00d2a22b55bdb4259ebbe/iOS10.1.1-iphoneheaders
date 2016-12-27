/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PASampling/PASampleFrameIterator.h>

@class PAStackshotThread, PASampleKernelFrame, PASampleUserFrame, NSString;

@interface PASampleFrameStackshotIterator : NSObject <PASampleFrameIterator> {

	PAStackshotThread* _stackshotThread;
	PASampleKernelFrame* _kernel;
	PASampleUserFrame* _user;
	BOOL _hideKernelFrames;
	BOOL _hideUserFrames;

}

@property (retain) PAStackshotThread * stackshotThread;              //@synthesize stackshotThread=_stackshotThread - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)iterateFrames:(/*^block*/id)arg1 ;
-(void)exposeUserFramesOnly;
-(void)exposeKernelFramesOnly;
-(void)exposeAllFrames;
-(PAStackshotThread *)stackshotThread;
-(void)setStackshotThread:(PAStackshotThread *)arg1 ;
@end

