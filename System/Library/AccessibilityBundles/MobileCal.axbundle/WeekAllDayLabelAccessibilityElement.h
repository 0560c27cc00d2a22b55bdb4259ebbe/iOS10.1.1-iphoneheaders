/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:59 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/MobileCal.axbundle/MobileCal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UIAccessibilityElement.h>

@class UIView;

@interface WeekAllDayLabelAccessibilityElement : UIAccessibilityElement {

	unsigned long long _dayIndex;
	UIView* _allDayView;

}

@property (assign,nonatomic) unsigned long long dayIndex;              //@synthesize dayIndex=_dayIndex - In the implementation block
@property (assign,nonatomic,__weak) UIView * allDayView;               //@synthesize allDayView=_allDayView - In the implementation block
-(void)setAllDayView:(UIView *)arg1 ;
-(void)setDayIndex:(unsigned long long)arg1 ;
-(unsigned long long)dayIndex;
-(CGRect)accessibilityFrame;
-(UIView *)allDayView;
@end

