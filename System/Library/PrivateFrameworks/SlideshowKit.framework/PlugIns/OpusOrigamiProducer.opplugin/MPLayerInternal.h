/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/PlugIns/OpusOrigamiProducer.opplugin/OpusOrigamiProducer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OpusOrigamiProducer/OpusOrigamiProducer-Structs.h>
@class NSString, NSLock;

@interface MPLayerInternal : NSObject {

	double numberOfLoops;
	double opacity;
	CGPoint position;
	double zPosition;
	CGSize size;
	double rotationAngle;
	double xRotationAngle;
	double yRotationAngle;
	double scale;
	double timeIn;
	double duration;
	double phaseInDuration;
	double phaseOutDuration;
	NSString* title;
	BOOL isTriggered;
	BOOL startsPaused;
	BOOL isAudioLayer;
	long long audioPriority;
	double durationPadding;
	NSString* layerID;
	long long zIndex;
	NSString* uuid;
	NSLock* containerLock;
	BOOL cleaningUp;

}

@property (assign,nonatomic) double numberOfLoops; 
@property (assign,nonatomic) double opacity; 
@property (assign,nonatomic) CGPoint position; 
@property (assign,nonatomic) double zPosition; 
@property (assign,nonatomic) CGSize size; 
@property (assign,nonatomic) double rotationAngle; 
@property (assign,nonatomic) double xRotationAngle; 
@property (assign,nonatomic) double yRotationAngle; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) double timeIn; 
@property (assign,nonatomic) BOOL isTriggered; 
@property (assign,nonatomic) BOOL startsPaused; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double phaseInDuration; 
@property (assign,nonatomic) double phaseOutDuration; 
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) BOOL isAudioLayer; 
@property (assign,nonatomic) long long audioPriority; 
@property (assign,nonatomic) double durationPadding; 
@property (assign,nonatomic) long long zIndex; 
@property (nonatomic,retain) NSString * layerID; 
@property (nonatomic,retain) NSString * uuid; 
@property (nonatomic,retain) NSLock * containerLock; 
@property (assign,nonatomic) BOOL cleaningUp; 
-(void)setCleaningUp:(BOOL)arg1 ;
-(void)setPhaseOutDuration:(double)arg1 ;
-(BOOL)startsPaused;
-(double)durationPadding;
-(NSLock *)containerLock;
-(void)setContainerLock:(NSLock *)arg1 ;
-(BOOL)isTriggered;
-(void)setIsAudioLayer:(BOOL)arg1 ;
-(void)setXRotationAngle:(double)arg1 ;
-(void)setYRotationAngle:(double)arg1 ;
-(void)setAudioPriority:(long long)arg1 ;
-(void)setTimeIn:(double)arg1 ;
-(void)setDurationPadding:(double)arg1 ;
-(void)setIsTriggered:(BOOL)arg1 ;
-(long long)audioPriority;
-(double)phaseInDuration;
-(BOOL)isAudioLayer;
-(double)phaseOutDuration;
-(void)setPhaseInDuration:(double)arg1 ;
-(BOOL)cleaningUp;
-(void)setLayerID:(NSString *)arg1 ;
-(double)yRotationAngle;
-(double)xRotationAngle;
-(NSString *)layerID;
-(double)timeIn;
-(void)setStartsPaused:(BOOL)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(NSString *)title;
-(void)setDuration:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(void)setSize:(CGSize)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(CGPoint)position;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(void)setZPosition:(double)arg1 ;
-(NSString *)uuid;
-(void)setZIndex:(long long)arg1 ;
-(void)setUuid:(NSString *)arg1 ;
-(long long)zIndex;
-(double)numberOfLoops;
-(double)zPosition;
-(double)rotationAngle;
-(void)setRotationAngle:(double)arg1 ;
-(void)setNumberOfLoops:(double)arg1 ;
@end

