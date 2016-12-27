/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VideoProcessing/VideoProcessing-Structs.h>
@class VCPCNNModel, VCPCNNData;

@interface VCPCNNPoseEstimator : NSObject {

	VCPCNNModel* _model;
	VCPCNNData* _input;

}
-(id)init;
-(int)detectPoseForFace:(CGRect)arg1 inBuffer:(CVBufferRef)arg2 yaw:(long long*)arg3 ;
@end

