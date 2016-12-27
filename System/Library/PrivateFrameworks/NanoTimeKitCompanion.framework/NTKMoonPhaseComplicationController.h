/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NSTimer, CLLocation, NSNumber;

@interface NTKMoonPhaseComplicationController : NTKComplicationController <NTKTimeTravel> {

	NSDate* _timeTravelDate;
	struct {
		unsigned wantsPhaseName : 1;
		unsigned wantsPhaseNumber : 1;
		unsigned wantsEventAndDate : 1;
		unsigned wantsLocked : 1;
		unsigned wantsPaused : 1;
	}  _displayFlags;
	NSTimer* _afterEventTimer;
	BOOL _paused;
	BOOL _missedUpdateWhilePaused;
	NSNumber* _token;
	CLLocation* _location;

}

@property (nonatomic,retain) NSNumber * token;                                                        //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                                   //@synthesize location=_location - In the implementation block
@property (nonatomic,__weak,readonly) id<NTKMoonPhaseComplicationDisplay> legacyDisplay; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(void)_deactivate;
-(NSNumber *)token;
-(void)setToken:(NSNumber *)arg1 ;
-(void)_updateDisplay;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setShowsLockedUI:(BOOL)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(void)_configureForLegacyDisplay:(id)arg1 ;
-(void)_asyncUpdateDisplay;
-(void)_invalidateEventTimer;
-(void)_updateDisplayForced:(BOOL)arg1 ;
-(void)_afterEventTimerFired:(id)arg1 ;
-(void)_scheduleAfterEventTimer:(id)arg1 ;
@end

