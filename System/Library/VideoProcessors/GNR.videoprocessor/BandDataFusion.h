/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/VideoProcessors/GNR.videoprocessor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GNR.videoprocessor/GNR.videoprocessor-Structs.h>
@interface BandDataFusion : NSObject {

	SCD_Struct_Ba10* sharpening;
	SCD_Struct_Ba10* adaptive_blur;
	SCD_Struct_Ba10* diff_weight;
	SCD_Struct_Ba10* luma_fusion_strength;
	SCD_Struct_Ba10* chroma_fusion_strength;
	SCD_Struct_Ba10* black_threshold;

}
-(void)dealloc;
@end

