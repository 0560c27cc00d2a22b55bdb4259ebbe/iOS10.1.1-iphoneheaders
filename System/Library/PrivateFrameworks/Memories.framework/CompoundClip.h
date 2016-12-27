/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KenBurnsClip.h>
#import <libobjc.A.dylib/CompoundClipInformation.h>

@class KenBurnsClip, NSString;

@interface CompoundClip : KenBurnsClip <CompoundClipInformation> {

	double _minimumPhotoDuration;
	double _idealPhotoDuration;
	double _maximumPhotoDuration;
	KenBurnsClip* _kenBurnsClip;
	double _projectAspectRatio;

}

@property (nonatomic,retain) KenBurnsClip * kenBurnsClip;              //@synthesize kenBurnsClip=_kenBurnsClip - In the implementation block
@property (assign,nonatomic) double projectAspectRatio;                //@synthesize projectAspectRatio=_projectAspectRatio - In the implementation block
@property (assign,nonatomic) double minimumPhotoDuration;              //@synthesize minimumPhotoDuration=_minimumPhotoDuration - In the implementation block
@property (assign,nonatomic) double idealPhotoDuration;                //@synthesize idealPhotoDuration=_idealPhotoDuration - In the implementation block
@property (assign,nonatomic) double maximumPhotoDuration;              //@synthesize maximumPhotoDuration=_maximumPhotoDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)containedClips;
-(KenBurnsClip *)kenBurnsClip;
-(void)setMinimumPhotoDuration:(double)arg1 ;
-(void)setIdealPhotoDuration:(double)arg1 ;
-(void)setMaximumPhotoDuration:(double)arg1 ;
-(BOOL)expandsEditList;
-(void)turnOffKenBurnsForClips:(id)arg1 ;
-(id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 transitionEffectProperties:(id)arg3 betweenClips:(id)arg4 ;
-(void)setKenBurnsClip:(KenBurnsClip *)arg1 ;
-(double)minimumPhotoDuration;
-(double)idealPhotoDuration;
-(double)maximumPhotoDuration;
-(double)projectAspectRatio;
-(id)addTransitionsWithName:(id)arg1 transitionDuration:(int)arg2 betweenClips:(id)arg3 ;
-(void)takePropertiesFromKenBurnsClip:(id)arg1 ;
-(void)setProjectAspectRatio:(double)arg1 ;
-(id)initWithKenBurnsClip:(id)arg1 projectAspectRatio:(double)arg2 ;
@end

