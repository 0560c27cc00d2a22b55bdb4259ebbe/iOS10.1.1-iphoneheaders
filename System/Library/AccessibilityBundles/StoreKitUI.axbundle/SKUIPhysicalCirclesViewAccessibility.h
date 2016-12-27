/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:34 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/StoreKitUI.axbundle/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/__SKUIPhysicalCirclesViewAccessibility_super.h>

@interface SKUIPhysicalCirclesViewAccessibility : __SKUIPhysicalCirclesViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(BOOL)_accessibilityUsesChildrenFramesForSorting;
-(void)removeCircleAtIndex:(long long)arg1 animated:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_reloadDidFinish;
-(id)_accessibilityValueForCircle:(id)arg1 ;
-(void)_accessibilityDeleteCircle:(id)arg1 ;
-(void)_accessibilityActivateCircle:(id)arg1 ;
-(long long)_accessibilityIndexOfCircle:(id)arg1 ;
-(id)_accessibilityValueForAffinityCount:(long long)arg1 ;
-(id)_accessibilityCircleBodies;
-(CGPoint)_accessibilityForceTranslationForScrollDirection:(long long)arg1 ;
-(id)_accessibilityPushingScrollStatusInDirection:(long long)arg1 ;
@end

