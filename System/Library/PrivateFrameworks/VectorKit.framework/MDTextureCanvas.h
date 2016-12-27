/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/MDRenderTarget.h>

@class NSString;

@interface MDTextureCanvas : NSObject <MDRenderTarget> {

	CGSize _size;
	CGSize _sizeInPixels;
	double _contentScale;
	DeviceRef _device;
	RenderTargetFormat _format;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) DeviceRef device;                              //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) BOOL multiSample; 
@property (nonatomic,readonly) const RenderTargetFormat* format; 
@property (nonatomic,readonly) CGSize size;                                   //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) double contentScale;                           //@synthesize contentScale=_contentScale - In the implementation block
@property (nonatomic,readonly) BOOL shouldRasterize; 
@property (nonatomic,readonly) CGSize sizeInPixels;                           //@synthesize sizeInPixels=_sizeInPixels - In the implementation block
@property (nonatomic,readonly) float averageFPS; 
-(CGSize)size;
-(void)dealloc;
-(NSString *)description;
-(const RenderTargetFormat*)format;
-(BOOL)shouldRasterize;
-(double)contentScale;
-(CGSize)sizeInPixels;
-(void)willDrawView;
-(void)didDrawView;
-(BOOL)multiSample;
-(id)initWithDevice:(DeviceRef)arg1 size:(CGSize)arg2 scale:(double)arg3 ;
-(DeviceRef)device;
@end

