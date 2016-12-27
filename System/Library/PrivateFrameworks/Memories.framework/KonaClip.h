/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/MiroClip.h>
#import <libobjc.A.dylib/MiroClip_Shim.h>
#import <libobjc.A.dylib/KonaClipMiroAutoEditAdditions.h>
#import <libobjc.A.dylib/SpeedRangeDelegate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, PHAsset, SpeedRanges, VideoMovie, NSMutableDictionary, TitleDefinition, NSString, ClipBackground, Movie, NSDate, NSURL, NSDictionary, PVEffect;

@interface KonaClip : NSObject <MiroClip, MiroClip_Shim, KonaClipMiroAutoEditAdditions, SpeedRangeDelegate, NSCopying> {

	NSMutableDictionary* m_clipDict;
	BOOL placeholder;
	BOOL showActivity;
	BOOL transitionChanged;
	unsigned _filterEffectSeed;
	int selectionStart;
	int selectionEnd;
	float _sourceStartTime;
	float _sourceDuration;
	TitleDefinition* _titleDefinition;
	NSString* _uuid;
	long long anchorItemIndex;
	SpeedRanges* _speedRanges;
	ClipBackground* _clipBackground;

}

@property (nonatomic,readonly) int minStart; 
@property (nonatomic,readonly) int maxEnd; 
@property (nonatomic,readonly) int maxDur; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) float speed; 
@property (nonatomic,readonly) SpeedRanges * speedRanges; 
@property (nonatomic,readonly) float frameRate; 
@property (nonatomic,readonly) VideoMovie * videoMovie; 
@property (assign,nonatomic) int startTime; 
@property (assign,nonatomic) int duration; 
@property (assign,nonatomic) int maxDuration; 
@property (nonatomic,readonly) float sourceStartTime; 
@property (nonatomic,readonly) float sourceDuration; 
@property (nonatomic,readonly) int rawSourceDuration; 
@property (nonatomic,readonly) NSArray * multiUpContainedClips; 
@property (nonatomic,readonly) PHAsset * asset; 
@property (nonatomic,readonly) CGSize naturalSizeWithTransform; 
@property (nonatomic,readonly) BOOL isSlomo; 
@property (assign,nonatomic) BOOL audioEnabled; 
@property (nonatomic,retain) Movie * movie; 
@property (nonatomic,retain) NSDate * creationDate; 
@property (assign,nonatomic) float rotation; 
@property (nonatomic,retain) NSURL * identifierURL; 
@property (assign,nonatomic) int startOffset; 
@property (nonatomic,retain) NSString * audioTitle; 
@property (nonatomic,retain) NSString * audioArtist; 
@property (nonatomic,retain) NSDictionary * movieMapLocation; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) int transitionEatLeft; 
@property (assign,nonatomic) int transitionEatRight; 
@property (assign,nonatomic) float audioVolume; 
@property (nonatomic,retain) NSURL * movieURL; 
@property (nonatomic,retain) KonaClip * anchorItem; 
@property (assign,nonatomic) int anchorLocalOffset; 
@property (assign,nonatomic) int anchorTargetOffset; 
@property (nonatomic,retain) KonaClip * precisionSourceClip; 
@property (assign,nonatomic) int precisionTrack; 
@property (assign,nonatomic) int freezeFrame; 
@property (assign,nonatomic) float scaleFactor; 
@property (assign,nonatomic) float translateX; 
@property (assign,nonatomic) float translateY; 
@property (assign,nonatomic) int audioStartOffset; 
@property (assign,nonatomic) int audioEndOffset; 
@property (assign,nonatomic) int audioFadeInDuration; 
@property (assign,nonatomic) int audioFadeOutDuration; 
@property (nonatomic,retain) SpeedRanges * speedRanges; 
@property (nonatomic,retain) PVEffect * filterEffect; 
@property (nonatomic,readonly) unsigned filterEffectSeed; 
@property (nonatomic,readonly) PVEffect * titleEffect; 
@property (assign,nonatomic) BOOL projectMovie; 
@property (nonatomic,retain) KonaClip * nextTransition; 
@property (assign,nonatomic) int desiredDuration; 
@property (assign,nonatomic) BOOL userEditing; 
@property (assign,nonatomic) int userEditedSize; 
@property (assign,nonatomic) float sourceStartTime;                          //@synthesize sourceStartTime=_sourceStartTime - In the implementation block
@property (assign,nonatomic) float sourceDuration;                           //@synthesize sourceDuration=_sourceDuration - In the implementation block
@property (nonatomic,retain) SpeedRanges * speedRanges;                      //@synthesize speedRanges=_speedRanges - In the implementation block
@property (assign,nonatomic) unsigned filterEffectSeed;                      //@synthesize filterEffectSeed=_filterEffectSeed - In the implementation block
@property (nonatomic,readonly) NSString * uuid;                              //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,readonly) int clipType; 
@property (nonatomic,retain) TitleDefinition * titleDefinition;              //@synthesize titleDefinition=_titleDefinition - In the implementation block
@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,readonly) int titleDuration; 
@property (nonatomic,retain) ClipBackground * clipBackground;                //@synthesize clipBackground=_clipBackground - In the implementation block
@property (assign,nonatomic) BOOL placeholder; 
@property (assign,nonatomic) BOOL showActivity; 
@property (assign,nonatomic) BOOL transitionChanged; 
@property (assign,nonatomic) int selectionStart; 
@property (assign,nonatomic) int selectionEnd; 
@property (nonatomic,readonly) BOOL hasSelection; 
@property (assign,nonatomic) long long anchorItemIndex; 
+(id)clip;
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(BOOL)audioEnabledByDefault;
+(Class)classForClipType:(int)arg1 ;
+(id)clipFromPlist:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setSpeed:(float)arg1 ;
-(int)duration;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setDuration:(int)arg1 ;
-(void)setStartTime:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)speed;
-(int)startOffset;
-(BOOL)hasSelection;
-(void)clearSelection;
-(void)setRotation:(float)arg1 ;
-(float)rotation;
-(float)scaleFactor;
-(void)setPlaceholder:(BOOL)arg1 ;
-(float)audioVolume;
-(void)setAudioVolume:(float)arg1 ;
-(BOOL)hasTitle;
-(BOOL)placeholder;
-(void)setStartOffset:(int)arg1 ;
-(void)setScaleFactor:(float)arg1 ;
-(PHAsset *)asset;
-(int)startTime;
-(NSString *)uuid;
-(NSDate *)creationDate;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)isSlomo;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(int)maxDuration;
-(CGSize)naturalSizeWithTransform;
-(id)loadAVAsset;
-(SpeedRanges *)speedRanges;
-(float)sourceStartTime;
-(int)clipType;
-(int)selectionStart;
-(VideoMovie *)videoMovie;
-(float)sourceDuration;
-(BOOL)audioEnabled;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3 ;
-(void)setAudioFadeOutDuration:(int)arg1 ;
-(void)setAudioEndOffset:(int)arg1 ;
-(void)setAudioFadeInDuration:(int)arg1 ;
-(int)audioFadeInDuration;
-(void)setAudioStartOffset:(int)arg1 ;
-(int)audioFadeOutDuration;
-(int)audioStartOffset;
-(int)audioEndOffset;
-(BOOL)hasAudioCharacteristic;
-(BOOL)isIris;
-(BOOL)isFreezeFrame;
-(int)selectionEnd;
-(int)maxEnd;
-(int)minStart;
-(int)paddedMaxEnd;
-(int)paddedMinStart;
-(int)maxDur;
-(int)paddedMaxDur;
-(BOOL)isMultiUp;
-(BOOL)hasPhotoCharacteristic;
-(NSArray *)multiUpContainedClips;
-(void)setMaxDuration:(int)arg1 ;
-(int)rawSourceDuration;
-(double)autoEditShortestDurationWithBlueprint:(id)arg1 ;
-(double)autoEditShortestIdealDurationWithBlueprint:(id)arg1 ;
-(double)autoEditLongestDurationWithBlueprint:(id)arg1 ;
-(BOOL)isPano;
-(PVEffect *)titleEffect;
-(float)frameRate;
-(ClipBackground *)clipBackground;
-(void)setTitleDefinition:(TitleDefinition *)arg1 ;
-(TitleDefinition *)titleDefinition;
-(int)transitionEatLeft;
-(void)setTranslateY:(float)arg1 ;
-(NSURL *)identifierURL;
-(BOOL)isSpeedAdjustable;
-(void)setFreezeFrame:(int)arg1 ;
-(void)setSelectionStart:(int)arg1 ;
-(void)setSelectionEnd:(int)arg1 ;
-(id)validationInformation;
-(void)setUserEditedSize:(int)arg1 ;
-(BOOL)hasVisualCharacteristic;
-(int)userEditedSize;
-(int)desiredDuration;
-(BOOL)userEditing;
-(void)validateEffectRange:(SCD_Struct_Mi11)arg1 inProject:(id)arg2 ;
-(void)setDesiredDuration:(int)arg1 ;
-(void)setUserEditing:(BOOL)arg1 ;
-(PVEffect *)filterEffect;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(KonaClip *)anchorItem;
-(void)setAnchorItemIndex:(long long)arg1 ;
-(long long)anchorItemIndex;
-(void)setAnchorItem:(KonaClip *)arg1 ;
-(int)transitionEatRight;
-(int)anchorTargetOffset;
-(void)setAnchorTargetOffset:(int)arg1 ;
-(void)setTransitionEatLeft:(int)arg1 ;
-(void)setTransitionEatRight:(int)arg1 ;
-(void)setAnchorLocalOffset:(int)arg1 ;
-(int)anchorLocalOffset;
-(void)didFinishTrimming;
-(void)setAudioTitle:(NSString *)arg1 ;
-(void)setSpeedRanges:(SpeedRanges *)arg1 ;
-(void)setFilterEffect:(PVEffect *)arg1 ;
-(unsigned)filterEffectSeed;
-(void)setIdentifierURL:(NSURL *)arg1 ;
-(void)changedMapFrom:(id)arg1 to:(id)arg2 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(float)translateX;
-(float)translateY;
-(void)initializeFromURL:(id)arg1 asset:(id)arg2 ;
-(CGAffineTransform)transform:(CGSize)arg1 fillDest:(BOOL)arg2 ;
-(int)titleStartTimeForClipStartTime:(int)arg1 ;
-(int)titleDuration;
-(int)freezeFrame;
-(BOOL)showActivity;
-(void)setShowActivity:(BOOL)arg1 ;
-(BOOL)transitionChanged;
-(void)setTransitionChanged:(BOOL)arg1 ;
-(void)setFilterEffectSeed:(unsigned)arg1 ;
-(BOOL)clipContentsEqual:(id)arg1 ;
-(BOOL)canBeDuplicated;
-(void)generateFilterEffectSeed;
-(void)stampNewUUID;
-(void)_addDefaultKeys;
-(void)setSourceStartTime:(float)arg1 ;
-(void)setSourceDuration:(float)arg1 ;
-(BOOL)isBurst;
-(BOOL)allowsTitle;
-(BOOL)isPrimary;
-(BOOL)canBeDeleted;
-(BOOL)isVideoOverlay;
-(void)updateSourceCaches;
-(NSString *)audioTitle;
-(void)setAudioArtist:(NSString *)arg1 ;
-(NSString *)audioArtist;
-(void)setMovieMapLocation:(NSDictionary *)arg1 ;
-(NSDictionary *)movieMapLocation;
-(void)setMovieURL:(NSURL *)arg1 ;
-(NSURL *)movieURL;
-(void)setPrecisionSourceClip:(KonaClip *)arg1 ;
-(KonaClip *)precisionSourceClip;
-(void)setPrecisionTrack:(int)arg1 ;
-(int)precisionTrack;
-(void)setTranslateX:(float)arg1 ;
-(void)setProjectMovie:(BOOL)arg1 ;
-(BOOL)projectMovie;
-(void)setNextTransition:(KonaClip *)arg1 ;
-(KonaClip *)nextTransition;
-(BOOL)isBackgroundAudio;
-(void)setClipBackground:(ClipBackground *)arg1 ;
-(Movie *)movie;
-(void)setMovie:(Movie *)arg1 ;
@end

