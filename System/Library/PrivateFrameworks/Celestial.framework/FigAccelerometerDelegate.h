/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Celestial/Celestial-Structs.h>
#import <libobjc.A.dylib/SBSAccelerometerDelegate.h>

@class SBSAccelerometer, NSString;

@interface FigAccelerometerDelegate : NSObject <SBSAccelerometerDelegate> {

	SBSAccelerometer* sbsaccel;
	opaque_pthread_mutex_t ringMutex;
	int ringIndex;
	float ringX[64];
	float ringY[64];
	float ringZ[64];
	double ringTime[64];

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)accelerometer:(id)arg1 didAccelerateWithTimeStamp:(double)arg2 x:(float)arg3 y:(float)arg4 z:(float)arg5 eventType:(int)arg6 ;
-(void)deferOnRunloop_accelerometerEventsEnable;
-(void)getVectorX:(float*)arg1 y:(float*)arg2 z:(float*)arg3 forTimeStamp:(double)arg4 ;
@end

