/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:22 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessageUI/MessageUI-Structs.h>
@class NSData;

@interface MFHardwareJPEGScaler : NSObject {

	IOSurfaceRef _ioSurfaceRef;
	NSData* _imageData;
	CFDictionaryRef _imageProperties;
	BOOL _canHardwareScaleImage;

}
-(void)dealloc;
-(BOOL)_isJPEGImage:(CGImageSourceRef)arg1 ;
-(BOOL)_decodeImageToIOSurface;
-(id)initWithImageData:(id)arg1 imageSource:(CGImageSourceRef)arg2 ;
-(BOOL)scaleImageToFitLargestDimension:(id)arg1 dataConsumer:(id)arg2 ;
@end

