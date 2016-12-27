/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@interface SCRCRawImage : NSObject {

	CGImageRef _imageRef;
	char* _data;
	long long _width;
	long long _height;
	long long _bytesPerPixel;

}

@property (assign,nonatomic) char* data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) long long width;                      //@synthesize width=_width - In the implementation block
@property (assign,nonatomic) long long height;                     //@synthesize height=_height - In the implementation block
@property (assign,nonatomic) long long bytesPerPixel;              //@synthesize bytesPerPixel=_bytesPerPixel - In the implementation block
@property (nonatomic,retain) CGImageRef imageRef;                  //@synthesize imageRef=_imageRef - In the implementation block
+(id)rawImageForImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(char*)data;
-(void)setData:(char*)arg1 ;
-(CGImageRef)imageRef;
-(long long)width;
-(long long)height;
-(void)setWidth:(long long)arg1 ;
-(void)setHeight:(long long)arg1 ;
-(long long)bytesPerPixel;
-(void)setBytesPerPixel:(long long)arg1 ;
-(void)setImageRef:(CGImageRef)arg1 ;
@end

