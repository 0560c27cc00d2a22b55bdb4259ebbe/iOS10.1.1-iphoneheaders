/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKAnnotationTrackingCameraController.h>

@interface VKGlobeAnnotationTrackingCameraController : VKAnnotationTrackingCameraController {

	GlobeView* _globeView;
	Anchor* _anchor;
	Position3d _currentAnimationStartCoordinate;
	CGSize _currentAnimationPresentationStartCoordinate;
	CGSize _currentAnimationEndCoordinate;

}

@property (assign,nonatomic) GlobeView* globeView;              //@synthesize globeView=_globeView - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setGlobeView:(GlobeView*)arg1 ;
-(void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3 ;
-(void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(GlobeView*)globeView;
-(Matrix<int, 2, 1>)_centerCursor;
@end
