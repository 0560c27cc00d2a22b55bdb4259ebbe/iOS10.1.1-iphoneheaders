/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PDFKit.framework/PDFKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PDFKit/PDFKit-Structs.h>
#import <QuartzCore/CALayer.h>

@class PerformanceGraphWidgetPrivate;

@interface PerformanceGraphWidget : CALayer {

	PerformanceGraphWidgetPrivate* _private;

}
+(id)sharedWidget;
-(id)init;
-(void)dealloc;
-(id)actionForKey:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)heartbeat;
-(void)renderedTile:(int)arg1 withTickTime:(unsigned long long)arg2 forBytes:(int)arg3 ;
-(void)removedTile:(int)arg1 forBytes:(int)arg2 ;
-(void)setPageVisible:(int)arg1 isVisible:(BOOL)arg2 ;
-(void)setMaxPageCount:(int)arg1 ;
-(void)showWidget:(BOOL)arg1 ;
-(void)addRenderDataPoint:(int)arg1 withTickTime:(unsigned long long)arg2 andIsTile:(BOOL)arg3 ;
-(void)addDataPoint;
-(void)drawString:(id)arg1 atPosition:(CGPoint)arg2 inBounds:(CGRect)arg3 toContext:(CGContextRef)arg4 ;
@end

