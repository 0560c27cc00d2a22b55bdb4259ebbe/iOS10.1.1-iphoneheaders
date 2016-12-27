/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class Project, NSArray, AVMutableComposition, AVPlayerItem, CompositionTrackGroup, AVMutableCompositionTrack, AVMutableVideoComposition, NSMutableArray, AVMutableAudioMix, CompositionDuckingTimes, NSMutableDictionary;

@interface Composition : NSObject {

	Project* m_project;
	NSArray* m_editList;
	AVMutableComposition* m_avComposition;
	AVPlayerItem* m_avPlayerItem;
	CompositionTrackGroup* m_trackGroupA;
	CompositionTrackGroup* m_trackGroupB;
	CompositionTrackGroup* m_backgroundAudioTrackGroup[1];
	CompositionTrackGroup* m_foregroundAudioTrackGroup[3];
	CompositionTrackGroup* m_transitionAudioTrackGroup;
	CompositionTrackGroup* m_cutawayTrackGroup;
	CompositionTrackGroup* m_alternativeTrackGroupA;
	CompositionTrackGroup* m_alternativeTrackGroupB;
	AVMutableCompositionTrack* m_audioWorkaroundEmptyTrack;
	NSArray* m_transitionInputs;
	AVMutableVideoComposition* m_videoComposition;
	NSMutableArray* m_videoCompositionInstructions;
	NSMutableArray* m_audioMixParameters;
	AVMutableAudioMix* m_audioMix;
	float m_globalAudioVolume;
	CompositionDuckingTimes* m_compositionDuckingTimes;
	long long m_backgroundAudioTrackCount;
	long long m_foregroundAudioTrackCount;
	CGSize m_previousRenderSize;
	unsigned m_setNeedsUpdate : 1;
	BOOL m_useShortenedCompositionToEditClip;
	int m_videotrackAStartAt;
	int m_videotrackBStartAt;
	NSMutableDictionary* m_assetsUsed;
	BOOL _isExporting;
	BOOL _fullScreen;
	BOOL _isDynamicPlayBack;
	BOOL _hasMemoryConstraints;
	BOOL _fullScreenPlaybackOnExternalDisplay;
	float _dynamicScale;
	/*^block*/id _compositionDuckingTimesCreationBlock;
	CGSize _viewSize;

}

