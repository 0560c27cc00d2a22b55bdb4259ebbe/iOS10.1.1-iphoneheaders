/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQUProgressiveHelper : NSObject {

	const void* mClient;
	SCD_Struct_GQ20* mCallBacks;
	unsigned char started;
	CFStringRef mNumbersSheetUri;
	float mPreviewHeight;
	float mPreviewWidth;
	BOOL mStartedMainHTML;

}
-(void)closeAttachment:(CFURLRef)arg1 ;
-(void)appendDataToAttachment:(CFURLRef)arg1 chunk:(CFDataRef)arg2 ;
-(void)setPreviewHeight:(float)arg1 andWidth:(float)arg2 ;
-(void)startDataWithOptions:(CFDictionaryRef)arg1 ;
-(CFURLRef)createAttachment:(CFStringRef)arg1 options:(CFDictionaryRef)arg2 ;
-(void)setNumbersSheetUri:(CFStringRef)arg1 ;
-(id)initWithClient:(const void*)arg1 andCallbacks:(SCD_Struct_GQ20*)arg2 ;
-(BOOL)progressiveStreamStarted;
-(BOOL)previewHasStreamedMainHTML;
-(CFStringRef)getNumbersSheetUri;
-(float)getPreviewWidth;
-(float)getPreviewHeight;
-(void)displayGenericError:(CFErrorRef)arg1 ;
-(void)dealloc;
@end

