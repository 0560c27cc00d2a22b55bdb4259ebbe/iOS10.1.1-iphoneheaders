/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CVML/CVML-Structs.h>
#import <CVML/CVMLDetector.h>

@class CVMLFaceBBoxAligner;

@interface CVMLFaceDetector : CVMLDetector {

	shared_ptr<vision::mod::ObjectDetector_DCNFaceDetector>* mFaceDetectorImpl;
	CVMLFaceBBoxAligner* mBBoxAlignerImpl;

}
+(BOOL)shouldDumpDebugIntermediates;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(id)processWithOptions:(id)arg1 regionOfInterest:(CGRect)arg2 warningRecorder:(id)arg3 error:(id*)arg4 ;
-(void)purgeIntermediates;
-(CVBufferRef)newCropAroundBounds:(CGRect)arg1 extendBoundsWithinImageBy:(float)arg2 fromImageBuffer:(id)arg3 error:(id*)arg4 ;
@end

