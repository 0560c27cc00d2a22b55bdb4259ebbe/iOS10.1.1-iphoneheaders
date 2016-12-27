/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Metal/Metal-Structs.h>
#import <Metal/MTLIOAccelResource.h>

@interface MTLIOAccelBuffer : MTLIOAccelResource {

	unsigned long long _length;
	void* _pointer;
	/*^block*/id _deallocator;
	MTLIOAccelBuffer* _masterBuffer;
	short _masterHeapIndex;
	short _masterBufferIndex;
	int _masterBufferOffset;
	IOSurfaceRef _iosurface;

}

@property (readonly) unsigned long long length;              //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) void* contents; 
@property (readonly) IOSurfaceRef iosurface;                 //@synthesize iosurface=_iosurface - In the implementation block
-(CFArrayRef)copyAnnotations;
-(id)initWithDevice:(id)arg1 pointer:(void*)arg2 length:(unsigned long long)arg3 options:(unsigned long long)arg4 sysMemSize:(unsigned)arg5 vidMemSize:(unsigned)arg6 args:(IOAccelNewResourceArgs*)arg7 argsSize:(unsigned)arg8 deallocator:(/*^block*/id)arg9 ;
-(id)initWithHeap:(id)arg1 resource:(id)arg2 offset:(unsigned)arg3 length:(unsigned)arg4 ;
-(id)initWithMasterBuffer:(id)arg1 heapIndex:(short)arg2 bufferIndex:(short)arg3 bufferOffset:(int)arg4 length:(unsigned long long)arg5 args:(IOAccelNewResourceArgs*)arg6 argsSize:(unsigned)arg7 ;
-(id)initWithDevice:(id)arg1 iosurface:(IOSurfaceRef)arg2 args:(IOAccelNewResourceArgs*)arg3 argsSize:(unsigned)arg4 ;
-(void)addDebugMarker:(id)arg1 range:(NSRange)arg2 ;
-(void)removeAllDebugMarkers;
-(void)didModifyRange:(NSRange)arg1 ;
-(id)newLinearTextureWithDescriptor:(id)arg1 offset:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 bytesPerImage:(unsigned long long)arg4 ;
-(IOSurfaceRef)iosurface;
-(void)dealloc;
-(unsigned long long)length;
-(void*)contents;
@end

