/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <CoreImage/CoreImage-Structs.h>
@interface CIImageProcessorInOut : NSObject {

	CGRect _region;
	IOSurfaceRef _surface;
	Context* _context;
	id<MTLTexture> _mtlTexture;

}

@property (nonatomic,readonly) CGRect region;                               //@synthesize region=_region - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef surface; 
@property (nonatomic,readonly) CVBufferRef pixelBuffer; 
@property (nonatomic,readonly) unsigned long long bytesPerRow; 
@property (nonatomic,readonly) int format; 
-(id)initWithSurface:(IOSurfaceRef)arg1 texture:(Texture*)arg2 bounds:(CGRect)arg3 context:(Context*)arg4 ;
-(void)dealloc;
-(id)description;
-(int)format;
-(CGRect)region;
-(CVBufferRef)pixelBuffer;
-(unsigned long long)bytesPerRow;
-(IOSurfaceRef)surface;
@end

