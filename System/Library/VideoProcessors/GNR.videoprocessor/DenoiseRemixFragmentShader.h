/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLRenderPipelineState;
@class NSString;

@interface DenoiseRemixFragmentShader : NSObject {

	id<MTLRenderPipelineState> _pipeline;
	NSString* _fragName;

}
-(id)initWithMetal:(id)arg1 vertFunc:(id)arg2 fragName:(id)arg3 pixelFormat:(unsigned long long)arg4 pixelFormat2:(unsigned long long)arg5 pixelFormat3:(unsigned long long)arg6 ;
@end

