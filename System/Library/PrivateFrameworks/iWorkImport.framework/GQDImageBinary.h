/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface GQDImageBinary : NSObject {

	CGSize mSize;
	CFStringRef mPath;
	CFURLRef mAbsoluteUrl;
	int mResourceType;

}
-(int)readDataAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFURLRef)createAbsoluteUrlForState:(id)arg1 ;
-(CGSize)size;
-(void)dealloc;
-(int)resourceType;
-(CFStringRef)relativePath;
@end

