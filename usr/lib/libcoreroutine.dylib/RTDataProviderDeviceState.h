/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libcoreroutine.dylib/RTDataProviderDuet.h>

@interface RTDataProviderDeviceState : RTDataProviderDuet
+(id)sharedInstance;
+(id)providerName;
-(void)internalAddObserver:(id)arg1 name:(id)arg2 ;
-(void)internalRemoveObserver:(id)arg1 name:(id)arg2 ;
-(id)supportedEventClasses;
-(id)initWithName:(id)arg1 purgeManager:(id)arg2 ;
-(id)supportedEventStreams;
-(void)populateDataProviderWithHandler:(/*^block*/id)arg1 ;
@end
