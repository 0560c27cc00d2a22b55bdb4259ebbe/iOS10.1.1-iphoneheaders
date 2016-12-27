/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/PVInstructionGraphSourceNode.h>

@interface PVInstructionGraphSourceTrackNode : PVInstructionGraphSourceNode {

	int _trackID;
	CGSize _clipNaturalSize;
	CGRect _cropRect;

}

@property (assign,nonatomic) int trackID;                         //@synthesize trackID=_trackID - In the implementation block
@property (assign,nonatomic) CGRect cropRect;                     //@synthesize cropRect=_cropRect - In the implementation block
@property (assign,nonatomic) CGSize clipNaturalSize;              //@synthesize clipNaturalSize=_clipNaturalSize - In the implementation block
+(id)newSourceTrackNode:(int)arg1 transform:(CGAffineTransform)arg2 cropRect:(CGRect)arg3 clipNaturalSize:(CGSize)arg4 ;
-(int)trackID;
-(CGRect)cropRect;
-(void)setCropRect:(CGRect)arg1 ;
-(BOOL)isPassthru;
-(HGRef<HGNode>*)hgNodeForTime:(SCD_Struct_PV14)arg1 trackInputs:(const PVInputHGNodeMap<int>*)arg2 renderer:(const HGRef<HGRenderer>Ref)arg3 renderContext:(HGRef<PVRenderContext>*)arg4 ;
-(PCRect<double>)inputSizeForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(PCMatrix44Tmpl<double>)pixelTransformForPVEffect:(id)arg1 renderContext:(HGRef<PVRenderContext>*)arg2 ;
-(id)instructionGraphNodeDescription;
-(BOOL)isPortrait;
-(void)setTrackID:(int)arg1 ;
-(CGSize)clipNaturalSize;
-(void)setClipNaturalSize:(CGSize)arg1 ;
-(id)requiredSourceTrackIDs;
@end
