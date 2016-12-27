/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@class CAGradientLayer, CAShapeLayer, NSArray, NSString;

@interface TSKGradientShapeLayer : CAShapeLayer {

	CAGradientLayer* _gradient;
	CAShapeLayer* _shapeMask;

}

@property (nonatomic,retain) CAGradientLayer * gradient;              //@synthesize gradient=_gradient - In the implementation block
@property (nonatomic,retain) CAShapeLayer * shapeMask;                //@synthesize shapeMask=_shapeMask - In the implementation block
@property (copy) NSArray * colors; 
@property (copy) NSArray * locations; 
@property (assign) CGPoint startPoint; 
@property (assign) CGPoint endPoint; 
@property (copy) NSString * type; 
-(CAShapeLayer *)shapeMask;
-(void)setShapeMask:(CAShapeLayer *)arg1 ;
-(BOOL)isGradientTree;
-(void)p_flatten;
-(void)p_createGradientTreeIfNeeded;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setLineWidth:(double)arg1 ;
-(void)setMiterLimit:(double)arg1 ;
-(NSArray *)colors;
-(void)setStartPoint:(CGPoint)arg1 ;
-(void)setEndPoint:(CGPoint)arg1 ;
-(CGPoint)startPoint;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setFillRule:(id)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(void)setLineCap:(id)arg1 ;
-(void)setLineJoin:(id)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(void)setGradient:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)gradient;
-(NSArray *)locations;
-(void)setLineDashPhase:(double)arg1 ;
-(CGPoint)endPoint;
-(void)setStrokeStart:(double)arg1 ;
-(void)setStrokeEnd:(double)arg1 ;
@end

