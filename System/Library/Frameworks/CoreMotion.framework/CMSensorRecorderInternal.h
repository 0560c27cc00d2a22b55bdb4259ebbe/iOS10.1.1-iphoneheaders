/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <CoreMotion/CoreMotion-Structs.h>
@class NSObject;

@interface CMSensorRecorderInternal : NSObject {

	NSObject*<OS_dispatch_queue> fInternalQueue;
	NSObject*<OS_dispatch_source> fWatchdogTimer;
	CLConnectionClient* fLocationdConnection;

}
-(id)init;
-(void)dealloc;
-(void)teardown;
-(void)_startWatchdogCheckins;
-(void)_stopWatchdogCheckins;
-(id)newAccelMetaSinceID:(unsigned long long)arg1 ;
-(id)newAccelMetaFrom:(double)arg1 to:(double)arg2 ;
-(id)newAccelMetaByID:(unsigned long long)arg1 ;
-(id)newAccelDataByID:(unsigned long long)arg1 metaID:(unsigned long long)arg2 ;
-(id)_newAccelMetaUsingMessage:(const char*)arg1 withIdentifier:(unsigned long long)arg2 ;
@end

