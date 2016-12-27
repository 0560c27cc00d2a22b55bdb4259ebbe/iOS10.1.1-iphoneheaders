/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKUtilityImageAndLabelsComplicationView.h>
#import <libobjc.A.dylib/NTKTimerComplicationDisplay.h>

@class NSString;

@interface NTKShortTimerUtilityComplicationView : NTKUtilityImageAndLabelsComplicationView <NTKTimerComplicationDisplay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(void)setTime:(double)arg1 ;
-(void)_setLayoutForTime:(double)arg1 ;
-(void)setStoppedWithTime:(double)arg1 ;
@end

