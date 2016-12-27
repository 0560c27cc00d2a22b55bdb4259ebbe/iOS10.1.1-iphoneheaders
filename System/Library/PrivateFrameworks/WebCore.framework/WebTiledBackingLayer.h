/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebCore/WebCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface WebTiledBackingLayer : CALayer {

	unique_ptr<WebCore::TileController, std::__1::default_delete<WebCore::TileController> >* _tileController;

}
-(void)setAcceleratesDrawing:(BOOL)arg1 ;
-(TileController*)createTileController:(PlatformCALayer*)arg1 ;
-(BOOL)acceleratesDrawing;
-(TiledBacking*)tiledBacking;
-(id)init;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(void)dealloc;
-(void)setBounds:(CGRect)arg1 ;
-(void)invalidate;
-(id)actionForKey:(id)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(BOOL)isOpaque;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
-(void)setNeedsDisplayInRect:(CGRect)arg1 ;
-(id)initWithLayer:(id)arg1 ;
@end

