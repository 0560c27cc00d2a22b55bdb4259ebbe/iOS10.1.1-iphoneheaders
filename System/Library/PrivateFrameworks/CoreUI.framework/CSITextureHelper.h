/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CSITextureHelper : NSObject {

	csibitmap* bmp;
	CGColorSpaceRef colorspaceHint;
	unsigned long long sourceRowbytes;
	unsigned width;
	unsigned height;
	unsigned imageBytes;
	int pixelFormat;

}
-(BOOL)expandIntoBuffer:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