@property (nonatomic,readonly) Project * project; 
@property (nonatomic,readonly) AVPlayerItem * playerItem; 
@property (nonatomic,readonly) AVMutableComposition * AVComposition; 
@property (nonatomic,readonly) AVMutableVideoComposition * videoComposition; 
@property (nonatomic,readonly) AVMutableAudioMix * audioMix; 
@property (assign,nonatomic) float globalAudioVolume; 
@property (nonatomic,readonly) SCD_Struct_Mi1 duration; 
@property (assign,nonatomic) NSArray * editList; 
@property (nonatomic,retain) CompositionDuckingTimes * compositionDuckingTimes; 
@property (assign,nonatomic) BOOL useShortenedCompositionToEditClip; 
@property (nonatomic,readonly) int videotrackAStartAt; 
@property (nonatomic,readonly) int videotrackBStartAt; 
@property (assign,nonatomic) BOOL isExporting;                                               //@synthesize isExporting=_isExporting - In the implementation block
@property (assign,nonatomic) CGSize viewSize;                                                //@synthesize viewSize=_viewSize - In the implementation block
@property (assign,nonatomic) BOOL fullScreen;                                                //@synthesize fullScreen=_fullScreen - In the implementation block
@property (assign,nonatomic) BOOL isDynamicPlayBack;                                         //@synthesize isDynamicPlayBack=_isDynamicPlayBack - In the implementation block
@property (assign,nonatomic) float dynamicScale;                                             //@synthesize dynamicScale=_dynamicScale - In the implementation block
@property (assign,nonatomic) BOOL hasMemoryConstraints;                                      //@synthesize hasMemoryConstraints=_hasMemoryConstraints - In the implementation block
@property (assign,nonatomic) BOOL fullScreenPlaybackOnExternalDisplay;                       //@synthesize fullScreenPlaybackOnExternalDisplay=_fullScreenPlaybackOnExternalDisplay - In the implementation block
@property (nonatomic,retain) NSArray * transitionInputs; 
@property (nonatomic,copy) id compositionDuckingTimesCreationBlock;                          //@synthesize compositionDuckingTimesCreationBlock=_compositionDuckingTimesCreationBlock - In the implementation block
-(id)init;
-(void)dealloc;
-(SCD_Struct_Mi1)duration;
-(void)update;
-(void)setFullScreen:(BOOL)arg1 ;
-(BOOL)fullScreen;
-(BOOL)validate;
-(void)refresh:(id)arg1 ;
-(CGSize)viewSize;
-(AVMutableVideoComposition *)videoComposition;
-(AVPlayerItem *)playerItem;
-(void)clearPlayerItemProperties;
-(void)applyPlayerItemProperties;
-(Project *)project;
-(BOOL)fullScreenPlaybackOnExternalDisplay;
-(void)playerItemDidReachEnd:(id)arg1 ;
-(NSArray *)editList;
-(void)markDirty;
-(void)setCompositionDuckingTimesCreationBlock:(id)arg1 ;
-(void)setProject:(id)arg1 frameDuration:(SCD_Struct_Mi1)arg2 viewSize:(CGSize)arg3 forFullScreen:(BOOL)arg4 ;
-(void)setIsExporting:(BOOL)arg1 ;
-(void)setEditList:(NSArray *)arg1 ;
-(void)setViewSize:(CGSize)arg1 ;
-(void)finalizeVideoComposition;
-(AVMutableComposition *)AVComposition;
-(AVMutableAudioMix *)audioMix;
-(BOOL)isExporting;
-(void)setFullScreenPlaybackOnExternalDisplay:(BOOL)arg1 ;
-(BOOL)hasMemoryConstraints;
-(BOOL)shouldInsertASilentAudioTrackAsWorkaround;
-(void)setTransitionInputs:(NSArray *)arg1 ;
-(void)noteEffectChanged:(id)arg1 ;
-(NSArray *)transitionInputs;
-(float)globalAudioVolume;
-(SCD_Struct_Mi1)extensionForTransitionsSupportingEatLeftRight:(id)arg1 leftSideOfTransition:(BOOL)arg2 splitClip:(BOOL*)arg3 ;
-(SCD_Struct_Mi1)transitionExtensionForClip:(id)arg1 left:(BOOL)arg2 splitClip:(BOOL*)arg3 ;
-(id)transitionTopTrack;
-(id)transitionBottomTrack;
-(id)newInstructionGraphNodeForClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(BOOL*)arg4 isContainedClip:(BOOL)arg5 applyTitleEffect:(BOOL)arg6 ;
-(id)instructionToShowClip:(id)arg1 withTrackID:(int)arg2 withTransform:(CGAffineTransform)arg3 timeRange:(SCD_Struct_Mi11)arg4 requiresCARendering:(BOOL)arg5 isFreezeFrame:(BOOL)arg6 applyTitleEffect:(BOOL)arg7 ;
-(id)instructionToHideTrackID:(int)arg1 whileHidingTrackID:(int)arg2 timeRange:(SCD_Struct_Mi11)arg3 requiresCARendering:(BOOL)arg4 ;
-(void)addVideoInstructionsForTransition:(id)arg1 forRange:(SCD_Struct_Mi11)arg2 toInstructions:(id)arg3 previousTrackID:(int)arg4 previousClip:(id)arg5 previousClipRequiresCA:(BOOL)arg6 nextTrackID:(int)arg7 nextClip:(id)arg8 nextClipRequiresCA:(BOOL)arg9 cutawaysIntersection:(id)arg10 ;
-(BOOL)cutIsContiguous:(id)arg1 transition:(id)arg2 next:(id)arg3 ;
-(void)addTransitionSoundsForState:(id)arg1 ;
-(id)instructionToShowImageWithClip:(id)arg1 withTransform:(CGAffineTransform)arg2 timeRange:(SCD_Struct_Mi11)arg3 requiresCARendering:(BOOL)arg4 applyTitleEffect:(BOOL)arg5 ;
-(void)addTitleSoundsForState:(id)arg1 ;
-(void)burnInPlaybackSettings:(id)arg1 ;
-(void)assetUsed:(id)arg1 ;
-(void)setRenderScale;
-(SCD_Struct_Mi1)fadeToBlackStartCMTime;
-(SCD_Struct_Mi1)fadeToBlackDurationCMTime;
-(float)volumeForClip:(id)arg1 ;
-(void)addAudioPointsToArray:(id)arg1 atFrameTime:(int)arg2 volume:(double)arg3 ;
-(CompositionDuckingTimes *)compositionDuckingTimes;
-(id)makeAudioPointsArrayForClip:(id)arg1 shouldUseDuckingArrays:(BOOL)arg2 ;
-(SCD_Struct_Mi11)sourceTimeRangeForClip:(id)arg1 endOfComposition:(SCD_Struct_Mi1)arg2 projectStartTime:(SCD_Struct_Mi1*)arg3 ;
-(BOOL)addVolumeRampToTrackGroup:(id)arg1 forClip:(id)arg2 shouldUseDucking:(BOOL)arg3 ;
-(SCD_Struct_Mi11)sourceTimeRangeForAudioClip:(id)arg1 endOfComposition:(SCD_Struct_Mi1)arg2 ;
-(BOOL)assembleAudioCompositionTrackGroups:(id*)arg1 destinationTrackGroupCount:(long long)arg2 audioItem:(id)arg3 clip:(id)arg4 shouldUseDucking:(BOOL)arg5 shouldLoopClipContents:(BOOL)arg6 ;
-(BOOL)writeVolumeRampToCompositionFromTrackGroup:(id)arg1 endOfComposition:(SCD_Struct_Mi1)arg2 ;
-(float)percentBetweenRange:(SCD_Struct_Mi11)arg1 forTime:(SCD_Struct_Mi1)arg2 firstRange:(SCD_Struct_Mi11*)arg3 secondRange:(SCD_Struct_Mi11*)arg4 ;
-(id)splitCompositionInstruction:(id)arg1 atTime:(SCD_Struct_Mi1)arg2 options:(int)arg3 ;
-(CGAffineTransform)transformForCutaway:(id)arg1 underlayTransform:(CGAffineTransform*)arg2 forSize:(CGSize)arg3 ;
-(void)addCutaway:(id)arg1 toInstruction:(id)arg2 transform:(CGAffineTransform)arg3 underlayTransform:(CGAffineTransform)arg4 ;
-(id)newInstructionGraphNodeForClipTitleEffect:(id)arg1 inputIGNode:(id)arg2 ;
-(BOOL)emptySegments:(id)arg1 ;
-(void)removeTrackFromAudioMix:(int)arg1 ;
-(BOOL)removeTrackIfEmpty:(id)arg1 ;
-(void)logRemovedTrack:(id)arg1 trackID:(int)arg2 ;
-(void)logAddedTrack:(id)arg1 trackID:(int)arg2 ;
-(void)addBackTracksIfRemoved;
-(id)compositionDuckingTimesCreationBlock;
-(void)setCompositionDuckingTimes:(CompositionDuckingTimes *)arg1 ;
-(BOOL)CARenderingRequiredForClip:(id)arg1 ;
-(CGSize)naturalSizeForClipAfterTransform:(id)arg1 ;
-(SCD_Struct_Mi11)compositionItemsForState:(id)arg1 compositionItem:(id*)arg2 backfillCompositionItem:(id*)arg3 ;
-(id)splitCompositionState:(id)arg1 forCutaways:(id)arg2 searchIndex:(int*)arg3 projectDuration:(SCD_Struct_Mi1)arg4 ;
-(void)updateVideoAndAudioInstructionForState:(id)arg1 cutSwaped:(BOOL)arg2 originalState:(id)arg3 ;
-(void)updateCutawayCompositionTracks:(SCD_Struct_Mi1)arg1 ;
-(void)updateInstructionsWithTitles:(id)arg1 ;
-(void)updateBackgroundAudioCompositionTracks:(SCD_Struct_Mi1)arg1 ;
-(void)updateForegroundAudioCompositionTracks:(SCD_Struct_Mi1)arg1 ;
-(BOOL)insertASilentAudioTrackAsWorkaround;
-(id)splitCompositionState:(id)arg1 atTime:(SCD_Struct_Mi1)arg2 ;
-(void)addIntersectingCutaways:(id)arg1 toInstruction:(id)arg2 ;
-(id)instructionToTransitionTracksForRange:(SCD_Struct_Mi11)arg1 requiresCARendering:(BOOL)arg2 incomingClipIsNarrower:(BOOL)arg3 incomingClipRequiresBG:(BOOL)arg4 outgoingClipRequiresBG:(BOOL)arg5 incomingClipIsZoomed:(BOOL)arg6 outgoingClipIsZoomed:(BOOL)arg7 transitionClip:(id)arg8 applyTitleEffect:(BOOL)arg9 ;
-(id)cutawaysIntersectingWithClip:(id)arg1 previousTransition:(id)arg2 nextTransition:(id)arg3 cutaways:(id)arg4 ;
-(void)rebuildCompositionInstructionsForMovieKenBurnsExtra:(id)arg1 ;
-(void)removeEmptyTracks;
-(void)rebuildCompositionInstructionsForClip:(id)arg1 ;
-(SCD_Struct_Mi11)timeRangeForClipIncludingTransitions:(id)arg1 ;
-(void)refreshCompositionInstructionsWithinRange:(SCD_Struct_Mi11)arg1 ;
-(int)outputFrameRate;
-(id)newInstructionGraphNodeToShowImageWithClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 isContainedClip:(BOOL)arg3 ;
-(id)newInstructionGraphNodeToShowIrisMovieClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(BOOL*)arg4 applyTitleEffect:(BOOL)arg5 ;
-(id)newInstructionGraphNodeToShowMultiUpClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 requiresTweening:(BOOL*)arg4 applyTitleEffect:(BOOL)arg5 ;
-(id)newInstructionGraphNodeToShowGeneratorClip:(id)arg1 ;
-(id)newInstructionGraphNodeToShowMovieClip:(id)arg1 clipTransform:(CGAffineTransform)arg2 compositionTrackID:(int)arg3 ;
-(id)newInstructionGraphNodeToShowKenBurnsEffect:(id)arg1 withInfo:(id)arg2 inputNode:(id)arg3 ;
-(CGAffineTransform)transformKBForVisibleRect:(CGRect)arg1 imageSize:(CGSize)arg2 ;
-(void)splitCompositionInstructionListAtTime:(SCD_Struct_Mi1)arg1 options:(int)arg2 ;
-(void)setDynamicPlayBack:(BOOL)arg1 ;
-(void)lowerDynamicResolution;
-(void)raiseDynamicResolution;
-(void)checkIt:(id)arg1 timeRange:(SCD_Struct_Mi11)arg2 ;
-(void)setGlobalAudioVolume:(float)arg1 ;
-(BOOL)useShortenedCompositionToEditClip;
-(void)setUseShortenedCompositionToEditClip:(BOOL)arg1 ;
-(int)videotrackAStartAt;
-(int)videotrackBStartAt;
-(BOOL)isDynamicPlayBack;
-(void)setIsDynamicPlayBack:(BOOL)arg1 ;
-(float)dynamicScale;
-(void)setDynamicScale:(float)arg1 ;
-(void)setHasMemoryConstraints:(BOOL)arg1 ;
@end

