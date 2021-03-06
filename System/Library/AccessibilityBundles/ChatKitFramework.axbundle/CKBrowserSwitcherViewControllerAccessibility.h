/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:48:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/ChatKitFramework.axbundle/ChatKitFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKitFramework/__CKBrowserSwitcherViewControllerAccessibility_super.h>
#import <UIKit/UIScrollViewAccessibilityDelegate.h>

@class NSString;

@interface CKBrowserSwitcherViewControllerAccessibility : __CKBrowserSwitcherViewControllerAccessibility_super <UIScrollViewAccessibilityDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)_axSetIsScrollingByDragGesture:(BOOL)arg1 ;
-(BOOL)_axIsScrollingByDragGesture;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)loadView;
-(BOOL)accessibilityPerformEscape;
-(id)accessibilityScrollStatusForScrollView:(id)arg1 ;
-(void)showSelectionViewController:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setCurrentViewController:(id)arg1 ;
-(void)_accessibilityLoadAccessibilityInformation;
@end

