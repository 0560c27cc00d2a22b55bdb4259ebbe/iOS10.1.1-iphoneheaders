/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:29 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextWrap.h>

@class TPDocumentRoot, NSTimer;

@interface TPTextWrapController : NSObject <TSWPTextWrap> {

	TPDocumentRoot* _documentRoot;
	CGAffineTransform _canvasSpaceToWrapSpace;
	CGAffineTransform _wrapSpaceToCanvasSpace;
	BOOL _wrapAnimationEnabled;
	NSTimer* _wrapAnimationTimer;

}
+(CGPoint)p_baseWrappablePoint;
-(id)initWithDocumentRoot:(id)arg1 ;
-(BOOL)checkForUnobstructedSpan:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
-(id)beginWrappingToColumn:(id)arg1 target:(id)arg2 hasWrapables:(BOOL*)arg3 ;
-(double)nextUnobstructedSpanStartingAt:(CGRect)arg1 wrappableAttachments:(id)arg2 userInfo:(id)arg3 ;
-(unsigned)splitLine:(CGRect)arg1 lineSegmentRects:(out CGRect)arg2 wrappableAttachments:(id)arg3 ignoreFloatingGraphics:(BOOL)arg4 canvasCausedWrap:(out BOOL*)arg5 skipHint:(out double*)arg6 userInfo:(id)arg7 ;
-(void)toggleWrapAnimation;
-(id)p_groupInfoContainingWrappable:(id)arg1 ;
-(BOOL)p_shouldTextFlowAroundWrappable:(id)arg1 inTarget:(id)arg2 inColumn:(id)arg3 ;
-(unsigned)p_splitLine:(CGRect)arg1 lineSegmentRects:(CGRect)arg2 wrappable:(id)arg3 cookie:(id)arg4 skipHint:(double*)arg5 ;
-(id)p_wrapDrawables:(id)arg1 userInfo:(id)arg2 ;
-(void)p_setWrapAnimationPhase:(double)arg1 ;
-(void)p_animateWrap;
-(void)dealloc;
-(void)stopAnimation;
@end

