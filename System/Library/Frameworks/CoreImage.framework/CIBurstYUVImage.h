/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CIBurstYUVImage : NSObject {

	char* Ybuffer;
	char* Cbuffer;
	int width;
	int height;
	int bytesPerRow;
	CFDataRef dataPtr;
	CVBufferRef pixelBuffer;
	IOSurfaceRef ioSurf;

}

@property (assign) int width; 
@property (assign) int height; 
@property (assign) int bytesPerRow; 
@property (assign) char* Ybuffer; 
@property (assign) char* Cbuffer; 
-(id)initWithCGImage:(CGImageRef)arg1 maxDimension:(int)arg2 ;
-(char*)Ybuffer;
-(char*)Cbuffer;
-(id)initWithIOSurface:(IOSurfaceRef)arg1 maxDimension:(int)arg2 ;
-(void)convertRGBAToYUV420:(char*)arg1 rgbaBytesPerRow:(int)arg2 ;
-(id)initWithCIImage:(id)arg1 ctx:(id)arg2 maxDimension:(int)arg3 ;
-(void)setYbuffer:(char*)arg1 ;
-(void)setCbuffer:(char*)arg1 ;
-(void)dealloc;
-(int)width;
-(int)height;
-(void)setWidth:(int)arg1 ;
-(void)setHeight:(int)arg1 ;
-(CVBufferRef)pixelBuffer;
-(void)setBytesPerRow:(int)arg1 ;
-(int)bytesPerRow;
@end

