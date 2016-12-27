/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:38 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/AccessibilitySettings.bundle/AccessibilitySettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UIActivityIndicatorView;

@interface VoiceOverBluetoothDeviceTableCell : PSTableCell {

	UIActivityIndicatorView* _spinner;
	int _state;

}
+(id)selectedCheckedImage;
+(id)spacerImage;
+(id)checkedImage;
-(void)_updateCheckMarkIcon;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setChecked:(BOOL)arg1 ;
-(id)accessibilityTableViewCellText;
-(void)setDeviceState:(int)arg1 ;
-(void)setDeviceStatePaired:(BOOL)arg1 andConnected:(BOOL)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)refreshCellContentsWithSpecifier:(id)arg1 ;
@end

