/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface TSDGLCurvedShadowCurveFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputSampleExtent;
	NSNumber* inputCurveAmount;
	NSNumber* inputPadding;

}
+(id)curveKernel;
@end

