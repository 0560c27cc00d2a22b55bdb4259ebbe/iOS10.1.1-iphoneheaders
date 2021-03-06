/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITextContentViewAccessibility_super.h>

@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_accessibilitySetValue:(id)arg1 ;
-(NSRange)_accessibilitySelectedTextRange;
-(void)_accessibilitySetSelectedTextRange:(NSRange)arg1 ;
-(BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3 ;
-(BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(BOOL)keyboardInputChanged:(id)arg1 ;
-(void)keyboardInputChangedSelection:(id)arg1 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityValue;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityActivate;
-(BOOL)_accessibilitySupportsActivateAction;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilityDataDetectorScheme:(CGPoint)arg1 ;
-(id)_accessibilityAttributedValueForRange:(NSRange*)arg1 ;
-(id)_accessibilityTextViewTextOperationResponder;
-(BOOL)_accessibilityShouldAnnounceFontInfo;
-(void)_accessibilitySetShouldUpdateCache:(BOOL)arg1 ;
-(BOOL)_accessibilityShouldUpdateTextCache;
@end

