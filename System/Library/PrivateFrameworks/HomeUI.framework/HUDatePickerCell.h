/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@class HFItem, UIDatePicker, NSString;

@interface HUDatePickerCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	UIDatePicker* _datePicker;

}

@property (nonatomic,retain) UIDatePicker * datePicker;              //@synthesize datePicker=_datePicker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                          //@synthesize item=_item - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(HFItem *)item;
-(void)setItem:(HFItem *)arg1 ;
-(void)setDatePicker:(UIDatePicker *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(UIDatePicker *)datePicker;
@end

