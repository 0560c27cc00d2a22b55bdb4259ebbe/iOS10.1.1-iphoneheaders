/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVHeliumEffect.h>

@interface PVPanTestEffect : PVHeliumEffect
+(void)registerEffectWithID:(id)arg1 displayName:(id)arg2 ;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV14)arg1 inputs:(const PVInputHGNodeMap<unsigned int>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 renderContext:(HGRef<PVRenderContext>*)arg4 ;
-(HGRef<HGNode>*)previewHGNodeForTime:(SCD_Struct_PV14)arg1 inputHGNode:(HGRef<HGNode>*)arg2 outputSize:(CGSize)arg3 renderer:(HGRenderer*)arg4 ;
@end

