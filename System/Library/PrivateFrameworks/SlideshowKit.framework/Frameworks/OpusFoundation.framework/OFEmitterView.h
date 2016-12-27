/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusFoundation/OpusFoundation-Structs.h>
#import <OpusFoundation/OFUIView.h>

@class NSArray, NSString;

@interface OFEmitterView : OFUIView

@property (assign,nonatomic) double birthRate; 
@property (assign,nonatomic) NSArray * emitterCells; 
@property (assign,nonatomic) double emitterDepth; 
@property (assign,nonatomic) NSString * emitterMode; 
@property (assign,nonatomic) CGPoint emitterPosition; 
@property (assign,nonatomic) NSString * emitterShape; 
@property (assign,nonatomic) CGSize emitterSize; 
@property (assign,nonatomic) double emitterZPosition; 
@property (assign,nonatomic) double lifetime; 
@property (assign,nonatomic) NSString * renderMode; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) unsigned seed; 
@property (assign,nonatomic) double spin; 
@property (assign,nonatomic) double velocity; 
+(Class)layerClass;
-(void)dealloc;
-(void)setVelocity:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(double)velocity;
-(unsigned)seed;
-(NSString *)renderMode;
-(void)setRenderMode:(NSString *)arg1 ;
-(void)setLifetime:(double)arg1 ;
-(void)setEmitterCells:(NSArray *)arg1 ;
-(void)setEmitterShape:(NSString *)arg1 ;
-(void)setBirthRate:(double)arg1 ;
-(void)setEmitterMode:(NSString *)arg1 ;
-(void)setEmitterPosition:(CGPoint)arg1 ;
-(void)setEmitterSize:(CGSize)arg1 ;
-(void)setSeed:(unsigned)arg1 ;
-(double)lifetime;
-(id)emitterLayer;
-(double)birthRate;
-(NSArray *)emitterCells;
-(double)spin;
-(void)setSpin:(double)arg1 ;
-(double)emitterDepth;
-(void)setEmitterDepth:(double)arg1 ;
-(NSString *)emitterMode;
-(CGPoint)emitterPosition;
-(NSString *)emitterShape;
-(CGSize)emitterSize;
-(double)emitterZPosition;
-(void)setEmitterZPosition:(double)arg1 ;
@end
