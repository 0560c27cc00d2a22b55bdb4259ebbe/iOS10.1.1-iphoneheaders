/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <QuartzCore/QuartzCore-Structs.h>
@class CADisplay, NSString;

@interface CADisplayMode : NSObject {

	Mode _mode;
	CADisplay* _dpy;
	unsigned long long _width;
	unsigned long long _height;

}

@property (nonatomic,readonly) unsigned long long width; 
@property (nonatomic,readonly) unsigned long long height; 
@property (nonatomic,readonly) double pixelAspectRatio; 
@property (nonatomic,readonly) double refreshRate; 
@property (nonatomic,readonly) BOOL isVirtual; 
@property (nonatomic,copy,readonly) NSString * colorMode; 
+(id)_displayModeWithMode:(Mode)arg1 display:(id)arg2 ;
-(BOOL)isVirtual;
-(NSString *)colorMode;
-(id)_initWithMode:(Mode)arg1 display:(id)arg2 ;
-(void)_setWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)_display;
-(unsigned long long)width;
-(unsigned long long)height;
-(double)refreshRate;
-(double)pixelAspectRatio;
-(Mode)_mode;
@end

