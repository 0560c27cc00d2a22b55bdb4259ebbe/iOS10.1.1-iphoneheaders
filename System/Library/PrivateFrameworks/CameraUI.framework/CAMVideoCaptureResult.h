/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CameraUI/CameraUI-Structs.h>
@class NSURL, NSArray, NSDate, NSError;

@interface CAMVideoCaptureResult : NSObject {

	NSURL* _localDestinationURL;
	NSURL* _filteredLocalDestinationURL;
	NSArray* _metadata;
	double _videoZoomFactor;
	long long _reason;
	IOSurfaceRef _videoPreviewSurface;
	NSDate* _captureDate;
	NSError* _error;
	SCD_Struct_CA2 _duration;
	SCD_Struct_CA2 _stillDisplayTime;

}

@property (nonatomic,readonly) NSURL * localDestinationURL;                      //@synthesize localDestinationURL=_localDestinationURL - In the implementation block
@property (nonatomic,readonly) NSURL * filteredLocalDestinationURL;              //@synthesize filteredLocalDestinationURL=_filteredLocalDestinationURL - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 duration;                          //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) SCD_Struct_CA2 stillDisplayTime;                  //@synthesize stillDisplayTime=_stillDisplayTime - In the implementation block
@property (nonatomic,copy,readonly) NSArray * metadata;                          //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,readonly) double videoZoomFactor;                           //@synthesize videoZoomFactor=_videoZoomFactor - In the implementation block
@property (nonatomic,readonly) long long reason;                                 //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) IOSurfaceRef videoPreviewSurface;                 //@synthesize videoPreviewSurface=_videoPreviewSurface - In the implementation block
@property (nonatomic,readonly) NSDate * captureDate;                             //@synthesize captureDate=_captureDate - In the implementation block
@property (nonatomic,readonly) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(SCD_Struct_CA2)duration;
-(long long)reason;
-(NSArray *)metadata;
-(NSDate *)captureDate;
-(NSError *)error;
-(SCD_Struct_CA2)stillDisplayTime;
-(NSURL *)localDestinationURL;
-(double)videoZoomFactor;
-(NSURL *)filteredLocalDestinationURL;
-(id)initWithURL:(id)arg1 filteredLocalDestinationURL:(id)arg2 duration:(SCD_Struct_CA2)arg3 stillDisplayTime:(SCD_Struct_CA2)arg4 metadata:(id)arg5 videoZoomFactor:(double)arg6 reason:(long long)arg7 videoPreviewSurface:(void*)arg8 error:(id)arg9 ;
-(IOSurfaceRef)videoPreviewSurface;
@end

