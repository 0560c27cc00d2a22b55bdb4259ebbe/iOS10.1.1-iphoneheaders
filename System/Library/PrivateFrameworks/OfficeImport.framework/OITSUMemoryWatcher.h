/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OITSUFlushingManager;

@interface OITSUMemoryWatcher : NSObject {

	OITSUFlushingManager* _flushingManager;
	BOOL _going;
	BOOL _stop;

}
-(void)dealloc;
-(void)beginObserving;
-(id)initWithFlushingManager:(id)arg1 ;
-(void)stopObserving;
-(void)_periodicallySimulateMemoryWarning:(id)arg1 ;
-(void)_simulateMemoryWarning:(id)arg1 ;
@end

