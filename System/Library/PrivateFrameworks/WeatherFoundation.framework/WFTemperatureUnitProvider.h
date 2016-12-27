/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface WFTemperatureUnitProvider : NSObject {

	NSObject*<OS_dispatch_queue> _providerQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> providerQueue;              //@synthesize providerQueue=_providerQueue - In the implementation block
@property (readonly) int userTemperatureUnit; 
-(id)init;
-(int)userTemperatureUnit;
-(NSObject*<OS_dispatch_queue>)providerQueue;
-(void)setProviderQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchTemperatureUnitWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)replaceUnit:(int)arg1 completionHandler:(/*^block*/id)arg2 ;
-(int)_providerQueue_readUnit;
-(int)_providerQueue_changeUnit:(int)arg1 ;
-(void)_postDidChangeUnitDefaultsPreference;
-(void)replaceUnit:(int)arg1 ;
@end

