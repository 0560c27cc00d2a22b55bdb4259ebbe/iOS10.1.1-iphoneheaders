/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:41:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UITableViewAccessibility_super.h>

@interface UITableViewAccessibility : __UITableViewAccessibility_super
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2 ;
-(void)dealloc;
-(void)reloadData;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 ;
-(id)description;
-(void)_handleDeviceOrientationChange:(id)arg1 ;
-(void)_reuseTableViewSubview:(id)arg1 viewType:(int)arg2 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)setTableHeaderViewShouldAutoHide:(BOOL)arg1 ;
-(id)indexPathsForRowsInRect:(CGRect)arg1 ;
-(id)_delegateViewForHeaderInSection:(long long)arg1 ;
-(id)_delegateViewForFooterInSection:(long long)arg1 ;
-(void)_reorderPositionChangedForCell:(id)arg1 ;
-(void)_endReorderingForCell:(id)arg1 wasCancelled:(BOOL)arg2 animated:(BOOL)arg3 ;
-(id)dequeueReusableHeaderFooterViewWithIdentifier:(id)arg1 ;
-(void)setCountString:(id)arg1 ;
-(void)insertSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadSections:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)insertRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(long long)arg2 ;
-(id)dequeueReusableCellWithIdentifier:(id)arg1 forIndexPath:(id)arg2 ;
-(CGRect)accessibilityFrame;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(BOOL)shouldGroupAccessibilityChildren;
-(BOOL)accessibilityPerformEscape;
-(long long)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(long long)arg1 ;
-(long long)indexOfAccessibilityElement:(id)arg1 ;
-(void)_setAccessibilitySearchTableViewVisible;
-(void)_setAccessibilitySearchTableViewHidden;
-(id)_accessibilityHitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityViewChildrenWithOptions:(id)arg1 ;
-(BOOL)isAccessibilityOpaqueElementProvider;
-(BOOL)_accessibilityNativeFocusPreferredElementIsValid;
-(id)_accessibilityUserTestingChildren;
-(BOOL)_accessibilityIsScannerGroup;
-(BOOL)_accessibilityIsScannerElement;
-(void)setReusableCellsEnabled:(BOOL)arg1 ;
-(void)_accessibilityClearChildren;
-(BOOL)_accessibilityScrollToFrame:(CGRect)arg1 forView:(id)arg2 ;
-(id)_accessibilityUseOpaqueElements;
-(id)_axFirstLastOpaqueHeaderElementFromSection:(long long)arg1 options:(id)arg2 direction:(int)arg3 ;
-(id)_axFirstLastOpaqueHeaderElementInDirection:(int)arg1 options:(id)arg2 ;
-(id)_accessibilitySortedElementsWithin;
-(id)_axOpaqueHeaderElementInDirection:(int)arg1 withinElements:(id)arg2 startIndex:(unsigned long long)arg3 ;
-(id)_axOffScreenOpaqueHeaderElementInDirection:(int)arg1 options:(id)arg2 childElement:(id)arg3 ;
-(id)_accessibilityHeaderElement;
-(id)_accessibilitySubviews;
-(BOOL)_accessibilityIsSearchTableVisible;
-(id)_accessibilitySearchResultsTableView;
-(id)_accessibilityFooterElement;
-(id)_axAttemptStoryboard:(id)arg1 viewType:(int)arg2 ;
-(BOOL)_accessibilityShouldDisableCellReuse;
-(id)_axAttemptCreationOfViewType:(int)arg1 identifier:(id)arg2 ;
-(void)_accessibilityInitializeInternalData;
-(void)_axPostLayoutChange;
-(BOOL)_accessibilitySearchTableViewVisible;
-(BOOL)_accessibilitySearchControllerDimmingViewVisible;
-(BOOL)_accessibilityHasAccessibleOrContainerSubviewWithSubviewTree:(id)arg1 ;
-(BOOL)_accessibilityHasAccessibleOrContainerSubview;
-(id)accessibilityTableViewCellElementAtGlobalRow:(long long)arg1 ;
-(id)_accessibilitySupplementaryHeaderViews;
-(id)_accessibilitySupplementaryFooterViews;
-(id)accessibilityTableViewSectionElementAtSection:(long long)arg1 isHeader:(BOOL)arg2 ;
-(id)_accessibilityFuzzyHitTest:(CGPoint*)arg1 withEvent:(id)arg2 ;
-(id)_accessibilityInternalData;
-(id)accessibilityTableViewCellAccessibilityElementForTableViewCell:(id)arg1 ;
-(id)_accessibilityTableViewCellElementForIndexPath:(id)arg1 ;
-(id)_accessibilityScrollStatus;
-(BOOL)_accessibilityShouldVerifyTableViewCellsAreVisibleByHitTesting;
-(id)_axVisibleHeadersAndFootersPriorToFirstVisibleCellSection:(long long)arg1 ;
-(id)_axVisibleHeadersAndFootersAfterLastVisibleCellSection:(long long)arg1 ;
-(void)_accessibilitySetUseOpaqueElements:(id)arg1 ;
-(BOOL)_accessibilityOpaqueElementScrollsContentIntoView;
-(id)_accessibilityOpaqueHeaderElementInDirection:(int)arg1 childElement:(id)arg2 ;
-(BOOL)accessibilityScrollLeftPageSupported;
-(BOOL)accessibilityScrollRightPageSupported;
-(id)accessibilityCellForRowAtIndexPath:(id)arg1 ;
-(id)_accessibilityVisibleHeaderSections;
-(id)_accessibilityUserTestingVisibleSections;
-(id)_accessibilityUserTestingVisibleCells;
-(void)_setAccessibilitySearchControllerDimmingViewVisible;
-(void)_setAccessibilitySearchControllerDimmingViewHidden;
-(id)_accessibilityFirstVisibleItem;
-(void)_accessibilityOpaqueElementScrollCleanup;
-(long long)_accessibilityDefaultTableViewCellScrollPosition;
-(void)accessibilityFindMockParentForTableViewCell:(id)arg1 ;
-(id)_accessibilityUIScrollViewScrollStatus;
-(id)_accessibilityScannerGroupElements;
-(BOOL)_accessibilitySpeakThisShouldOnlyIncludeVisibleElements;
-(id)_accessibilityReusableViewForOpaqueElement:(id)arg1 ;
@end

