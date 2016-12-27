/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDMediaLayout.h>

@class TSDLayoutGeometry, TSDMaskLayout, TSUBezierPath, TSDInfoGeometry, TSDImageAdjustments;

@interface TSDImageLayout : TSDMediaLayout {

	TSDLayoutGeometry* mImageGeometry;
	TSDMaskLayout* mMaskLayout;
	CGPathRef mPathToStroke;
	CGAffineTransform mLayoutToImageTransform;
	CGAffineTransform mLayoutToMaskTransform;
	BOOL mMaskIntersectsImage;
	TSUBezierPath* mTracedPath;
	int mHasAlpha;
	TSDLayoutGeometry* mBaseImageLayoutGeometry;
	TSDInfoGeometry* mDynamicInfoGeometry;
	TSDInfoGeometry* mBaseInfoGeometry;
	int mMaskEditMode;
	BOOL mScalingInMaskMode;
	BOOL mInInstantAlphaMode;
	BOOL mIsUpdatingImageAdjustments;
	TSDImageAdjustments* mDynamicImageAdjustments;

}
-(id)layoutGeometryFromInfo;
-(void)offsetGeometryBy:(CGPoint)arg1 ;
-(id)computeLayoutGeometry;
-(CGRect)boundsInfluencingExteriorWrap;
-(id)i_computeWrapPath;
-(void)updateChildrenFromInfo;
-(BOOL)supportsRotation;
-(CGRect)pathBoundsWithoutStroke;
-(id)smartPathSource;
-(id)maskLayout;
-(CGPathRef)pathToStroke;
-(id)imageGeometry;
-(id)imageGeometryInRoot;
-(BOOL)hasMaskingPath;
-(CGAffineTransform)layoutToMaskTransform;
-(CGAffineTransform)layoutToImageTransform;
-(CGAffineTransform)imageDataToVisualSizeTransform;
-(id)imageAdjustments;
-(id)currentInfoGeometry;
-(CGRect)computeAlignmentFrameInRoot:(BOOL)arg1 ;
-(id)originalImageGeometry;
-(CGSize)sizeOfFrameRectIncludingCoverage;
-(BOOL)isDynamicallyChangingImageAdjustments;
-(void)dynamicImageAdjustmentsChangeDidBegin;
-(void)dynamicImageAdjustmentsUpdateToValue:(id)arg1 ;
-(void)dynamicImageAdjustmentsChangeDidEnd;
-(void)p_createDynamicCopies;
-(void)p_setDynamicInfoGeometry:(id)arg1 ;
-(void)p_destroyDynamicCopies;
-(id)initWithInfo:(id)arg1 ;
-(void)dealloc;
-(BOOL)isInvisible;
-(BOOL)hasAlpha;
-(id)imageInfo;
@end

