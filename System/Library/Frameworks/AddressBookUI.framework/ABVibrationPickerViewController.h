/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABPickerViewController.h>

@class TKVibrationPickerViewController, UIBarButtonItem;

@interface ABVibrationPickerViewController : ABPickerViewController {

	TKVibrationPickerViewController* _vibrationPickerViewController;
	BOOL _canEnterEditingMode;
	UIBarButtonItem* _saveButton;

}

@property (setter=_setSaveButton:,nonatomic,retain) UIBarButtonItem * _saveButton;                                  //@synthesize saveButton=_saveButton - In the implementation block
@property (nonatomic,retain,readonly) TKVibrationPickerViewController * vibrationPickerViewController; 
-(void)dealloc;
-(void)loadView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_getRotationContentSettings:(SCD_Struct_AB0*)arg1 ;
-(id)initWithAlertType:(long long)arg1 ;
-(double)ab_heightToFitForViewInPopoverView;
-(TKVibrationPickerViewController *)vibrationPickerViewController;
-(void)_vibrationSaveButtonClicked:(id)arg1 ;
-(void)_setSaveButton:(id)arg1 ;
-(UIBarButtonItem *)_saveButton;
-(void)setStyleProvider:(id)arg1 ;
@end

