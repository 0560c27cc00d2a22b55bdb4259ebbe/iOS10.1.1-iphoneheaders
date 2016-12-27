/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:17 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartAllSceneObjectDelegate.h>

@class TSCH3DSceneObject, NSString;

@interface TSCH3DRayPickPipelineDelegate : NSObject <TSCH3DChartAllSceneObjectDelegate> {

	TSCH3DSceneObject* mCurrentSceneObject;
	tvec2<int> mCurrentElement;

}

@property (nonatomic,retain) TSCH3DSceneObject * currentSceneObject; 
@property (assign,nonatomic) tvec2<int> currentElement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)willSubmitLabelType:(int)arg1 boundsIndex:(long long)arg2 alignment:(unsigned long long)arg3 elementIndex:(unsigned long long)arg4 forSceneObject:(id)arg5 ;
-(void)setOffset:(const tvec3<float>*)arg1 labelType:(int)arg2 boundsIndex:(long long)arg3 forSceneObject:(id)arg4 ;
-(void)didGenerateShaderEffects:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)didSubmitSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)labelsResourcesSessionWillBeginForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(void)labelsResourcesSessionWillEndForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(BOOL)willSubmitLabelForSceneObject:(id)arg1 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfoRef)arg2 ;
-(void)updateExternalLabelAttribute:(ExternalLabelAttributeRef)arg1 sceneObject:(id)arg2 labelRenderInfo:(const ChartLabelsContainingLabelRenderInfoRef)arg3 ;
-(BOOL)willBeginProcessingSceneObject:(id)arg1 ;
-(void)didEndProcessingSceneObject:(id)arg1 ;
-(BOOL)renderPassDelayDisallowedForSceneObject:(id)arg1 pipeline:(id)arg2 ;
-(ElementRenderPass)renderPassForSceneObject:(id)arg1 ;
-(BOOL)willProcessSeries:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didGenerateShaderEffectsForSeriesAtIndex:(const tvec2<int>*)arg1 effects:(id)arg2 sceneObject:(id)arg3 pipeline:(id)arg4 ;
-(BOOL)willProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(void)didProcessElements:(id)arg1 sceneObject:(id)arg2 pipeline:(id)arg3 ;
-(BOOL)willProcessElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(ElementRenderPass)renderPassForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willUpdateElementEffectsStatesForElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(void)didTransformElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willRenderElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(BOOL)willSubmitElement:(const RenderElementInfo*)arg1 sceneObject:(id)arg2 ;
-(TSCH3DSceneObject *)currentSceneObject;
-(tvec2<int>)currentElement;
-(void)setCurrentSceneObject:(TSCH3DSceneObject *)arg1 ;
-(void)setCurrentElement:(tvec2<int>)arg1 ;
-(void)dealloc;
@end

