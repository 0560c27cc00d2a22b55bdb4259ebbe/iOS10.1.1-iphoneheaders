/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>

@property (assign,nonatomic) unsigned long long pixelFormat; 
@property (assign,getter=isBlendingEnabled,nonatomic) BOOL blendingEnabled; 
@property (assign,nonatomic) unsigned long long sourceRGBBlendFactor; 
@property (assign,nonatomic) unsigned long long destinationRGBBlendFactor; 
@property (assign,nonatomic) unsigned long long rgbBlendOperation; 
@property (assign,nonatomic) unsigned long long sourceAlphaBlendFactor; 
@property (assign,nonatomic) unsigned long long destinationAlphaBlendFactor; 
@property (assign,nonatomic) unsigned long long alphaBlendOperation; 
@property (assign,nonatomic) unsigned long long writeMask; 
+(id)alloc;
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

