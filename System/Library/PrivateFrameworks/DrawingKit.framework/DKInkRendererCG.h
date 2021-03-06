/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/DKInkRenderer.h>

@protocol DKInkRendererDelegate;
@class UIColor, NSMutableArray, NSString;

@interface DKInkRendererCG : UIView <DKInkRenderer> {

	BOOL scaleDrawingToFitCanvas;
	BOOL drawingEnabled;
	UIColor* inkColor;
	id<DKInkRendererDelegate> delegate;
	double drawingScale;
	unsigned long long mode;
	NSMutableArray* _cachedInterpolatedBrushStrokes;
	NSMutableArray* _currentInterpolatedBrushStroke;
	CGRect _invalidRect;

}

@property (assign,nonatomic) CGRect invalidRect;                                               //@synthesize invalidRect=_invalidRect - In the implementation block
@property (nonatomic,retain) NSMutableArray * cachedInterpolatedBrushStrokes;                  //@synthesize cachedInterpolatedBrushStrokes=_cachedInterpolatedBrushStrokes - In the implementation block
@property (nonatomic,retain) NSMutableArray * currentInterpolatedBrushStroke;                  //@synthesize currentInterpolatedBrushStroke=_currentInterpolatedBrushStroke - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIColor * inkColor; 
@property (assign,nonatomic,__weak) id<DKInkRendererDelegate> delegate; 
@property (assign,nonatomic) BOOL scaleDrawingToFitCanvas; 
@property (assign,nonatomic) double drawingScale; 
@property (assign,nonatomic) unsigned long long mode; 
@property (assign,nonatomic) BOOL drawingEnabled; 
@property (nonatomic,readonly) BOOL supportsBleedAnimation; 
@property (nonatomic,readonly) BOOL initialized; 
@property (nonatomic,readonly) unsigned long long maximumPointsForBleedAnimation; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<DKInkRendererDelegate>)arg1 ;
-(void)dealloc;
-(id<DKInkRendererDelegate>)delegate;
-(void)flush;
-(void)display;
-(void)force;
-(id)snapshot;
-(void)_commonInit;
-(BOOL)drawingEnabled;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(void)teardown;
-(void)addPoint:(SCD_Struct_DK0)arg1 ;
-(void)setDrawingEnabled:(BOOL)arg1 ;
-(void)clear;
-(UIColor *)inkColor;
-(void)setInkColor:(UIColor *)arg1 ;
-(void)endStroke;
-(BOOL)initialized;
-(void)beginStroke;
-(void)removeLastStroke;
-(void)resetRendererState;
-(void)completeAnimationsImmediately;
-(BOOL)scaleDrawingToFitCanvas;
-(void)setScaleDrawingToFitCanvas:(BOOL)arg1 ;
-(double)drawingScale;
-(void)setDrawingScale:(double)arg1 ;
-(BOOL)supportsBleedAnimation;
-(unsigned long long)maximumPointsForBleedAnimation;
-(CGRect)invalidRect;
-(void)setInvalidRect:(CGRect)arg1 ;
-(NSMutableArray *)cachedInterpolatedBrushStrokes;
-(void)setCachedInterpolatedBrushStrokes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)currentInterpolatedBrushStroke;
-(void)setCurrentInterpolatedBrushStroke:(NSMutableArray *)arg1 ;
@end

