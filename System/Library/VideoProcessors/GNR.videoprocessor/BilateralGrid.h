/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MTLTexture;
#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface BilateralGrid : NSObject {

	int _space_sigma;
	float _range_sigma;
	unsigned long long _input_width;
	unsigned long long _input_height;
	unsigned long long _ugrid_width;
	unsigned long long _ugrid_height;
	unsigned long long _ugrid_depth;
	unsigned long long _grid_width;
	unsigned long long _grid_height;
	unsigned long long _grid_depth;
	unsigned long long _grid_size;
	unsigned long long _apron_xy;
	unsigned long long _apron_z;
	float* _grid;
	float* _grid_w;
	float* _tmp_grid;
	float* _tmp_grid_w;
	id<MTLTexture> _grid_tex;
	BilateralGridUniforms _uniforms;

}
-(void)dealloc;
-(void)blur;
-(void)fillTexture;
-(int)run:(CVBufferRef)arg1 ;
-(void)normalize;
-(int)config:(unsigned long long)arg1 height:(unsigned long long)arg2 space_sigma:(int)arg3 range_sigma:(float)arg4 ;
-(int)build:(CVBufferRef)arg1 ;
-(id)initWithConfiguration:(BilateralGridConfiguration*)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 metal:(id)arg4 ;
-(void)releaseBuffers;
@end

