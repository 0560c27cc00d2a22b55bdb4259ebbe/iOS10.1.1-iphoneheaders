/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKComplicationController.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NSDate, NTKWorldClockComplication;

@interface NTKWorldClockComplicationController : NTKComplicationController <NTKTimeTravel> {

	struct {
		unsigned wantsShortCity : 1;
		unsigned wantsLongCity : 1;
	}  _displayFlags;
	NSDate* _timeTravelDate;

}

@property (nonatomic,__weak,readonly) id<NTKWorldClockComplicationDisplay> legacyDisplay; 
@property (nonatomic,readonly) NTKWorldClockComplication * complication; 
+(BOOL)_acceptsComplicationType:(unsigned long long)arg1 ;
-(void)_deactivate;
-(void)_updateDisplay;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_activate;
-(BOOL)hasTapAction;
-(void)performTapAction;
-(void)setPauseDate:(id)arg1 ;
-(void)setDataMode:(long long)arg1 forDisplayWrapper:(id)arg2 ;
-(id)complicationApplicationIdentifier;
-(void)_handleLocaleChange;
-(void)_handleAbbreviationStoreChange:(id)arg1 ;
-(void)_handleTimeZoneChange;
-(void)_startTimeTravelAnimated:(BOOL)arg1 ;
-(void)_endTimeTravelAnimated:(BOOL)arg1 ;
-(void)_configureForLegacyDisplay:(id)arg1 ;
@end

