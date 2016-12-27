/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:10 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/SafariServices.axbundle/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/SafariServices-Structs.h>
#import <SafariServices/___SFNavigationBarAccessibility_super.h>

@interface _SFNavigationBarAccessibility : ___SFNavigationBarAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_axUpdateTextFields;
-(void)_axUpdateURLValue;
-(void)_axUpdateCancelButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)fluidProgressViewDidShowProgress:(id)arg1 ;
-(void)_updateShowsLockIcon;
-(void)_updateReaderButtonVisibilityAnimated:(BOOL)arg1 showAvailabilityText:(BOOL)arg2 adjustURLLabels:(BOOL)arg3 ;
-(void)_readerButtonTapped:(id)arg1 ;
-(void)_compressedBarTapped;
-(void)setExpanded:(BOOL)arg1 textFieldSelectionRange:(NSRange)arg2 ;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_accessibilityLoadAccessibilityInformation;
-(BOOL)_accessibilityOnlyComparesByXAxis;
-(long long)_accessibilitySortPriority;
-(void)_updateText;
@end

