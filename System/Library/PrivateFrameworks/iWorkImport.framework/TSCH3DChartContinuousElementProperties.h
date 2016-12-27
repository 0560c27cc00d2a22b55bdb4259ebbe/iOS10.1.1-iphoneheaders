/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties {

	float mDepthGapFactor;
	float mDepthLimitFactor;
	float mShadowCameraDepthLimitAdjustmentFactor;
	unsigned long long mMaxLimitingSeries;

}

@property (nonatomic,readonly) float p_sageInterSetDepthGapProperty; 
@property (nonatomic,readonly) long long seriesCount; 
@property (nonatomic,readonly) float depthLimitFactor; 
@property (nonatomic,readonly) float shadowCameraDepthLimitAdjustmentFactor; 
-(BOOL)applyElementTransform:(ObjectTransforms*)arg1 series:(id)arg2 index:(const tvec2<int>*)arg3 propertyAccessor:(const ChartScenePropertyAccessor*)arg4 ;
-(float)chartMinZForScene:(id)arg1 ;
-(float)depthForScene:(id)arg1 ;
-(float)p_sageInterSetDepthGapProperty;
-(void)resetWithEnumerator:(id)arg1 layoutSettings:(SCD_Struct_TS478)arg2 ;
-(float)p_depthLimitedChartInitialDepthOffset;
-(float)p_interSetDepthGapProperty;
-(tvec2<int>)seriesSize;
-(float)depthLimitFactor;
-(float)shadowCameraDepthLimitAdjustmentFactor;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)updateLabels;
-(long long)seriesCount;
@end

