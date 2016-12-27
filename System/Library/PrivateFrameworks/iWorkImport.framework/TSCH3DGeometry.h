/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3Dvec3DataBuffer;

@interface TSCH3DGeometry : NSObject {

	TSCH3Dvec3DataBuffer* mVertexBuffer;
	TSCH3Dvec3DataBuffer* mNormalBuffer;
	int mNumVertices;
	box<glm::detail::tvec3<float> > mGeometryBounds;

}

@property (nonatomic,readonly) box<glm::detail::tvec3<float> > geometryBounds; 
+(id)geometry;
-(unsigned)capOffset;
-(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)vertexArray;
-(void)transformArrays:(const tmat4x4<float>*)arg1 ;
-(unsigned)geometryOffset;
-(int)capCount;
-(id)selectionKnobPositions;
-(id)elementsBoundsPositions;
-(id)vertexBuffer;
-(id)normalBuffer;
-(void)allocateArrays:(int)arg1 ;
-(tvec3<float>*)vertexArrayPointer;
-(tvec3<float>*)normalArrayPointer;
-(box<glm::detail::tvec3<float> >)geometryBounds;
-(vector<glm::detail::tvec3<float>, std::__1::allocator<glm::detail::tvec3<float> > >*)normalArray;
-(id)init;
-(void)dealloc;
-(void)reset;
-(int)geometryCount;
-(int)numVertices;
@end

