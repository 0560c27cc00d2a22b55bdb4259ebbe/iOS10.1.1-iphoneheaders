/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/NanoPreferenceBundles/General/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSSliderTableCell.h>

@class UILabel;

@interface AXBridgeLeftRightSliderCell : PSSliderTableCell {

	UILabel* _leftLabel;
	UILabel* _rightLabel;

}
+(double)cellHeight;
-(void)layoutSubviews;
-(void)setAccessibilityLabel:(id)arg1 ;
-(id)newControl;
-(BOOL)_accessibilityIgnoreInternalLabels;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

