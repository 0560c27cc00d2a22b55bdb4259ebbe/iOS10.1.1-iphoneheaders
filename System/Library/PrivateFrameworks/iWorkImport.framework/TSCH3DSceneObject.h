/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCH3DSceneObject : NSObject
+(void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3 ;
+(id)sceneObject;
+(double)textRotationForChartInfo:(id)arg1 ;
+(id)renderCacheKey;
-(float)shadowCameraDepthLimitAdjustmentFactorForScene:(id)arg1 ;
-(id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3 ;
-(id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2 ;
-(BOOL)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(BOOL)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2 ;
-(id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2 ;
-(void)getBounds:(id)arg1 ;
-(void)postrender:(id)arg1 ;
-(void)primeRenderCaches:(id)arg1 ;
-(void)postGetBounds:(id)arg1 ;
-(void)rayPick:(id)arg1 ;
-(void)getSelectionKnobsPositions:(id)arg1 ;
-(void)getSceneObjectElementsBounds:(id)arg1 ;
-(Class)chartBoundsLayoutSceneDelegateClass;
-(EdgeDetectionParameters)edgeDetectionParameters;
-(void)prerender:(id)arg1 ;
-(void)statePreservedPrerender:(id)arg1 ;
-(void)statePreservedRender:(id)arg1 ;
-(void)statePreservedPostrender:(id)arg1 ;
-(void)statePreservedRayPick:(id)arg1 ;
-(void)statePreservedPrimeRenderCaches:(id)arg1 ;
-(void)statePreservedGetSelectionKnobsPositions:(id)arg1 ;
-(void)statePreservedGetSceneObjectElementsBounds:(id)arg1 ;
-(void)render:(id)arg1 ;
@end

