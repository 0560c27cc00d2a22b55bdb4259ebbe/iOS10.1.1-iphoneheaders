/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLComputePipelineStateSPI.h>

@protocol MTLFunction;
@class NSString;

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI> {

	id<MTLFunction> _function;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long maxTotalThreadsPerThreadgroup; 
@property (readonly) unsigned long long threadExecutionWidth; 
@property (readonly) unsigned long long staticThreadgroupMemoryLength; 
-(unsigned long long)threadExecutionWidth;
-(unsigned long long)maxTotalThreadsPerThreadgroup;
-(id<MTLDevice>)device;
-(void)acceptVisitor:(id)arg1 ;
-(unsigned long long)staticThreadgroupMemoryLength;
@end

