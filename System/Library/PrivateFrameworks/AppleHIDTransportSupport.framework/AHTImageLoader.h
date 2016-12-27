/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AHTBootLoader;

@interface AHTImageLoader : NSObject {

	AHTBootLoader* _bootloader;

}

@property (nonatomic,readonly) AHTBootLoader * bootloader;              //@synthesize bootloader=_bootloader - In the implementation block
+(id)withBootLoader:(id)arg1 ;
-(id)initWithBootLoader:(id)arg1 ;
-(BOOL)checkIM4PFile:(id)arg1 ;
-(id)findImageInDirectory:(id)arg1 error:(id*)arg2 ;
-(BOOL)loadImageFromFile:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)updatePropertyFromFile:(id)arg1 filePath:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4 ;
-(AHTBootLoader *)bootloader;
@end

