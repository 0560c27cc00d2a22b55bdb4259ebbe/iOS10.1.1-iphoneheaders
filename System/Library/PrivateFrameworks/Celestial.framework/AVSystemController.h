/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Celestial/Celestial-Structs.h>
@interface AVSystemController : NSObject {

	AVSystemControllerPrivate* _priv;

}
+(void)initialize;
+(id)sharedAVSystemController;
-(id)init;
-(void)dealloc;
-(BOOL)setAttribute:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(BOOL)okToNotifyFromThisThread;
-(void)makeError:(id*)arg1 withDescription:(id)arg2 code:(int)arg3 ;
-(BOOL)setPickedRouteWithPassword:(id)arg1 withPassword:(id)arg2 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 fallbackCategory:(id)arg2 resultVolume:(float*)arg3 affectedCategory:(id*)arg4 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 fallbackCategory:(id)arg3 ;
-(BOOL)setVibeIntensityTo:(float)arg1 ;
-(BOOL)getVibeIntensity:(float*)arg1 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 ;
-(BOOL)changeActiveCategoryVolumeBy:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)setActiveCategoryVolumeTo:(float)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 forRoute:(id)arg3 andDeviceIdentifier:(id)arg4 ;
-(BOOL)changeVolumeForAccessoryBy:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4 ;
-(BOOL)setVolumeForAccessoryTo:(float)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4 ;
-(BOOL)getVolumeForAccessory:(float*)arg1 forCategory:(id)arg2 accessoryRoute:(id)arg3 andAccessoryDeviceIdentifier:(id)arg4 ;
-(BOOL)toggleActiveCategoryMuted;
-(BOOL)toggleActiveCategoryMutedForRoute:(id)arg1 andDeviceIdentifier:(id)arg2 ;
-(BOOL)getActiveCategoryMuted:(BOOL*)arg1 ;
-(BOOL)getActiveCategoryMuted:(BOOL*)arg1 forRoute:(id)arg2 andDeviceIdentifier:(id)arg3 ;
-(BOOL)changeVolumeBy:(float)arg1 forCategory:(id)arg2 ;
-(BOOL)setBTHFPRoute:(id)arg1 availableForVoicePrompts:(BOOL)arg2 ;
-(BOOL)willStartRoutePicking:(id)arg1 ;
-(BOOL)getPortDiscoveryEnabled;
-(BOOL)enablePortDiscovery:(BOOL)arg1 ;
-(id)routeForCategory:(id)arg1 ;
-(id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2 ;
-(id)pickableRoutesForCategory:(id)arg1 ;
-(BOOL)currentRouteHasVolumeControl;
-(void)handleServerDied;
-(void)postFullMuteDidChangeNotification:(void*)arg1 ;
-(void)postEffectiveVolumeNotification:(void*)arg1 ;
-(BOOL)allowUserToExceedEUVolumeLimit;
-(id)volumeCategoryForAudioCategory:(id)arg1 ;
-(BOOL)getVolume:(float*)arg1 forCategory:(id)arg2 ;
-(BOOL)setVolumeTo:(float)arg1 forCategory:(id)arg2 ;
-(BOOL)didCancelRoutePicking:(id)arg1 ;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)getActiveCategoryVolume:(float*)arg1 andName:(id*)arg2 ;
@end

