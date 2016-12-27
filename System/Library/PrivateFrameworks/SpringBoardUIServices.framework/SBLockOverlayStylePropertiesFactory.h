/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {

	NSMutableDictionary* _deviceQualityToProperties;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1 ;
-(unsigned long long)style;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)propertiesWithGraphicsQuality:(long long)arg1 ;
-(id)_fetchAndCachePropsForDeviceQuality:(long long)arg1 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
@end

