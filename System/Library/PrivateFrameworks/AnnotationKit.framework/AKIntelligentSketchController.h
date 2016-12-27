/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <libobjc.A.dylib/AKSmoothPathViewDelegate.h>

@class AKPageModelController, AKController, AKSmoothPathView, CHDrawing, CHRecognizer, AKAnnotation, NSMutableArray, NSMutableDictionary, AKCandidatePickerView_iOS, NSString;

@interface AKIntelligentSketchController : NSObject <AKSmoothPathViewDelegate> {

	BOOL _preferDoodle;
	BOOL _coalescesDoodles;
	BOOL _shapeDetectionEnabled;
	BOOL _selectNewlyCreatedAnnotations;
	BOOL _pressureSensitiveDoodleMode;
	BOOL _ignoreAnnotationAndSelectionKVO;
	BOOL _isShowingOverlay;
	AKPageModelController* _modelControllerToObserveForAnnotationsAndSelections;
	double _veryHighConfidenceLevel;
	AKController* _controller;
	AKSmoothPathView* _intelligentSketchOverlayView;
	CHDrawing* _lastDrawing;
	CHRecognizer* _shapeRecognizer;
	/*^block*/id _performRecognitionBlock;
	AKAnnotation* _candidateAnnotation;
	CHDrawing* _candidateDrawing;
	NSMutableArray* _candidateAKTags;
	NSMutableDictionary* _candidateAKTagsToAnnotationInfoMap;
	AKAnnotation* _coalescedAnnotation;
	NSMutableArray* _recentDoodlesAnnotations;
	NSMutableArray* _recentDoodlePaths;
	AKCandidatePickerView_iOS* _candidatePickerView;
	CGRect _recentDrawingBoundsInInputView;

}

