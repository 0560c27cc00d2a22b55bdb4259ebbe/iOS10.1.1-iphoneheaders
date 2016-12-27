/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, NSDictionary;


@protocol MiroBlueprintEditStyleProtocol <NSObject>
@property (nonatomic,readonly) NSArray * burstStyleNames; 
@property (nonatomic,readonly) NSDictionary * healingEditTransitionDictionary; 
@property (nonatomic,readonly) NSArray * transitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionsAsDictionaries; 
@property (nonatomic,readonly) NSArray * multiUpTransitionDictionaries; 
@property (nonatomic,readonly) double maxZoomLevel; 
@property (nonatomic,readonly) BOOL extremeZoomAllowed; 
@property (nonatomic,readonly) NSArray * allowedCropTreatments; 
@property (nonatomic,readonly) BOOL defaultCameraMotionIsPan; 
@property (nonatomic,readonly) BOOL sweepingPansAllowed; 
@property (nonatomic,readonly) BOOL centerOnFrame; 
@property (nonatomic,readonly) double hardCutPercentage; 
@property (nonatomic,readonly) double kenBurnsAnyStillPercentage; 
@required
-(double)maxZoomLevel;
-(NSArray *)transitionsAsDictionaries;
-(NSArray *)multiUpTransitionsAsDictionaries;
-(BOOL)centerOnFrame;
-(NSArray *)allowedCropTreatments;
-(BOOL)defaultCameraMotionIsPan;
-(double)kenBurnsAnyStillPercentage;
-(BOOL)sweepingPansAllowed;
-(NSDictionary *)healingEditTransitionDictionary;
-(double)hardCutPercentage;
-(NSArray *)multiUpTransitionDictionaries;
-(NSArray *)burstStyleNames;
-(BOOL)extremeZoomAllowed;

@end

