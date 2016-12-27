/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <libobjc.A.dylib/MKVariableDelayTapRecognizerDelegate.h>
#import <libobjc.A.dylib/_MKUserInteractionGestureRecognizerTouchObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MKMapGestureControllerDelegate;
@class MKBasicMapView, MKVariableDelayTapRecognizer, UITapGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UIPanGestureRecognizer, _UIDynamicValueAnimation, VKCompoundAnimation, _MKUserInteractionGestureRecognizer, UIRotationGestureRecognizer, MKTiltGestureRecognizer, MKTwoFingerPanGestureRecognizer, NSString;

@interface MKMapGestureController : NSObject <MKVariableDelayTapRecognizerDelegate, _MKUserInteractionGestureRecognizerTouchObserver, UIGestureRecognizerDelegate> {

	MKBasicMapView* _mapView;
	id<MKMapGestureControllerDelegate> _delegate;
	MKVariableDelayTapRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _twoFingerTapGestureRecognizer;
	UILongPressGestureRecognizer* _twoFingerLongPressGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPanGestureRecognizer* _verticalPanGestureRecognizer;
	double _lastScale;
	_UIDynamicValueAnimation* _pinchDecelerationAnimation;
	VKCompoundAnimation* _panDecelerationAnimationGroup;
	long long _gestureCount;
	BOOL _panWithMomentum;
	_MKUserInteractionGestureRecognizer* _touchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	_UIDynamicValueAnimation* _rotationDecelerationAnimation;
	MKTiltGestureRecognizer* _tiltGestureRecognizer;
	_UIDynamicValueAnimation* _tiltDecelerationAnimation;
	BOOL _didStartLongPress;
	MKTwoFingerPanGestureRecognizer* _twoFingerPanGestureRecognizer;
	BOOL _isPanning;
	BOOL _isPinching;

}

@property (nonatomic,readonly) MKBasicMapView * mapView;                                                        //@synthesize mapView=_mapView - In the implementation block
@property (assign,nonatomic,__weak) id<MKMapGestureControllerDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isZoomEnabled,nonatomic) BOOL zoomEnabled; 
@property (assign,getter=isScrollEnabled,nonatomic) BOOL scrollEnabled; 
@property (assign,getter=isRotationEnabled,nonatomic) BOOL rotationEnabled; 
@property (assign,getter=isTiltEnabled,nonatomic) BOOL tiltEnabled; 
@property (assign,nonatomic) BOOL panWithMomentum;                                                              //@synthesize panWithMomentum=_panWithMomentum - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * doubleTapGestureRecognizer;                             //@synthesize doubleTapGestureRecognizer=_doubleTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * twoFingerTapGestureRecognizer;                          //@synthesize twoFingerTapGestureRecognizer=_twoFingerTapGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * twoFingerLongPressGestureRecognizer;              //@synthesize twoFingerLongPressGestureRecognizer=_twoFingerLongPressGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                               //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                   //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;                         //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * verticalPanGestureRecognizer;                           //@synthesize verticalPanGestureRecognizer=_verticalPanGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * twoFingerPanGestureRecognizer;                          //@synthesize twoFingerPanGestureRecognizer=_twoFingerPanGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<MKMapGestureControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<MKMapGestureControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(BOOL)isScrollEnabled;
-(void)handlePan:(id)arg1 ;
-(void)handlePinch:(id)arg1 ;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(BOOL)isZoomEnabled;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(double)variableDelayTapRecognizer:(id)arg1 shouldWaitForNextTapForDuration:(double)arg2 afterTouch:(id)arg3 ;
-(void)gestureRecognizerTouchesBegan:(id)arg1 ;
-(void)gestureRecognizerTouchesEnded:(id)arg1 ;
-(void)gestureRecognizerTouchesCanceled:(id)arg1 ;
-(id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 doubleTapTargetView:(id)arg3 ;
-(id)initWithMapView:(id)arg1 gestureTargetView:(id)arg2 ;
-(BOOL)isRotationEnabled;
-(BOOL)isTiltEnabled;
-(void)setTiltEnabled:(BOOL)arg1 ;
-(void)stopDynamicAnimations;
-(void)beginGesturing;
-(void)endGesturing;
-(void)startUserInteractionFromExternalGesture;
-(void)stopUserInteractionFromExternalGesture;
-(void)_clearGesture:(id)arg1 ;
-(void)clearGestureRecognizersInFlight;
-(void)_handleStandardTilt:(id)arg1 ;
-(void)handleTilt:(id)arg1 ;
-(void)handleTwoFingerPan:(id)arg1 ;
-(void)handleRotation:(id)arg1 ;
-(void)handleDoubleTap:(id)arg1 ;
-(void)handleTwoFingerTap:(id)arg1 ;
-(void)handleTwoFingerLongPress:(id)arg1 ;
-(CGPoint)_snapPointToDevicePixels:(CGPoint)arg1 ;
-(void)_handleStandardPan:(id)arg1 ;
-(UITapGestureRecognizer *)twoFingerTapGestureRecognizer;
-(UILongPressGestureRecognizer *)twoFingerLongPressGestureRecognizer;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(BOOL)panWithMomentum;
-(void)setPanWithMomentum:(BOOL)arg1 ;
-(UIPanGestureRecognizer *)verticalPanGestureRecognizer;
-(UIPanGestureRecognizer *)twoFingerPanGestureRecognizer;
-(UITapGestureRecognizer *)doubleTapGestureRecognizer;
-(MKBasicMapView *)mapView;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(void)handleTouch:(id)arg1 ;
@end

