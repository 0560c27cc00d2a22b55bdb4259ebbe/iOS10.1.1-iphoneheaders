/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MDRenderTarget <NSObject>
@property (nonatomic,readonly) Device* device; 
@property (nonatomic,readonly) BOOL multiSample; 
@property (nonatomic,readonly) const RenderTargetFormat* format; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) double contentScale; 
@property (nonatomic,readonly) BOOL shouldRasterize; 
@property (nonatomic,readonly) CGSize sizeInPixels; 
@property (nonatomic,readonly) float averageFPS; 
@optional
-(float)averageFPS;
-(void)willDrawView;
-(void)didDrawView;

@required
-(CGSize)size;
-(const RenderTargetFormat*)format;
-(BOOL)shouldRasterize;
-(double)contentScale;
-(CGSize)sizeInPixels;
-(BOOL)multiSample;
-(Device*)device;

@end

