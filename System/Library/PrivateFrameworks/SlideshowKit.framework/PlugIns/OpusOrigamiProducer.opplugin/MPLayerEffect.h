/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
#import <OpusOrigamiProducer/MPLayer.h>
#import <OpusOrigamiProducer/MPEffectSupportPrivate.h>
#import <OpusOrigamiProducer/MPEffectSupport.h>

@protocol MZEffectTiming;
@class MCContainerEffect, NSString, NSMutableArray, NSMutableDictionary, NSObject, NSArray;

@interface MPLayerEffect : MPLayer <MPEffectSupportPrivate, MPEffectSupport> {

	MCContainerEffect* _layerEffect;
	NSString* _effectID;
	NSString* _presetID;
	NSMutableArray* _slides;
	NSMutableArray* _secondarySlides;
	NSMutableArray* _texts;
	NSMutableDictionary* _effectAttributes;
	long long _randomSeed;
	NSObject*<MZEffectTiming> _effectTiming;
	BOOL _supportsEffectTiming;
	BOOL _skipEffectTiming;
	long long _liveIndex;

}

@property (nonatomic,copy) NSString * effectID; 
@property (nonatomic,copy) NSString * presetID; 
@property (nonatomic,readonly) NSArray * slides; 
@property (nonatomic,readonly) NSArray * texts; 
@property (nonatomic,readonly) NSObject*<MZEffectTiming> effectTiming;              //@synthesize effectTiming=_effectTiming - In the implementation block
+(id)layerEffectWithEffectID:(id)arg1 andPaths:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 ;
+(id)layerEffectWithEffectID:(id)arg1 andStrings:(id)arg2 ;
+(id)layerEffectWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(void)setSkipEffectTiming:(BOOL)arg1 ;
-(NSArray *)slides;
-(id)allSlides:(BOOL)arg1 ;
-(long long)liveIndex;
-(void)setLayerEffect:(id)arg1 ;
-(void)removeAllSlides;
-(NSString *)presetID;
-(void)_updateTiming:(BOOL)arg1 ;
-(void)setLiveIndex:(long long)arg1 ;
-(void)addSlides:(id)arg1 ;
-(NSObject*<MZEffectTiming>)effectTiming;
-(void)setPhaseOutDuration:(double)arg1 ;
-(long long)maxNumberOfSecondarySlides;
-(void)moveTextsFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 fillIn:(BOOL)arg3 ;
-(void)moveSlidesFromIndices:(id)arg1 toIndex:(long long)arg2 ;
-(void)insertSecondarySlides:(id)arg1 atIndex:(long long)arg2 ;
-(double)lowestDisplayTime;
-(void)insertSlides:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeSecondarySlidesAtIndices:(id)arg1 ;
-(id)slideForMCSlide:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andStrings:(id)arg2 ;
-(id)_effectAttributes;
-(id)initWithEffectID:(id)arg1 strings:(id)arg2 paths:(id)arg3 ;
-(id)formattedAttributes;
-(void)_updateEffectTiming;
-(void)setEffectAttributes:(id)arg1 ;
-(id)slideInformation;
-(void)createSlidesWithPaths:(id)arg1 ;
-(void)copySecondarySlides:(id)arg1 ;
-(void)insertTexts:(id)arg1 atIndex:(long long)arg2 ;
-(void)removeAllSecondarySlides;
-(NSArray *)texts;
-(double)fullDuration;
-(id)effectAttributeForKey:(id)arg1 ;
-(double)mainDuration;
-(void)createSecondarySlidesWithPaths:(id)arg1 ;
-(void)addSecondarySlides:(id)arg1 ;
-(void)applyFormattedAttributes;
-(void)removeTextsAtIndices:(id)arg1 ;
-(id)initWithEffectID:(id)arg1 andPaths:(id)arg2 ;
-(long long)maxNumberOfSlides;
-(void)setEffectID:(NSString *)arg1 ;
-(void)removeSlidesAtIndices:(id)arg1 ;
-(void)setPresetID:(NSString *)arg1 ;
-(void)setEffectAttribute:(id)arg1 forKey:(id)arg2 ;
-(void)copySlides:(id)arg1 ;
-(void)removeAllTexts;
-(id)effectAttributes;
-(id)secondarySlides;
-(void)addTexts:(id)arg1 ;
-(void)setPhaseInDuration:(double)arg1 ;
-(void)createTextsWithStrings:(id)arg1 secondLineFactor:(double)arg2 ;
-(void)copyTexts:(id)arg1 ;
-(void)addSecondarySlide:(id)arg1 ;
-(BOOL)isLive;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setDuration:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)container;
-(void)updateTiming;
-(long long)randomSeed;
-(id)initWithEffectID:(id)arg1 ;
-(void)addText:(id)arg1 ;
-(NSString *)effectID;
-(void)addSlide:(id)arg1 ;
-(void)setRandomSeed:(long long)arg1 ;
@end

