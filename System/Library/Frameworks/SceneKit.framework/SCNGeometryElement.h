/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface SCNGeometryElement : NSObject <NSSecureCoding> {

	_C3DMeshElement* _meshElement;
	NSData* _elementData;
	long long _primitiveType;
	long long _primitiveCount;
	long long _bytesPerIndex;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) long long primitiveType; 
@property (nonatomic,readonly) long long primitiveCount; 
@property (nonatomic,readonly) long long bytesPerIndex; 
+(BOOL)supportsSecureCoding;
+(id)geometryElementWithMDLSubmesh:(id)arg1 ;
+(id)geometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
+(id)geometryElementWithMeshElementRef:(_C3DMeshElement*)arg1 ;
+(id)_optimizedGeometryElementWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(NSData *)data;
-(long long)primitiveType;
-(long long)bytesPerIndex;
-(long long)primitiveCount;
-(unsigned long long)indexCount;
-(_C3DMeshElement*)meshElement;
-(id)initWithMeshElement:(_C3DMeshElement*)arg1 ;
-(id)initWithData:(id)arg1 primitiveType:(long long)arg2 primitiveCount:(long long)arg3 bytesPerIndex:(long long)arg4 ;
-(void)_optimizeTriangleIndices;
-(double)_computeACMR;
-(id)_renderableElementCopy;
@end

