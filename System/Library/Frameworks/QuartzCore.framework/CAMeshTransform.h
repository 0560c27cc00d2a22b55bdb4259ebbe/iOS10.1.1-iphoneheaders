/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface CAMeshTransform : NSObject <NSCoding, NSCopying, NSMutableCopying> {

	void* _impl;
	unsigned long long _normalization;
	long long _subdivisionSteps;

}

@property (readonly) unsigned long long vertexCount; 
@property (readonly) unsigned long long faceCount; 
@property (copy,readonly) NSString * depthNormalization; 
@property (readonly) int subdivisionSteps; 
+(void)CAMLParserStartElement:(id)arg1 ;
+(void)CAMLParserEndElement:(id)arg1 content:(id)arg2 ;
+(id)meshTransformWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(Object*)CA_copyRenderValue;
-(void)encodeWithCAMLWriter:(id)arg1 ;
-(id)initWithVertexCount:(unsigned long long)arg1 vertices:(const CAMeshVertex*)arg2 faceCount:(unsigned long long)arg3 faces:(const CAMeshFace*)arg4 depthNormalization:(id)arg5 ;
-(id)_initWithMeshTransform:(id)arg1 ;
-(NSString *)depthNormalization;
-(BOOL)_constructWithData:(id)arg1 ;
-(int)subdivisionSteps;
-(id)_subdivideToDepth:(long long)arg1 ;
-(id)CA_interpolateValues:(id)arg1 :(id)arg2 :(id)arg3 interpolator:(const ValueInterpolator*)arg4 ;
-(id)meshTransformForLayer:(id)arg1 ;
-(id)_data;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)CA_distanceToValue:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)CA_interpolateValue:(id)arg1 byFraction:(float)arg2 ;
-(CAMeshVertex)vertexAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)vertexCount;
-(CAMeshFace)faceAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)faceCount;
@end

