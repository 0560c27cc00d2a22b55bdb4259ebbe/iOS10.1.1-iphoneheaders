/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSThread;

@interface SBSetupWiFiScanner : NSObject {

	WiFiManagerClientRef _wifiManager;
	WiFiDeviceClientRef _wifiDevice;
	NSThread* _scanningThread;
	/*^block*/id _completionHandler;
	long long _state;

}

@property (setter=_setScanningThread:,getter=_scanningThread,retain) NSThread * scanningThread;              //@synthesize scanningThread=_scanningThread - In the implementation block
@property (setter=_setCompletionHandler:,getter=_completionHandler,copy) id completionHandler;               //@synthesize completionHandler=_completionHandler - In the implementation block
@property (assign,setter=_setState:,getter=_state,nonatomic) long long state;                                //@synthesize state=_state - In the implementation block
-(void)beginScanningWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_thread_closeWifiConnection;
-(void)_wifiScanningThread;
-(void)_setScanningThread:(id)arg1 ;
-(void)_thread_callCompletionHandlerWithGuessedCountries:(id)arg1 ;
-(id)_scanningThread;
-(void)_thread_cancelScanning;
-(void)_thread_wifiScanComplete:(CFArrayRef)arg1 error:(BOOL)arg2 ;
-(void)cancel;
-(void)dealloc;
-(/*^block*/id)_completionHandler;
-(void)_setCompletionHandler:(/*^block*/id)arg1 ;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
@end

