/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EKCalendarEditItem.h>

@class UIView, UILabel, NSMutableArray, UISwitch;

@interface EKCalendarAbstractSwitchEditItem : EKCalendarEditItem {

	UIView* _footerView;
	UILabel* _descriptionLabel;
	BOOL _underlyingCalendarState;
	BOOL _switchState;
	BOOL _allowEventAlerts;
	NSMutableArray* _cells;
	UISwitch* _toggleSwitch;

}

@property (assign,nonatomic) BOOL allowEventAlerts;                     //@synthesize allowEventAlerts=_allowEventAlerts - In the implementation block
@property (nonatomic,retain) NSMutableArray * cells;                    //@synthesize cells=_cells - In the implementation block
@property (nonatomic,retain) UISwitch * toggleSwitch;                   //@synthesize toggleSwitch=_toggleSwitch - In the implementation block
@property (assign,nonatomic) BOOL underlyingCalendarState;              //@synthesize underlyingCalendarState=_underlyingCalendarState - In the implementation block
@property (assign,nonatomic) BOOL switchState;                          //@synthesize switchState=_switchState - In the implementation block
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)reset;
-(id)cell;
-(id)footerView;
-(NSMutableArray *)cells;
-(void)setCells:(NSMutableArray *)arg1 ;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(void)setCalendar:(id)arg1 store:(id)arg2 ;
-(void)setSwitchState:(BOOL)arg1 ;
-(BOOL)underlyingCalendarState;
-(id)cellText;
-(void)_switchStateChanged:(id)arg1 ;
-(BOOL)switchState;
-(id)descriptionLabelText;
-(void)_applyStyleToUILabel:(id)arg1 ;
-(void)setUnderlyingCalendarState:(BOOL)arg1 ;
-(void)layoutForWidth:(double)arg1 ;
-(id)footerViewForSection;
-(double)footerHeightForSection;
-(BOOL)saveStateToCalendar:(id)arg1 ;
-(BOOL)allowEventAlerts;
-(void)setAllowEventAlerts:(BOOL)arg1 ;
-(UISwitch *)toggleSwitch;
-(void)setToggleSwitch:(UISwitch *)arg1 ;
@end

