/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <OpusOrigamiProducer/MPFilterSupport.h>
#import <OpusOrigamiProducer/MPAnimationSupport.h>

@protocol MPEffectSupport;
@class MPFrame, NSMutableDictionary, NSString, MPLayerGroup, NSMutableArray, MCSlide, NSObject;

@interface MPSlide : NSObject <NSCoding, NSCopying, MPFilterSupport, MPAnimationSupport> {

	MPFrame* _frame;
	NSMutableDictionary* _attributes;
	NSString* _path;
	MPLayerGroup* _layerGroup;
	NSMutableArray* _filters;
	NSMutableDictionary* _animationPaths;
	MCSlide* _slide;
	NSObject*<MPEffectSupport> _parent;
	double _startTime;
	double _duration;
	double _audioFadeInDuration;
	double _audioFadeOutDuration;
	double _audioDuckInDuration;
	double _audioDuckOutDuration;
	double _audioDuckLevel;
	double _scale;
	double _rotation;
	CGPoint _center;
	double _audioVolume;
	NSString* _sizingMode;
	unsigned long long _mediaType;
	BOOL _isSecondary;
	BOOL _mirrorToDuplicatePaths;
	double _cachedShowTime;
	double _cachedShowDuration;
	CGSize _cachedSize;

}

@property (nonatomic,retain) MPFrame * frame; 
@property (nonatomic,copy) NSString * path; 
@property (nonatomic,copy) NSString * absolutePath; 
@property (nonatomic,retain) MPLayerGroup * layerGroup; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double startTime; 
@property (assign,nonatomic) double audioVolume; 
@property (assign,nonatomic) double audioFadeInDuration; 
@property (assign,nonatomic) double audioFadeOutDuration; 
@property (assign,nonatomic) double audioDuckInDuration; 
@property (assign,nonatomic) double audioDuckOutDuration; 
@property (assign,nonatomic) double audioDuckLevel; 
@property (nonatomic,copy) NSString * sizingMode; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double rotation; 
+(id)slideWithPath:(id)arg1 ;
+(id)slide;
-(void)copyFilters:(id)arg1 ;
-(void)setSlide:(id)arg1 ;
-(long long)liveIndex;
-(void)setKeyframedAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(BOOL)hasAnimationPathForKey:(id)arg1 ;
-(double)showDisplayTime;
-(void)setIsSecondary:(BOOL)arg1 ;
-(id)keyframedAnimationPathForKey:(id)arg1 ;
-(void)setLayerGroup:(MPLayerGroup *)arg1 ;
-(void)replaceObjectInFilterAtIndex:(long long)arg1 withObject:(id)arg2 ;
-(void)copyLayerGroup:(id)arg1 ;
-(id)nearestLayer;
-(id)fullDebugLog;
-(double)showTime;
-(double)audioDuckLevel;
-(void)setSizingMode:(NSString *)arg1 ;
-(NSString *)sizingMode;
-(double)showDuration;
-(void)removeObjectFromFilterAtIndex:(long long)arg1 ;
-(double)originalAspectRatio;
-(BOOL)needsTimingUpdateOnSlideChange;
-(id)initWithLayerGroup:(id)arg1 ;
-(id)scriptingFrame;
-(BOOL)determineShowTime:(double*)arg1 showDuration:(double*)arg2 ;
-(void)setAbsolutePath:(NSString *)arg1 ;
-(void)setAudioDuckOutDuration:(double)arg1 ;
-(void)resetCachedTimes;
-(id)parentEffect;
-(BOOL)needsStyleUpdateOnSlideChange;
-(id)scriptingAnimations;
-(BOOL)isPanoramaInDocument:(id)arg1 ;
-(double)showDisplayStartTime;
-(double)audioDuckInDuration;
-(id)parentSubtitleEffect;
-(id)animationPaths;
-(void)duplicateAnimationPaths;
-(void)setUserInfoAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)copyVars:(id)arg1 ;
-(void)setAudioDuckInDuration:(double)arg1 ;
-(double)audioDuckOutDuration;
-(void)insertObject:(id)arg1 inFilterAtIndex:(long long)arg2 ;
-(void)insertFilters:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeAllFilters;
-(BOOL)canZoom;
-(void)removeFiltersAtIndices:(id)arg1 ;
-(void)setAudioDuckLevel:(double)arg1 ;
-(void)moveFiltersFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)removeAnimationPathForKey:(id)arg1 ;
-(id)animationPathForKey:(id)arg1 ;
-(void)copyAnimationPaths:(id)arg1 ;
-(void)setAnimationPath:(id)arg1 forKey:(id)arg2 ;
-(MPLayerGroup *)layerGroup;
-(id)userInfoAttributeForKey:(id)arg1 ;
-(void)copyFrame:(id)arg1 ;
-(void)setMirrorToDuplicatePaths:(BOOL)arg1 ;
-(void)setScriptingFrame:(id)arg1 ;
-(long long)countOfFilter;
-(void)setScriptingAnimations:(id)arg1 ;
-(id)objectInFilterAtIndex:(long long)arg1 ;
-(id)init;
-(void)setFrame:(MPFrame *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(MPFrame *)frame;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(id)action;
-(NSString *)path;
-(CGPoint)center;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scale;
-(void)setCenter:(CGPoint)arg1 ;
-(id)filters;
-(void)setPath:(NSString *)arg1 ;
-(long long)index;
-(void)setRotation:(double)arg1 ;
-(double)rotation;
-(id)initWithPath:(id)arg1 ;
-(double)audioVolume;
-(void)setAudioVolume:(double)arg1 ;
-(void)cleanup;
-(double)startTime;
-(void)addFilter:(id)arg1 ;
-(BOOL)hasMovie;
-(id)parent;
-(void)setParent:(id)arg1 ;
-(double)aspectRatio;
-(void)setMediaType:(unsigned long long)arg1 ;
-(NSString *)absolutePath;
-(void)dump;
-(double)maxDuration;
-(void)setAudioFadeOutDuration:(double)arg1 ;
-(void)setAudioFadeInDuration:(double)arg1 ;
-(double)audioFadeInDuration;
-(double)audioFadeOutDuration;
-(BOOL)isSecondary;
-(id)slide;
-(void)addFilters:(id)arg1 ;
-(id)parentDocument;
@end

