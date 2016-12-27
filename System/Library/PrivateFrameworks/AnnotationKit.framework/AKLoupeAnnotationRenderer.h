/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <AnnotationKit/AKAnnotationRenderer.h>

@interface AKLoupeAnnotationRenderer : AKAnnotationRenderer
+(CGRect)_concreteDrawingBoundsOfAnnotation:(id)arg1 ;
+(CGSize)_concreteDraggingBoundsInsetsForAnnotation:(id)arg1 ;
+(void)_concreteRenderAnnotation:(id)arg1 intoContext:(CGContextRef)arg2 forDisplay:(BOOL)arg3 pageControllerOrNil:(id)arg4 ;
+(BOOL)_concretePointIsOnBorder:(CGPoint)arg1 ofAnnotation:(id)arg2 minimumBorderThickness:(double)arg3 ;
+(BOOL)_concretePointIsOnInside:(CGPoint)arg1 ofAnnotation:(id)arg2 ;
@end

