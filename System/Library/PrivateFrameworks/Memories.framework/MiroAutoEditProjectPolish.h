/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class Project, MiroMemory, NSMutableArray, MiroAutoEditTransitionController, MiroAutoEditMultiUpController, MiroAutoEditController, MiroAutoEditLogger;

@interface MiroAutoEditProjectPolish : NSObject {

	Project* _project;
	MiroMemory* _activeMemory;
	NSMutableArray* _layoutClips;
	MiroAutoEditTransitionController* _transitionsController;
	MiroAutoEditMultiUpController* _multiController;
	MiroAutoEditController* _editController;
	MiroAutoEditLogger* _logger;
	NSMutableArray* _conversionNeeded;
	double _skipLayoutClipsCount;

}

@property (assign,nonatomic) double skipLayoutClipsCount;                                           //@synthesize skipLayoutClipsCount=_skipLayoutClipsCount - In the implementation block
@property (nonatomic,retain) Project * project;                                                     //@synthesize project=_project - In the implementation block
@property (assign,nonatomic) MiroMemory * activeMemory;                                             //@synthesize activeMemory=_activeMemory - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutClips;                                          //@synthesize layoutClips=_layoutClips - In the implementation block
@property (nonatomic,retain) MiroAutoEditTransitionController * transitionsController;              //@synthesize transitionsController=_transitionsController - In the implementation block
@property (nonatomic,retain) MiroAutoEditMultiUpController * multiController;                       //@synthesize multiController=_multiController - In the implementation block
@property (assign,nonatomic) MiroAutoEditController * editController;                               //@synthesize editController=_editController - In the implementation block
@property (nonatomic,retain) MiroAutoEditLogger * logger;                                           //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableArray * conversionNeeded;                                     //@synthesize conversionNeeded=_conversionNeeded - In the implementation block
-(Project *)project;
-(MiroAutoEditTransitionController *)transitionsController;
-(NSMutableArray *)layoutClips;
-(void)setProject:(Project *)arg1 ;
-(void)setActiveMemory:(MiroMemory *)arg1 ;
-(void)setLayoutClips:(NSMutableArray *)arg1 ;
-(MiroAutoEditLogger *)logger;
-(MiroMemory *)activeMemory;
-(void)setLogger:(MiroAutoEditLogger *)arg1 ;
-(id)turnAssetsIntoLayoutClips:(id)arg1 ;
-(void)stopTrackingLayoutClip:(id)arg1 ;
-(void)polishProject;
-(void)setEditController:(MiroAutoEditController *)arg1 ;
-(void)applyTitleToFirstClip;
-(void)applyTransitions;
-(void)applyIrisEffect;
-(void)applyBurstEffect;
-(void)removeBurstStylesFromEndClips;
-(NSMutableArray *)conversionNeeded;
-(void)batchConvertCompoundClipsToKenBurnsClips;
-(void)createLayoutClips;
-(void)applyAudioPolish;
-(void)clearAllStandardClipEffects;
-(void)applyMultiUpTreatments;
-(void)createTransitionControllerAndPrepare;
-(void)applyClipPolish;
-(void)setMultiController:(MiroAutoEditMultiUpController *)arg1 ;
-(MiroAutoEditMultiUpController *)multiController;
-(BOOL)clipIsViableZoomToPersonCandidate:(id)arg1 ;
-(double)skipLayoutClipsCount;
-(void)setSkipLayoutClipsCount:(double)arg1 ;
-(MiroAutoEditController *)editController;
-(void)setTransitionsController:(MiroAutoEditTransitionController *)arg1 ;
-(void)applyAutomaticThemeTitleToClip:(id)arg1 forPoster:(BOOL)arg2 ;
-(BOOL)isPortraitSquareVideo:(id)arg1 ;
-(id)_everyTitleDEBUG;
-(void)setConversionNeeded:(NSMutableArray *)arg1 ;
-(void)convertSpecialClipTypeToKenBurnsClip:(id)arg1 ;
-(unsigned long long)allowedBurstStylesFromBlueprint:(id)arg1 ;
-(void)_updateSpeedRampsForClip:(id)arg1 beginningRampDurationSeconds:(double)arg2 endingRampDurationSeconds:(double)arg3 ;
-(BOOL)multiOptionIsNotFirstOrLast:(id)arg1 ;
-(void)removeIrisStylesFromFirstThreeClips;
-(void)adjustSlowMotionSpeedRamps;
-(BOOL)extremeCropAllowed;
@end

