/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKRoadSignArtwork : NSObject {

	CTLineRef _line;
	RoadSignMetrics _signMetrics;
	RoadSignTextMetrics _textMetrics;
	RoadSignGeneratedMetrics _generatedMetrics;
	RoadSignColoring _signColoring;

}
-(void)dealloc;
-(id)image;
-(Matrix<float, 2, 1>)offsetPixelForPixel:(Matrix<float, 2, 1>)arg1 ;
-(id)initWithString:(id)arg1 signMetrics:(RoadSignMetrics)arg2 textMetrics:(RoadSignTextMetrics)arg3 signColoring:(RoadSignColoring)arg4 ;
-(Box<float, 2>)localRenderBounds;
-(Box<float, 2>)localCollisionBounds;
@end

