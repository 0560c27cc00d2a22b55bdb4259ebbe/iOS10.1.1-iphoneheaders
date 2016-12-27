/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SKNode.h>

@class NSArray, SKAction;

@interface NTKCollectionNode : SKNode {

	NSArray* _nodes;
	SKAction* _appearAction;
	SKAction* _disappearAction;
	/*^block*/id _animateBlock;
	double _radius;

}

@property (nonatomic,retain) NSArray * nodes;                         //@synthesize nodes=_nodes - In the implementation block
@property (nonatomic,retain) SKAction * appearAction;                 //@synthesize appearAction=_appearAction - In the implementation block
@property (nonatomic,retain) SKAction * disappearAction;              //@synthesize disappearAction=_disappearAction - In the implementation block
@property (nonatomic,copy) id animateBlock;                           //@synthesize animateBlock=_animateBlock - In the implementation block
@property (assign,nonatomic) double radius;                           //@synthesize radius=_radius - In the implementation block
+(float)innerRadius;
+(id)ticks60Utilitarian;
+(id)hours4;
+(id)hours12;
+(id)minutesUtilitarian;
+(id)hours12ZeusWithFont:(long long)arg1 ;
+(id)ticks60;
+(id)ticks120;
+(id)ticksPills;
+(id)ticks240;
+(id)minutesPills;
+(id)ticksColorAnalog;
+(float)outerRadius;
+(id)ticks60Chrono;
+(id)hoursChrono;
+(id)labels60Chrono;
+(id)ticks30Chrono;
+(id)labels30Chrono;
+(id)ticks6Chrono;
+(id)labels6Chrono;
+(id)labels6_10_40Chrono;
+(id)labels3Chrono;
+(id)labels3_10_90Chrono;
-(id)init;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(NSArray *)nodes;
-(void)setNodes:(NSArray *)arg1 ;
-(void)setAppearAction:(SKAction *)arg1 ;
-(void)setDisappearAction:(SKAction *)arg1 ;
-(void)createSubNodes;
-(void)applyAppearanceFraction:(double)arg1 ;
-(void)applyAppearanceFraction:(double)arg1 inverted:(BOOL)arg2 ;
-(void)scaleNodes:(id)arg1 fraction:(double)arg2 ;
-(void)setAnimateBlock:(id)arg1 ;
-(id)animateBlock;
-(void)fade:(double)arg1 inverted:(BOOL)arg2 ;
-(id)initWithName:(id)arg1 nodes:(id)arg2 animateBlock:(/*^block*/id)arg3 ;
-(SKAction *)appearAction;
-(SKAction *)disappearAction;
-(void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 scale:(double)arg3 rotate:(BOOL)arg4 round:(BOOL)arg5 ;
-(void)fadeNodes:(double)arg1 except:(id)arg2 ;
-(void)scaleNodes:(double)arg1 andResetNodesAtIndices:(id)arg2 ;
-(void)appearAnimated;
-(void)disappearAnimated;
-(void)updateNodesWithOffset:(unsigned long long)arg1 angleMultiplier:(double)arg2 rotate:(BOOL)arg3 round:(BOOL)arg4 ;
-(void)fadeNodes:(double)arg1 ;
-(void)scaleNodes:(double)arg1 ;
-(void)fadeAndScale:(double)arg1 ;
@end

