/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <libobjc.A.dylib/VKWorldDelegate.h>
#import <libobjc.A.dylib/VKAnimationRunner.h>

@protocol VKImageCanvasDelegate;
@class VKWorld, VKCamera, VKScreenCameraController, VKDispatch, GGLImageCanvas, VKTimer, GEOMapRegion, NSString;

@interface VKImageCanvas : NSObject <VKWorldDelegate, VKAnimationRunner> {

	VKWorld* _world;
	VKCamera* _camera;
	VKScreenCameraController* _cameraController;
	VKDispatch* _dispatch;
	long long _mapType;
	DisplayStyle _mapDisplayStyle;
	GGLImageCanvas* _displayTarget;
	unique_ptr<md::RenderTree, std::__1::default_delete<md::RenderTree> >* _mapScene;
	unique_ptr<md::RenderQueue, std::__1::default_delete<md::RenderQueue> >* _renderQueue;
	unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >* _layoutContext;
	id<VKImageCanvasDelegate> _delegate;
	VKTimer* _layoutTimer;
	BOOL _shouldDrawWhileLoading;
	double _frameTimestamp;
	BOOL _needsLayout;
	unique_ptr<(anonymous namespace)::YFlipPass, std::__1::default_delete<(anonymous namespace)::YFlipPass> >* _yFlipPass;

}

@property (nonatomic,readonly) VKWorld * world;                               //@synthesize world=_world - In the implementation block
@property (nonatomic,readonly) VKCamera * camera;                             //@synthesize camera=_camera - In the implementation block
@property (nonatomic,readonly) VKDispatch * dispatch;                         //@synthesize dispatch=_dispatch - In the implementation block
@property (nonatomic,readonly) GEOMapRegion * mapRegion; 
@property (nonatomic,readonly) double pitch; 
@property (nonatomic,readonly) double yaw; 
@property (assign,nonatomic) id<VKImageCanvasDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long mapType;                               //@synthesize mapType=_mapType - In the implementation block
@property (assign,nonatomic) DisplayStyle mapDisplayStyle;                    //@synthesize mapDisplayStyle=_mapDisplayStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<VKImageCanvasDelegate>)arg1 ;
-(void)dealloc;
-(id<VKImageCanvasDelegate>)delegate;
-(void)setSize:(CGSize)arg1 ;
-(void)animationDidStop:(id)arg1 ;
-(void)update;
-(void)didReceiveMemoryWarning:(BOOL)arg1 ;
-(GEOMapRegion *)mapRegion;
-(long long)mapType;
-(void)setMapType:(long long)arg1 ;
-(double)pitch;
-(void)clearScene;
-(void)cancelTileRequests;
-(VKWorld *)world;
-(void)animationDidResume:(id)arg1 ;
-(void)worldLayoutDidChange:(id)arg1 ;
-(void)worldDisplayDidChange:(id)arg1 ;
-(id)initWithTarget:(id)arg1 device:(Device*)arg2 homeQueue:(id)arg3 ;
-(VKDispatch *)dispatch;
-(void)renderSceneWithRenderer:(Renderer*)arg1 completion:(/*^block*/id)arg2 ;
-(void)loadScene;
-(void)didLayout;
-(void)_spinSceneWillRender:(BOOL)arg1 ;
-(void)_spinScene:(id)arg1 ;
-(double)yaw;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 ;
-(void)runAnimation:(id)arg1 ;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 ;
-(DisplayStyle)mapDisplayStyle;
-(void)setMapDisplayStyle:(DisplayStyle)arg1 ;
-(void)cancelLoad;
-(VKCamera *)camera;
@end

