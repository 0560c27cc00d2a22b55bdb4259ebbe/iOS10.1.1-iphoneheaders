/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDContainerLayout.h>
#import <iWorkImport/TSDWrappableParent.h>

@class TSDLayoutGeometry, TSUBezierPath;

@interface TSDGroupLayout : TSDContainerLayout <TSDWrappableParent> {

	TSDLayoutGeometry* mDynamicLayoutGeometry;
	CGRect mBoundsForStandardKnobs;
	TSUBezierPath* mCachedWrapPath;
	TSUBezierPath* mCachedExternalWrapPath;

}
-(void)beginDynamicOperation;
-(void)endDynamicOperation;
-(void)invalidateExteriorWrap;
-(id)layoutGeometryFromInfo;
-(id)computeLayoutGeometry;
-(void)processChangedProperty:(int)arg1 ;
-(CGRect)frameForCulling;
-(id)visibleGeometries;
-(id)i_computeWrapPath;
-(CGRect)boundsForStandardKnobs;
-(id)computeInfoGeometryDuringResize;
-(BOOL)supportsParentRotation;
-(CGRect)alignmentFrame;
-(BOOL)canAspectRatioLockBeChangedByUser;
-(id)i_wrapPath;
-(void)dragBy:(CGPoint)arg1 ;
-(void)setDynamicGeometry:(id)arg1 ;
-(CGRect)rectInRootForCalculatingActivityLineEndpoint;
-(id)additionalDependenciesForChildLayout:(id)arg1 ;
-(BOOL)resizeMayChangeAspectRatio;
-(BOOL)canInspectGeometry;
-(id)reliedOnLayouts;
-(id)i_externalWrapPath;
-(CGRect)rectInRootForPresentingAnnotationPopoverForSelectionPath:(id)arg1 ;
-(BOOL)allowsConnections;
-(BOOL)providesGuidesForChildLayouts;
-(BOOL)supportsRotation;
-(id)layoutsForProvidingGuidesForChildLayouts;
-(BOOL)supportsInspectorPositioning;
-(BOOL)supportsFlipping;
-(void)p_createDynamicCopies;
-(void)p_destroyDynamicCopies;
-(void)p_invalidateParentForWrap;
-(void)p_invalidateDescendentWrapPaths;
-(id)descendentWrappables;
-(id)p_childWrapPathsFrom:(id)arg1 ;
-(void)wrappableChildInvalidated;
-(void)dealloc;
-(void)invalidate;
-(CGSize)minimumSize;
-(void)setGeometry:(id)arg1 ;
-(BOOL)canFlip;
-(BOOL)isDraggable;
-(CGRect)clipRect;
@end

