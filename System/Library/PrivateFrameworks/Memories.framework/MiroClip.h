/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, PHAsset;


@protocol MiroClip <MiroClip_Shim,NSObject>
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
@required
-(int)duration;
-(void)setDuration:(int)arg1;
-(void)setStartTime:(int)arg1;
-(PHAsset *)asset;
-(int)startTime;
-(BOOL)isSlomo;
-(void)setAudioEnabled:(BOOL)arg1;
-(int)maxDuration;
-(CGSize)naturalSizeWithTransform;
-(id)loadAVAsset;
-(float)sourceStartTime;
-(float)sourceDuration;
-(BOOL)audioEnabled;
-(void)loadAVPlayerItemWithCompletionHander:(/*^block*/id)arg1 progressHandler:(/*^block*/id)arg2 networkAccessAllowed:(BOOL)arg3;
-(NSArray *)multiUpContainedClips;
-(void)setMaxDuration:(int)arg1;
-(int)rawSourceDuration;

@end

