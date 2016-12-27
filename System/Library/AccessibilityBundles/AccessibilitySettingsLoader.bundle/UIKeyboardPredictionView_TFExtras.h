/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:39 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/AccessibilitySettingsLoader.bundle/AccessibilitySettingsLoader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilitySettingsLoader/AccessibilitySettingsLoader-Structs.h>
#import <AccessibilitySettingsLoader/__UIKeyboardPredictionView_TFExtras_super.h>

@interface UIKeyboardPredictionView_TFExtras : __UIKeyboardPredictionView_TFExtras_super
+(id)safeCategoryTargetClassName;
+(Class)safeCategoryBaseClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)speakTypingLoadAccessibilityInformation;
-(BOOL)accessibilityLongPressGestureRecognizerEnabled;
-(void)_handleAXLongPress:(id)arg1 ;
-(void)setAccessibilityLongPressGestureRecognizerEnabled:(BOOL)arg1 ;
-(void)setAccessibilityCurrentIndex:(long long)arg1 ;
-(long long)accessibilityCurrentIndex;
-(void)_speakLabelAtCell:(id)arg1 forCurrentInputMode:(id)arg2 ;
@end