@property (__weak) AKController * controller;                                                                          //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) AKSmoothPathView * intelligentSketchOverlayView;                                          //@synthesize intelligentSketchOverlayView=_intelligentSketchOverlayView - In the implementation block
@property (retain) CHDrawing * lastDrawing;                                                                            //@synthesize lastDrawing=_lastDrawing - In the implementation block
@property (nonatomic,retain) CHRecognizer * shapeRecognizer;                                                           //@synthesize shapeRecognizer=_shapeRecognizer - In the implementation block
@property (nonatomic,copy) id performRecognitionBlock;                                                                 //@synthesize performRecognitionBlock=_performRecognitionBlock - In the implementation block
@property (__weak) AKAnnotation * candidateAnnotation;                                                                 //@synthesize candidateAnnotation=_candidateAnnotation - In the implementation block
@property (retain) CHDrawing * candidateDrawing;                                                                       //@synthesize candidateDrawing=_candidateDrawing - In the implementation block
@property (retain) NSMutableArray * candidateAKTags;                                                                   //@synthesize candidateAKTags=_candidateAKTags - In the implementation block
@property (retain) NSMutableDictionary * candidateAKTagsToAnnotationInfoMap;                                           //@synthesize candidateAKTagsToAnnotationInfoMap=_candidateAKTagsToAnnotationInfoMap - In the implementation block
@property (retain) AKAnnotation * coalescedAnnotation;                                                                 //@synthesize coalescedAnnotation=_coalescedAnnotation - In the implementation block
@property (retain) NSMutableArray * recentDoodlesAnnotations;                                                          //@synthesize recentDoodlesAnnotations=_recentDoodlesAnnotations - In the implementation block
@property (retain) NSMutableArray * recentDoodlePaths;                                                                 //@synthesize recentDoodlePaths=_recentDoodlePaths - In the implementation block
@property (assign) CGRect recentDrawingBoundsInInputView;                                                              //@synthesize recentDrawingBoundsInInputView=_recentDrawingBoundsInInputView - In the implementation block
@property (assign) BOOL ignoreAnnotationAndSelectionKVO;                                                               //@synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO - In the implementation block
@property (assign) BOOL isShowingOverlay;                                                                              //@synthesize isShowingOverlay=_isShowingOverlay - In the implementation block
@property (nonatomic,retain) AKCandidatePickerView_iOS * candidatePickerView;                                          //@synthesize candidatePickerView=_candidatePickerView - In the implementation block
@property (assign,nonatomic) BOOL preferDoodle;                                                                        //@synthesize preferDoodle=_preferDoodle - In the implementation block
@property (assign,nonatomic) BOOL coalescesDoodles;                                                                    //@synthesize coalescesDoodles=_coalescesDoodles - In the implementation block
@property (assign,getter=shapeDetectionEnabled,nonatomic) BOOL shapeDetectionEnabled;                                  //@synthesize shapeDetectionEnabled=_shapeDetectionEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectNewlyCreatedAnnotations;                                                       //@synthesize selectNewlyCreatedAnnotations=_selectNewlyCreatedAnnotations - In the implementation block
@property (nonatomic,retain) AKPageModelController * modelControllerToObserveForAnnotationsAndSelections;              //@synthesize modelControllerToObserveForAnnotationsAndSelections=_modelControllerToObserveForAnnotationsAndSelections - In the implementation block
@property (assign) BOOL pressureSensitiveDoodleMode;                                                                   //@synthesize pressureSensitiveDoodleMode=_pressureSensitiveDoodleMode - In the implementation block
@property (assign) double veryHighConfidenceLevel;                                                                     //@synthesize veryHighConfidenceLevel=_veryHighConfidenceLevel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(AKController *)controller;
-(void)setController:(AKController *)arg1 ;
-(id)initWithController:(id)arg1 ;
-(void)updateStrokeAttributes;
-(void)setModelControllerToObserveForAnnotationsAndSelections:(AKPageModelController *)arg1 ;
-(AKPageModelController *)modelControllerToObserveForAnnotationsAndSelections;
-(void)dismissCandidatePicker;
-(void)setVeryHighConfidenceLevel:(double)arg1 ;
-(void)setSelectNewlyCreatedAnnotations:(BOOL)arg1 ;
-(void)setShapeDetectionEnabled:(BOOL)arg1 ;
-(void)setRecentDoodlesAnnotations:(NSMutableArray *)arg1 ;
-(void)setRecentDoodlePaths:(NSMutableArray *)arg1 ;
-(void)setRecentDrawingBoundsInInputView:(CGRect)arg1 ;
-(void)updateOverlayBoundsAndBackingScale:(id)arg1 ;
-(void)_coalesceRecentDrawings;
-(BOOL)isShowingOverlay;
-(void)setIsShowingOverlay:(BOOL)arg1 ;
-(AKSmoothPathView *)intelligentSketchOverlayView;
-(CGRect)_frameForOurOverlayInHostingView:(id)arg1 ;
-(void)enclosingScrollViewNotification:(id)arg1 ;
-(void)_teardownCandidatePicker;
-(void)setIntelligentSketchOverlayView:(AKSmoothPathView *)arg1 ;
-(void)handleForwardedEvent:(id)arg1 ;
-(void)handleTapAction:(id)arg1 ;
-(void)handleDragAction:(id)arg1 ;
-(BOOL)pressureSensitiveDoodleMode;
-(AKCandidatePickerView_iOS *)candidatePickerView;
-(AKAnnotation *)candidateAnnotation;
-(void)setIgnoreAnnotationAndSelectionKVO:(BOOL)arg1 ;
-(CHDrawing *)lastDrawing;
-(void)_executeRecognition;
-(id)performRecognitionBlock;
-(void)setPerformRecognitionBlock:(id)arg1 ;
-(BOOL)coalescesDoodles;
-(void)_inputView:(id)arg1 didCollectPath:(CGPathRef)arg2 isPrestroked:(BOOL)arg3 ;
-(void)_beginOrExtendCoalescingTimer;
-(void)_addAnnotationImmediatelyFor:(CGPathRef)arg1 withDrawingCenter:(CGPoint)arg2 drawingBoundsInView:(CGRect)arg3 pathIsPrestroked:(BOOL)arg4 isSingelDot:(BOOL)arg5 fromInputView:(id)arg6 ;
-(BOOL)shapeDetectionEnabled;
-(void)setLastDrawing:(CHDrawing *)arg1 ;
-(BOOL)_drawingIsValidForRecognition:(id)arg1 withPath:(CGPathRef)arg2 ;
-(void)_scheduleDelayedRecognitionForDrawing:(id)arg1 withPath:(CGPathRef)arg2 boundsInView:(CGRect)arg3 center:(CGPoint)arg4 isPrestroked:(BOOL)arg5 ;
-(void)_performRecognitionForDrawing:(id)arg1 withPath:(CGPathRef)arg2 boundsInInputView:(CGRect)arg3 center:(CGPoint)arg4 isPrestroked:(BOOL)arg5 ;
-(id)_convertDrawingBoundsInInputView:(CGRect)arg1 outBoundsInPageModel:(CGRect*)arg2 ;
-(id)_createFlippedCHDrawingFromCHDrawing:(id)arg1 withDrawingCenter:(CGPoint)arg2 ;
-(CHRecognizer *)shapeRecognizer;
-(id)_createDoodleShapeResultFromCGPath:(CGPathRef)arg1 withDrawingCenter:(CGPoint)arg2 pathIsPrestroked:(BOOL)arg3 ;
-(BOOL)_isResultVeryHighConfidence:(id)arg1 ;
-(long long)_toolTagForCHRecognitionResult:(id)arg1 ;
-(void)_showCandidatePickerWithTypes:(id)arg1 forDrawingInInputView:(id)arg2 shouldSurfaceDoodle:(BOOL)arg3 ;
-(id)_createAnnotationWithRecognizerResult:(id)arg1 forDrawingBoundsInInputView:(CGRect)arg2 shouldGoToPageController:(id*)arg3 ;
-(BOOL)_shouldSelectCandidate:(id)arg1 ;
-(NSMutableArray *)recentDoodlePaths;
-(NSMutableArray *)recentDoodlesAnnotations;
-(CGRect)recentDrawingBoundsInInputView;
-(void)setCandidateAnnotation:(AKAnnotation *)arg1 ;
-(void)setCandidateAKTags:(NSMutableArray *)arg1 ;
-(void)setCandidateAKTagsToAnnotationInfoMap:(NSMutableDictionary *)arg1 ;
-(void)setCandidateDrawing:(CHDrawing *)arg1 ;
-(NSMutableArray *)candidateAKTags;
-(NSMutableDictionary *)candidateAKTagsToAnnotationInfoMap;
-(void)_presentCandidatePickerBarWithCandidates:(id)arg1 ofDrawing:(id)arg2 ;
-(void)_teardownCandidatePickerBar;
-(BOOL)selectNewlyCreatedAnnotations;
-(double)veryHighConfidenceLevel;
-(void)setCoalescedAnnotation:(AKAnnotation *)arg1 ;
-(void)_removeAnnotations:(id)arg1 mostLikelyFromPageController:(id)arg2 ;
-(void)_clearCoalescingState;
-(void)_pickCandidateResult:(id)arg1 ;
-(void)setCandidatePickerView:(AKCandidatePickerView_iOS *)arg1 ;
-(AKAnnotation *)coalescedAnnotation;
-(void)_coalesceDrawingsCancelled;
-(void)_clearPreviousCandidateAnnotation;
-(BOOL)ignoreAnnotationAndSelectionKVO;
-(void)inputViewWillStartDrawing:(id)arg1 ;
-(void)inputView:(id)arg1 didCollectPath:(CGPathRef)arg2 ;
-(void)inputView:(id)arg1 didCollectPrestrokedPath:(CGPathRef)arg2 ;
-(void)showOverlay;
-(void)removeOverlay;
-(BOOL)isShowingCandidatePicker;
-(void)logLastDrawingToDisk;
-(void)_logAllResults:(id)arg1 ;
-(BOOL)preferDoodle;
-(void)setPreferDoodle:(BOOL)arg1 ;
-(void)setCoalescesDoodles:(BOOL)arg1 ;
-(void)setPressureSensitiveDoodleMode:(BOOL)arg1 ;
-(void)setShapeRecognizer:(CHRecognizer *)arg1 ;
-(CHDrawing *)candidateDrawing;
@end

