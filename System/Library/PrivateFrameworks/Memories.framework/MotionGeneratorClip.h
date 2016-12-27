/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <Memories/KonaClip.h>

@class PVEffect;

@interface MotionGeneratorClip : KonaClip {

	PVEffect* _generatorEffect;

}

@property (nonatomic,retain) PVEffect * generatorEffect;              //@synthesize generatorEffect=_generatorEffect - In the implementation block
-(int)maxDuration;
-(int)clipType;
-(BOOL)hasAudioCharacteristic;
-(BOOL)isFreezeFrame;
-(BOOL)hasVisualCharacteristic;
-(void)validateEffectRange:(SCD_Struct_Mi11)arg1 inProject:(id)arg2 ;
-(id)plistRepresentationFromProject:(id)arg1 ;
-(void)setContentsFromPlist:(id)arg1 inProject:(id)arg2 ;
-(PVEffect *)generatorEffect;
-(void)setGeneratorEffect:(PVEffect *)arg1 ;
@end
