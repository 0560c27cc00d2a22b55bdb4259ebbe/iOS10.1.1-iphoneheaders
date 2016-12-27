/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>
#import <libobjc.A.dylib/NTKWorldClockComplicationDisplay.h>

@class NTKDigitalTimeLabel, NTKTimeOfDayLabel, NSString;

@interface NTKLongWorldClockUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKWorldClockComplicationDisplay> {

	NTKDigitalTimeLabel* _timeLabel;
	NTKTimeOfDayLabel* _timeTravelLabel;
	double _cachedTimeWidth;
	BOOL _timeTravel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTimeZone:(id)arg1 ;
-(void)setFont:(id)arg1 ;
-(void)setForegroundColor:(id)arg1 ;
-(double)fontSize;
-(void)setOverrideDate:(id)arg1 ;
-(void)setLongCity:(id)arg1 ;
-(void)startTimeTravelAnimated:(BOOL)arg1 ;
-(void)endTimeTravelAnimated:(BOOL)arg1 ;
-(void)_handleLocaleChange;
-(void)_updateTime;
-(void)_updateLabelsForFontChange;
-(void)_applyForegroundAlpha;
-(double)_widthThatFits;
-(void)_updateContentForMaxSizeChange;
-(void)_updateLocale;
-(void)_updateCachedTimeWidth;
@end

