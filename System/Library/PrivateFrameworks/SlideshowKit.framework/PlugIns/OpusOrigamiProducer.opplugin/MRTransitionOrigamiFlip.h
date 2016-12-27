/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusOrigamiProducer/MRTransition.h>

@class MROrigamiAnimationPath;

@interface MRTransitionOrigamiFlip : MRTransition {

	MROrigamiAnimationPath* mBigSwing;
	MROrigamiAnimationPath* mSideSwing;

}
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)supportsDirectionOverride;
-(BOOL)controlsLayersTime;
-(void)_setupSwingTimings;
-(id)initWithTransitionID:(id)arg1 ;
-(void)_cleanupSwingTimings;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)setAttributes:(id)arg1 ;
-(void)cleanup;
@end

