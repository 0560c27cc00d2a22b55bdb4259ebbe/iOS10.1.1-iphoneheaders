/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ThermalMonitor/ThermalMonitor-Structs.h>
#import <ThermalMonitor/tGraphDataSource.h>

@interface CameraTS : NSObject <tGraphDataSource> {

	BOOL _rearCamAutoFocusState;
	BOOL _rearCameraAutoFocusState;
	int _torchState;
	int _rearCameraSensorIdx;
	int _frontCameraSensorIdx;
	int _rearCameraTeleSensorIdx;
	int _torchStateToken;
	int _rearCameraAutoFocusStateToken;
	int _rearCameraStateToken;
	int _rearCameraTemperatureToken;
	int _frontCameraStateToken;
	int _frontCameraTemperatureToken;
	int _rearCameraTeleStateToken;
	int _rearCameraTeleTemperatureToken;

}

@property (assign,nonatomic) int torchState;                                  //@synthesize torchState=_torchState - In the implementation block
@property (assign,nonatomic) BOOL rearCameraAutoFocusState;                   //@synthesize rearCameraAutoFocusState=_rearCameraAutoFocusState - In the implementation block
@property (assign,nonatomic) int rearCameraSensorIdx;                         //@synthesize rearCameraSensorIdx=_rearCameraSensorIdx - In the implementation block
@property (assign,nonatomic) int frontCameraSensorIdx;                        //@synthesize frontCameraSensorIdx=_frontCameraSensorIdx - In the implementation block
@property (assign,nonatomic) int rearCameraTeleSensorIdx;                     //@synthesize rearCameraTeleSensorIdx=_rearCameraTeleSensorIdx - In the implementation block
@property (assign,nonatomic) int torchStateToken;                             //@synthesize torchStateToken=_torchStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraAutoFocusStateToken;               //@synthesize rearCameraAutoFocusStateToken=_rearCameraAutoFocusStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraStateToken;                        //@synthesize rearCameraStateToken=_rearCameraStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraTemperatureToken;                  //@synthesize rearCameraTemperatureToken=_rearCameraTemperatureToken - In the implementation block
@property (assign,nonatomic) int frontCameraStateToken;                       //@synthesize frontCameraStateToken=_frontCameraStateToken - In the implementation block
@property (assign,nonatomic) int frontCameraTemperatureToken;                 //@synthesize frontCameraTemperatureToken=_frontCameraTemperatureToken - In the implementation block
@property (assign,nonatomic) int rearCameraTeleStateToken;                    //@synthesize rearCameraTeleStateToken=_rearCameraTeleStateToken - In the implementation block
@property (assign,nonatomic) int rearCameraTeleTemperatureToken;              //@synthesize rearCameraTeleTemperatureToken=_rearCameraTeleTemperatureToken - In the implementation block
@property (nonatomic,readonly) BOOL rearCamAutoFocusState;                    //@synthesize rearCamAutoFocusState=_rearCamAutoFocusState - In the implementation block
-(void)enableAutoFocusNotifications;
-(int)rearCameraTeleTemperatureToken;
-(int)rearCameraTeleSensorIdx;
-(void)setRearCameraAutoFocusState:(BOOL)arg1 ;
-(int)rearCameraAutoFocusStateToken;
-(int)frontCameraTemperatureToken;
-(void)setFrontCameraStateToken:(int)arg1 ;
-(void)setRearCameraTemperatureToken:(int)arg1 ;
-(void)setFrontCameraSensorIdx:(int)arg1 ;
-(void)setRearCameraStateToken:(int)arg1 ;
-(int)frontCameraSensorIdx;
-(int)rearCameraTemperatureToken;
-(int)frontCameraStateToken;
-(int)rearCameraTeleStateToken;
-(void)updateSensor:(int)arg1 temperature:(unsigned long long)arg2 ;
-(int)rearCameraStateToken;
-(int)rearCameraSensorIdx;
-(BOOL)rearCamAutoFocusState;
-(void)setRearCameraTeleSensorIdx:(int)arg1 ;
-(int)torchStateToken;
-(void)setTorchState:(int)arg1 ;
-(CFStringRef)copyFieldCurrentValueForIndex:(int)arg1 ;
-(CFStringRef)copyHeaderForIndex:(int)arg1 ;
-(int)numberOfFields;
-(id)initWithFrontCameraSensorIdx:(int)arg1 rearCameraSensorIdx:(int)arg2 ;
-(void)enableRearCameraTeleNotifications:(int)arg1 ;
-(void)handleStateChangeNotification:(int)arg1 temperatureSensorIndex:(int)arg2 ;
-(void)handleTemperatureChangeNotification:(int)arg1 temperatureSensorIndex:(int)arg2 ;
-(void)setRearCameraTeleTemperatureToken:(int)arg1 ;
-(void)setRearCameraAutoFocusStateToken:(int)arg1 ;
-(void)setTorchStateToken:(int)arg1 ;
-(void)setRearCameraSensorIdx:(int)arg1 ;
-(void)setFrontCameraTemperatureToken:(int)arg1 ;
-(BOOL)rearCameraAutoFocusState;
-(void)setRearCameraTeleStateToken:(int)arg1 ;
-(void)dealloc;
-(int)torchState;
@end

