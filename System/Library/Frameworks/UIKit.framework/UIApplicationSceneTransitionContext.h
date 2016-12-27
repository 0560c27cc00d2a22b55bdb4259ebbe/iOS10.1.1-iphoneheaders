/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:13 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FBSSceneTransitionContext.h>

@class NSDictionary;

@interface UIApplicationSceneTransitionContext : FBSSceneTransitionContext

@property (assign,nonatomic) double watchdogScaleFactor; 
@property (assign,nonatomic) double watchdogExtension; 
@property (assign,nonatomic) BOOL allowCPUThrottling; 
@property (assign,nonatomic) BOOL runWatchdogIndependently; 
@property (assign,nonatomic) long long watchdogPolicy; 
@property (assign,setter=_setLifecycleActionType:,getter=_lifecycleActionType,nonatomic) unsigned long long lifecycleActionType; 
@property (nonatomic,retain) NSDictionary * payload; 
@property (assign,nonatomic) BOOL forTesting; 
@property (assign,nonatomic) BOOL safeMode; 
@property (assign,nonatomic) double userLaunchEventTime; 
@property (assign,nonatomic) double execTime; 
@property (assign,nonatomic) BOOL shouldTakeKeyboardFocus; 
@property (assign,nonatomic) BOOL waitForBackgroundTaskCompletion; 
-(double)watchdogExtension;
-(double)watchdogScaleFactor;
-(void)setWatchdogExtension:(double)arg1 ;
-(void)setWatchdogScaleFactor:(double)arg1 ;
-(long long)watchdogPolicy;
-(void)setWatchdogPolicy:(long long)arg1 ;
-(BOOL)runWatchdogIndependently;
-(BOOL)allowCPUThrottling;
-(void)setAllowCPUThrottling:(BOOL)arg1 ;
-(void)setRunWatchdogIndependently:(BOOL)arg1 ;
-(BOOL)isUISubclass;
-(NSDictionary *)payload;
-(void)_setLifecycleActionType:(unsigned long long)arg1 ;
-(unsigned long long)_lifecycleActionType;
-(BOOL)waitForBackgroundTaskCompletion;
-(BOOL)shouldTakeKeyboardFocus;
-(BOOL)forTesting;
-(double)userLaunchEventTime;
-(double)execTime;
-(BOOL)safeMode;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setForTesting:(BOOL)arg1 ;
-(void)setSafeMode:(BOOL)arg1 ;
-(void)setUserLaunchEventTime:(double)arg1 ;
-(void)setExecTime:(double)arg1 ;
-(void)setShouldTakeKeyboardFocus:(BOOL)arg1 ;
-(void)setWaitForBackgroundTaskCompletion:(BOOL)arg1 ;
@end

