/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSUBezierPath;

@interface TSWPRenderer : NSObject {

	CGContextRef _context;
	BOOL _flipShadows;
	double _viewScale;
	TSUBezierPath* _interiorClippingPath;

}

@property (assign,nonatomic) BOOL flipShadows;                                  //@synthesize flipShadows=_flipShadows - In the implementation block
@property (assign,nonatomic) double viewScale;                                  //@synthesize viewScale=_viewScale - In the implementation block
@property (nonatomic,retain) TSUBezierPath * interiorClippingPath;              //@synthesize interiorClippingPath=_interiorClippingPath - In the implementation block
+(CTFontRef)invisiblesFont;
-(double)viewScale;
-(void)willRenderFragmentsWithDrawingState:(const TSWPDrawingState*)arg1 ;
-(CGRect)getClipBoundingBox;
-(void)drawAdornmentRects:(const vector<TSWPAdornmentRect, std::__1::allocator<TSWPAdornmentRect> >*)arg1 forColumn:(id)arg2 foreground:(BOOL)arg3 ;
-(void)drawFragment:(const TSWPLineFragment*)arg1 updateRect:(CGRect)arg2 drawingState:(const TSWPDrawingState*)arg3 runState:(SCD_Struct_TS716*)arg4 lineDrawFlags:(unsigned)arg5 ;
-(void)didRenderFragments;
-(BOOL)p_shouldClipFragment:(const TSWPLineFragment*)arg1 drawingState:(const TSWPDrawingState*)arg2 lineDrawFlags:(unsigned)arg3 updateRect:(CGRect)arg4 outClipRect:(CGRect*)arg5 ;
-(void)p_drawAdornmentLineBackgroundRect:(const TSWPAdornmentLine*)arg1 lineDrawFlags:(unsigned)arg2 drawingState:(const TSWPDrawingState*)arg3 bounds:(CGRect)arg4 ;
-(void)p_calculateMarkAdornments:(vector<TSWPAdornmentLine, std::__1::allocator<TSWPAdornmentLine> >*)arg1 drawingState:(const TSWPDrawingState*)arg2 lineFragment:(const TSWPLineFragment*)arg3 ;
-(void)p_drawDictationMarkingsFragment:(const TSWPLineFragment*)arg1 drawingState:(const TSWPDrawingState*)arg2 ;
-(void)p_drawAutocorrectionMarkingsFragment:(const TSWPLineFragment*)arg1 drawingState:(const TSWPDrawingState*)arg2 ;
-(void)p_drawListLabelForFragment:(const TSWPLineFragment*)arg1 drawingState:(const TSWPDrawingState*)arg2 lineDrawFlags:(unsigned)arg3 ;
-(void)p_setCTMAndTextPositionForFragment:(const TSWPLineFragment*)arg1 ;
-(void)p_drawTextInRunsForLine:(CTLineRef)arg1 fragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 tateChuYoko:(BOOL)arg4 baseRange:(NSRange)arg5 isFirstLineRef:(BOOL)arg6 ;
-(void)p_drawAdornmentLine:(const TSWPAdornmentLine*)arg1 drawingState:(const TSWPDrawingState*)arg2 lineFragment:(const TSWPLineFragment*)arg3 lineFragmentStart:(CGPoint)arg4 vertical:(BOOL)arg5 ;
-(void)p_drawAdornments:(const TSWPAdornments*)arg1 lineFragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 ;
-(void)p_drawInvisiblesBreakLine:(const TSWPAdornmentLine*)arg1 lineFragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 ;
-(TSUBezierPath *)interiorClippingPath;
-(void)p_strokeLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 width:(double)arg3 ;
-(void)p_drawWordMarkingsForFragment:(const TSWPLineFragment*)arg1 color:(id)arg2 ranges:(const TSWPRangeVector*)arg3 suppressRange:(NSRange)arg4 drawingState:(const TSWPDrawingState*)arg5 ;
-(void)p_strokeWavyLineFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 width:(double)arg3 ;
-(BOOL)p_canvasSelectionIncludesDrawableOfAttachmentAtCharIndex:(unsigned long long)arg1 state:(const TSWPDrawingState*)arg2 ;
-(void)p_drawAttachmentGlyphAtPosition:(SCD_Struct_TS718)arg1 fragment:(const TSWPLineFragment*)arg2 ;
-(void)p_drawInvisiblesAdornments:(const TSWPAdornments*)arg1 lineFragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 ;
-(void)p_drawHiddenDeletionsAdornments:(const TSWPAdornments*)arg1 lineFragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 ;
-(void)p_drawAttachmentAdornments:(const TSWPAdornments*)arg1 lineFragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 ;
-(void)p_drawAdornmentGlyphs:(const TSWPAdornments*)arg1 lineFragment:(const TSWPLineFragment*)arg2 state:(const TSWPDrawingState*)arg3 ;
-(CGSize)convertSizeToDeviceSpace:(CGSize)arg1 ;
-(BOOL)flipShadows;
-(void)setFlipShadows:(BOOL)arg1 ;
-(void)setInteriorClippingPath:(TSUBezierPath *)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)dealloc;
-(id)initWithContext:(CGContextRef)arg1 ;
@end

