/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVMetadataObject.h>

@class AVMetadataMachineReadableCodeObjectInternal, NSArray, NSString;

@interface AVMetadataMachineReadableCodeObject : AVMetadataObject {

	AVMetadataMachineReadableCodeObjectInternal* _internal;

}

@property (readonly) NSArray * corners; 
@property (readonly) NSString * stringValue; 
+(id)machineReadableCodeObjectWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
-(void)dealloc;
-(id)description;
-(NSString *)stringValue;
-(NSArray *)corners;
-(id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(CGAffineTransform)arg2 isVideoMirrored:(BOOL)arg3 rollAdjustment:(double)arg4 ;
-(id)initWithFigEmbeddedCaptureDeviceMachineReadableCodeDictionary:(id)arg1 input:(id)arg2 ;
@end
