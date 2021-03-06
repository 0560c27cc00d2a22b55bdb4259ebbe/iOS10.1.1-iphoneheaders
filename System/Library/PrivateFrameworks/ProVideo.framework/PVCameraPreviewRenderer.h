/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProVideo/ProVideo-Structs.h>
@class PVVideoCompositingContext, EAGLSharegroup;

@interface PVCameraPreviewRenderer : NSObject {

	HGRef<PVRenderManager>* _renderManager;
	HGRef<HGRenderJob>* _currentRenderJob;
	PVVideoCompositingContext* _compositingContext;

}

@property (nonatomic,readonly) EAGLSharegroup * shareGroup; 
-(id)init;
-(void)dealloc;
-(HGRef<PVRenderManager>*)renderManager;
-(EAGLSharegroup *)shareGroup;
-(void)enqueueRenderRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

