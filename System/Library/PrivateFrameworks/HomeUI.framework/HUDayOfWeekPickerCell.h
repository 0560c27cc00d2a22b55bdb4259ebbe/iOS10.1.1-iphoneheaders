/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>
#import <libobjc.A.dylib/HUCellProtocol.h>

@protocol HUDayOfWeekPickerCellDelegate;
@class HFItem, NSSet, NSArray, UIStackView, NSString;

@interface HUDayOfWeekPickerCell : UITableViewCell <HUCellProtocol> {

	HFItem* _item;
	id<HUDayOfWeekPickerCellDelegate> _delegate;
	NSSet* _selectedRecurrences;
	NSArray* _buttons;
	UIStackView* _buttonStackView;

}

@property (nonatomic,retain) NSArray * buttons;                                              //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,retain) UIStackView * buttonStackView;                                  //@synthesize buttonStackView=_buttonStackView - In the implementation block
@property (assign,nonatomic,__weak) id<HUDayOfWeekPickerCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSSet * selectedRecurrences;                                    //@synthesize selectedRecurrences=_selectedRecurrences - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                  //@synthesize item=_item - In the implementation block
-(void)setDelegate:(id<HUDayOfWeekPickerCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<HUDayOfWeekPickerCellDelegate>)delegate;
-(HFItem *)item;
-(void)tintColorDidChange;
-(void)setItem:(HFItem *)arg1 ;
-(NSArray *)buttons;
-(void)setButtons:(NSArray *)arg1 ;
-(void)setButtonStackView:(UIStackView *)arg1 ;
-(UIStackView *)buttonStackView;
-(void)_toggleWeekdayButton:(id)arg1 ;
-(void)_updateSelectedDays;
-(NSSet *)selectedRecurrences;
-(void)setSelectedRecurrences:(NSSet *)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(void)_setupConstraints;
@end

