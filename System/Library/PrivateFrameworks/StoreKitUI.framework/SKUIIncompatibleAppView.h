/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:09 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSMutableArray, UIImageView, UILabel, NSString, UIImage;

@interface SKUIIncompatibleAppView : UIView {

	NSMutableArray* _buttons;
	UIImageView* _iconView;
	UILabel* _messageLabel;
	UILabel* _titleLabel;

}

@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIImage * iconImage; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)addButtonWithTitle:(id)arg1 ;
-(void)setMessage:(NSString *)arg1 ;
-(NSString *)message;
-(UIImage *)iconImage;
-(void)removeButtonTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)setIconImage:(UIImage *)arg1 ;
@end

