/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:19 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDCanvasDelegate.h>

@class NSArray, TSKDocumentRoot, TSDCanvas, NSSet, NSString;

@interface TSDImager : NSObject <TSDCanvasDelegate> {

	NSArray* mInfos;
	CGColorRef mBackgroundColor;
	CGRect mUnscaledClipRect;
	double mViewScale;
	CGSize mScaledImageSize;
	CGSize mMaximumScaledImageSize;
	BOOL mUseScaledImageSize;
	BOOL mDistortedToMatch;
	BOOL mImageMustHaveEvenDimensions;
	BOOL mShouldReuseBitmapContext;
	UIEdgeInsets mContentInset;
	TSKDocumentRoot* mDocumentRoot;
	TSDCanvas* mCanvas;
	CGRect mActualScaledClipRect;
	BOOL mDrawingIntoPDF;
	BOOL mIsPrinting;
	BOOL mImageIsRenderingForMovie;
	CGContextRef mReusableBitmapContext;
	CGRect mReusableBounds;
	CGRect mReusableIntegralBounds;
	CGRect mReusableActualScaledClipRect;
	CGSize mReusableScaledImageSize;
	NSSet* mPreviousRenderDatasNeedingDownload;
	/*^block*/id mPostRenderAction;

}

@property (nonatomic,copy) NSSet * previousRenderDatasNeedingDownload; 
@property (nonatomic,retain,readonly) TSDCanvas * canvas; 
@property (nonatomic,retain) NSArray * infos; 
@property (assign,nonatomic) CGColorRef backgroundColor; 
@property (assign,nonatomic) CGRect unscaledClipRect; 
@property (assign,nonatomic) double viewScale; 
@property (assign,nonatomic) CGSize scaledImageSize; 
@property (assign,nonatomic) CGSize maximumScaledImageSize; 
@property (assign,nonatomic) BOOL distortedToMatch; 
@property (assign,nonatomic) BOOL imageMustHaveEvenDimensions; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@property (nonatomic,readonly) CGRect actualScaledClipRect; 
@property (assign,nonatomic) BOOL shouldReuseBitmapContext; 
@property (assign,nonatomic) BOOL isPrinting; 
@property (assign,nonatomic) BOOL imageIsRenderingForMovie; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDocumentRoot:(id)arg1 ;
-(CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1 ;
-(BOOL)isPrintingCanvas;
-(BOOL)isCanvasDrawingIntoPDF:(id)arg1 ;
-(BOOL)imageIsRenderingForMovie;
-(double)viewScale;
-(CGRect)unscaledClipRect;
-(void)setPostRenderAction:(/*^block*/id)arg1 ;
-(void)setUnscaledClipRect:(CGRect)arg1 ;
-(BOOL)drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(BOOL)isPrinting;
-(void)setScaledImageSize:(CGSize)arg1 ;
-(BOOL)p_configureCanvas;
-(BOOL)shouldReuseBitmapContext;
-(CGImageRef)p_newImageInReusableContext;
-(void)p_drawPageInContext:(CGContextRef)arg1 createPage:(BOOL)arg2 ;
-(void)setPreviousRenderDatasNeedingDownload:(NSSet *)arg1 ;
-(CGSize)scaledImageSize;
-(CGSize)maximumScaledImageSize;
-(void)setMaximumScaledImageSize:(CGSize)arg1 ;
-(CGRect)actualScaledClipRect;
-(BOOL)distortedToMatch;
-(void)setDistortedToMatch:(BOOL)arg1 ;
-(BOOL)imageMustHaveEvenDimensions;
-(void)setImageMustHaveEvenDimensions:(BOOL)arg1 ;
-(void)setShouldReuseBitmapContext:(BOOL)arg1 ;
-(void)setIsPrinting:(BOOL)arg1 ;
-(NSSet *)previousRenderDatasNeedingDownload;
-(void)setImageIsRenderingForMovie:(BOOL)arg1 ;
-(void)setViewScale:(double)arg1 ;
-(void)setBackgroundColor:(CGColorRef)arg1 ;
-(CGColorRef)backgroundColor;
-(void)dealloc;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(TSDCanvas *)canvas;
-(id)pdfData;
-(NSArray *)infos;
-(void)setInfos:(NSArray *)arg1 ;
-(CGImageRef)newImage;
-(id)documentRoot;
@end

