/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:24 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UpNextWidget.framework/UpNextWidget
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UpNextWidget/UpNextWidget-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, NSString, NSDate;

@interface UpNextWidget.LargeReminderView : UIView {

	 viewTapped;
	 listColor;
	 title;
	 dueDate;
	 location;
	 notes;
	 reminderTrailingView;
	 circleImageView;
	 circleDiameter;

}

@property (copy,nonatomic) id viewTapped; 
@property (retain,nonatomic) UIColor * listColor; 
@property (copy,nonatomic) NSString * title; 
@property (retain,nonatomic) NSDate * dueDate; 
@property (copy,nonatomic) NSString * location; 
@property (copy,nonatomic) NSString * notes; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(NSString *)notes;
-(void)setNotes:(NSString *)arg1 ;
-(NSDate *)dueDate;
-(double)lastBaselineOffsetFromBottom;
-(double)firstBaselineOffsetFromTop;
-(void)setDueDate:(NSDate *)arg1 ;
-(UIColor *)listColor;
-(void)setListColor:(UIColor *)arg1 ;
-(void)tappedWithGestureRecognizer:(id)arg1 ;
-(id)viewTapped;
-(void)setViewTapped:(id)arg1 ;
@end

