/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:54:30 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/CoreIndoor.framework/CoreIndoor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreIndoor/CLIndoorXPCProvider.h>
#import <libobjc.A.dylib/CLIndoorXPCProviderImplementation.h>

@class ServiceState, NSString;

@interface CLIndoorPositionProvider : CLIndoorXPCProvider <CLIndoorXPCProviderImplementation> {

	ServiceState* _state;

}

@property (nonatomic,retain) ServiceState * state;                  //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)locationType:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(ServiceState *)state;
-(void)setState:(ServiceState *)arg1 ;
-(void)startUpdatingLocation;
-(void)stopUpdatingLocation;
-(id)endpointName;
-(id)initWithConnection:(id)arg1 ;
-(void)withinQueueInvalidateState;
-(id)remoteObjectProtocol;
-(void)withinQueueReconnectInvalidatedConnectionFailed:(id)arg1 ;
-(id)withinQueuePermanentShutdownReason;
-(BOOL)withinQueueCanReinitializeRemoteState;
-(void)withinQueueReinitializeRemoteState;
-(void)setApiKey:(id)arg1 ;
-(void)setApiKey:(id)arg1 onServer:(id)arg2 ;
-(void)playbackDatarun:(id)arg1 ;
-(void)outdoorLocationAvailable:(id)arg1 ;
-(void)gpsEstimateAvailable:(id)arg1 ;
-(void)gpsSignalQualityAvailable:(id)arg1 ;
-(void)withinQueueSetDelegate:(id)arg1 ;
-(void)setVenues:(id)arg1 ;
-(void)changeOrSetVenues:(id)arg1 isChange:(BOOL)arg2 ;
-(id)initWithApiKey:(id)arg1 ;
-(id)initWithApiKey:(id)arg1 onServer:(id)arg2 ;
-(void)changeVenues:(id)arg1 ;
@end

