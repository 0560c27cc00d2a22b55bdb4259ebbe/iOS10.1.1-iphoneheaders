/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLComputePipelineDescriptor.h>

@interface MTLComputePipelineDescriptorInternal : MTLComputePipelineDescriptor {

	MTLComputePipelineDescriptorPrivate* _private;

}
-(void)validateWithDevice:(id)arg1 ;
-(id)computeFunction;
-(id)newSerializedComputeData;
-(const MTLComputePipelineDescriptorPrivate*)_descriptorPrivate;
-(void)setStageInputDescriptor:(id)arg1 ;
-(id)stageInputDescriptor;
-(void)setThreadGroupSizeIsMultipleOfThreadExecutionWidth:(BOOL)arg1 ;
-(BOOL)threadGroupSizeIsMultipleOfThreadExecutionWidth;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)label;
-(void)setLabel:(id)arg1 ;
-(void)setComputeFunction:(id)arg1 ;
@end

