/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:42 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <EventKitUI/EKEventDetailItem.h>

@class UITableViewCell, NSArray;

@interface EKEventAvailabilityDetailItem : EKEventDetailItem {

	UITableViewCell* _cell;
	long long _availability;
	unsigned long long _supportedAvailabilities;
	NSArray* _choices;
	unsigned long long _availabilityIndexInChoices;

}
-(void)reset;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(BOOL)configureWithCalendar:(id)arg1 preview:(BOOL)arg2 ;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)setEvent:(id)arg1 store:(id)arg2 ;
@end

