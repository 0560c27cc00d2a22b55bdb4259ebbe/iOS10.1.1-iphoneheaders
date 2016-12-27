/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationMarker.h>

@class VKTimedAnimation;

@interface VKNavUserLocationAnnotationMarker : VKAnnotationMarker {

	float _scale;
	BOOL _shouldShowCourse;
	BOOL _puckFlipped;
	double _presentationCourse;
	double _sizePoints;
	double _puckOffset;
	BOOL _stale;
	VKTimedAnimation* _puckStyleAnimation;
	int _puckStyle;
	float _greyPuckAlphaScale;
	int _style;
	Matrix<float, 4, 1> _arrowColor;
	Matrix<float, 4, 1> _arrowColorStale;
	float _circleBrightness;
	float _arrowBrightness;
	shared_ptr<ggl::Texture2D>* _textureArrow;
	shared_ptr<ggl::Texture2D>* _textureCircle;
	shared_ptr<ggl::RenderState>* _gglPuckRenderState;
	shared_ptr<ggl::TextureWithBrightness::MeshPipelineSetup>* _circlePipelineSetup;
	shared_ptr<ggl::TextureAlphaMask::MeshPipelineSetup>* _arrowPipelineSetup;
	shared_ptr<ggl::RenderItem>* _arrowRenderItem;
	shared_ptr<ggl::RenderItem>* _circleRenderItem;
	BOOL _needsTextureUpdate;

}

@property (assign,nonatomic) BOOL shouldShowCourse;                    //@synthesize shouldShowCourse=_shouldShowCourse - In the implementation block
@property (assign,nonatomic) float scale;                              //@synthesize scale=_scale - In the implementation block
@property (assign,getter=isStale,nonatomic) BOOL stale;                //@synthesize stale=_stale - In the implementation block
@property (assign,nonatomic) int style;                                //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) double presentationCourse; 
@property (assign,nonatomic) SCD_Struct_VK308 innerColor; 
-(void)dealloc;
-(void)setScale:(float)arg1 ;
-(int)style;
-(float)scale;
-(void)setStyle:(int)arg1 ;
-(void)appendCommandsToBuffer:(CommandBuffer*)arg1 inContext:(LayoutContext*)arg2 ;
-(void)willLayoutWithContext:(LayoutContext*)arg1 ;
-(SCD_Struct_VK308)innerColor;
-(void)setInnerColor:(SCD_Struct_VK308)arg1 ;
-(void)setShouldShowCourse:(BOOL)arg1 ;
-(void)_updateTexturesIfNeeded;
-(id)initWithAnnotation:(id)arg1 style:(int)arg2 ;
-(void)_updatePuckStyle;
-(void)updateWithStyleQuery:(const shared_ptr<gss::StylesheetQuery<gss::PropertyID> >*)arg1 AtZ:(double)arg2 ;
-(BOOL)shouldShowCourse;
-(double)presentationCourse;
-(void)setPresentationCourse:(double)arg1 ;
-(BOOL)isStale;
-(void)setStale:(BOOL)arg1 ;
-(void)setModel:(id)arg1 ;
@end

