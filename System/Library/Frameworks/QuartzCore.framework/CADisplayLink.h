/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay;

@interface CADisplayLink : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) CADisplay * display; 
@property (nonatomic,retain) id userInfo; 
@property (nonatomic,readonly) double minimumRefreshRate; 
@property (nonatomic,readonly) double maximumRefreshRate; 
@property (nonatomic,readonly) double heartbeatRate; 
@property (nonatomic,readonly) long long minimumFrameDuration; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) double duration; 
@property (nonatomic,readonly) double targetTimestamp; 
@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long frameInterval; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
+(id)naui_displayLinkWithWeakTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithTarget:(id)arg1 selector:(SEL)arg2 ;
+(id)displayLinkWithDisplay:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(double)minimumRefreshRate;
-(double)maximumRefreshRate;
-(double)heartbeatRate;
-(id)_initWithDisplayLinkItem:(DisplayLinkItem*)arg1 ;
-(void)dealloc;
-(double)timestamp;
-(double)duration;
-(void)invalidate;
-(id)userInfo;
-(CADisplay *)display;
-(void)addToRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)setFrameInterval:(long long)arg1 ;
-(double)targetTimestamp;
-(void)setUserInfo:(id)arg1 ;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(long long)minimumFrameDuration;
-(long long)preferredFramesPerSecond;
-(long long)frameInterval;
-(float)preferredFrameRate;
-(void)setPreferredFrameRate:(float)arg1 ;
@end

