/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:42:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/QRM.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderPipelineState, MTLBuffer;
@interface GradientCalcContextObjC : NSObject {

	void* mCtx;
	id<MTLRenderPipelineState> pipelineState;
	id<MTLBuffer> vertexBuf;
	id<MTLBuffer> fragUniBuf;
	void* fragUniBufHostAddr;

}
@end

