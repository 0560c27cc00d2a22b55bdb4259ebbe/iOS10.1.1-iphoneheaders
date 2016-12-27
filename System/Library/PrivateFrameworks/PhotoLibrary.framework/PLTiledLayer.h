/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <QuartzCore/CALayer.h>

@protocol MTLDeviceMTLDeviceSPI, MTLCommandQueue, OS_dispatch_queue;
@class NSData, MPSImageConversion, PLCache, NSMutableSet, NSMutableDictionary, NSObject, CALayer;

@interface PLTiledLayer : CALayer {

	NSData* _jpegData;
	jpegDecoder* _decoders;
	int _decoderCount;
	int _tilePixelSize;
	int _maxNumberOfTiles;
	CGSize _fullSize;
	BOOL _hasExtendedColorDisplay;
	BOOL _shouldTile;
	CGColorSpaceRef _colorspace;
	unsigned _decodePixelFormat;
	unsigned _conversionPixelFormat;
	id<MTLDevice><MTLDeviceSPI> _metalDevice;
	id<MTLCommandQueue> _metalCmdQueue;
	MPSImageConversion* _metalConverter;
	vImageConverterRef _vimageConverter;
	int _err;
	PLCache* _tileCache;
	iosPoolOpaqueRef _surfacePool;
	NSMutableSet* _visibleTileIds;
	NSMutableDictionary* _subLayers;
	NSObject*<OS_dispatch_queue> _decodeQueue;
	NSObject*<OS_dispatch_queue> _conversionQueue;
	unsigned _requestId;
	int _zoomLevel;
	CALayer* _placeholderLayer;
	CGImageRef _placeholderImage;
	double _zoomStartScale;
	int _lock;
	CGRect _lastVisibleRect;
	double _lastZoomScale;
	BOOL _showTileBorders;

}

@property (nonatomic,readonly) CGSize jpegImageSize; 
-(void)dealloc;
-(void)removeAllTiles;
-(CGColorSpaceRef)newColorSpaceFromSession:(ajdecRef)arg1 imageInfo:(applejpeg_image_info*)arg2 imageData:(id)arg3 ;
-(void)setupConverterForSourceColorSpace:(CGColorSpaceRef)arg1 destinationColorSpace:(CGColorSpaceRef)arg2 ;
-(double)zoomStartScaleForImage:(CGSize)arg1 placeholderImageSize:(CGSize)arg2 ;
-(void)prepareForDecoding;
-(void)runMetalConversionOnSurface:(IOSurfaceRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)runVImageConversionOnSurface:(IOSurfaceRef)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)updateSubLayers:(id)arg1 ;
-(BOOL)visibleTileRegionHasChanged:(CGRect)arg1 level:(int)arg2 ;
-(void)decodeImageRectangle:(CGRect)arg1 forLevel:(int)arg2 requestId:(unsigned)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(CGSize)jpegImageSize;
-(id)initWithJPEGData:(id)arg1 placeholderImage:(CGImageRef)arg2 screenSize:(CGSize)arg3 ;
-(void)setVisibleRectangle:(CGRect)arg1 zoomScale:(double)arg2 ;
-(void)flushCache;
@end

