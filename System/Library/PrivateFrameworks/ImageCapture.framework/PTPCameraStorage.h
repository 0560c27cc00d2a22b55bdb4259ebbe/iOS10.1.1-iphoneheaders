/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ImageCapture/PTPCameraFolder.h>

@class NSMutableArray;

@interface PTPCameraStorage : PTPCameraFolder {

	NSMutableArray* _tempArrayOfAllObjectHandles;
	NSMutableArray* _tempArrayOfAllObjectHandlesToBeIgnored;

}
-(void)dealloc;
-(id)tempArrayOfAllObjectHandles;
-(id)tempArrayOfAllObjectHandlesToBeIgnored;
-(void)refreshInfo;
-(id)initWithStorageID:(unsigned)arg1 device:(id)arg2 ;
-(void)prime;
@end

