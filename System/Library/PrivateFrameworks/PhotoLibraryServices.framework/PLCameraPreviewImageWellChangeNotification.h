/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLChangeNotification.h>

@class UIImage, NSString;

@interface PLCameraPreviewImageWellChangeNotification : PLChangeNotification {

	UIImage* _image;
	NSString* _uuid;

}

@property (nonatomic,retain,readonly) UIImage * image; 
@property (nonatomic,retain,readonly) NSString * assetUUID; 
+(id)notification;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)name;
-(id)_init;
-(id)userInfo;
-(id)object;
-(UIImage *)image;
-(NSString *)assetUUID;
@end

