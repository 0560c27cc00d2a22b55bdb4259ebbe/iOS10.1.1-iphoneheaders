/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:00 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface AVCaptureDeviceDiscoverySession : NSObject {

	NSArray* _deviceTypes;
	long long* _position;
	NSString* _mediaType;
	NSArray* _devices;

}

@property (nonatomic,readonly) NSArray * devices;              //@synthesize devices=_devices - In the implementation block
+(id)discoverySessionWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)_initWithDeviceTypes:(id)arg1 mediaType:(id)arg2 position:(long long)arg3 ;
-(NSArray *)devices;
@end

