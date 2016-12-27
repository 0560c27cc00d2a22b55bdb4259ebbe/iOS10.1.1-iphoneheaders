/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKit/UIControl.h>

@class UILabel, UIColor, UIImage, UIView, UIImageView;

@interface SBUIStarkBannerViewButton : UIControl {

	UILabel* _textLabel;
	UIColor* _unselectedTextColor;
	UIColor* _selectedTextColor;
	UIImage* _unselectedImage;
	UIImage* _selectedImage;
	UIView* _highlightView;
	UIImageView* _imageView;
	UIColor* _highlightColor;

}

@property (nonatomic,retain) UILabel * textLabel;                        //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UIColor * unselectedTextColor;              //@synthesize unselectedTextColor=_unselectedTextColor - In the implementation block
@property (nonatomic,retain) UIColor * selectedTextColor;                //@synthesize selectedTextColor=_selectedTextColor - In the implementation block
@property (nonatomic,retain) UIImage * unselectedImage;                  //@synthesize unselectedImage=_unselectedImage - In the implementation block
@property (nonatomic,retain) UIImage * selectedImage;                    //@synthesize selectedImage=_selectedImage - In the implementation block
@property (nonatomic,retain) UIColor * highlightColor;                   //@synthesize highlightColor=_highlightColor - In the implementation block
+(id)buttonWithText:(id)arg1 highlightColor:(id)arg2 ;
+(id)buttonWithOKAndHighlightColor:(id)arg1 ;
+(id)buttonWithChevronImageForTraitCollection:(id)arg1 highlightColor:(id)arg2 ;
+(id)highlightColorForNightTime:(BOOL)arg1 ;
+(id)_chevronImageForTraitCollection:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UILabel *)textLabel;
-(UIImage *)selectedImage;
-(UIImage *)unselectedImage;
-(void)setSelectedTextColor:(UIColor *)arg1 ;
-(UIColor *)selectedTextColor;
-(void)setSelectedImage:(UIImage *)arg1 ;
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(void)setUnselectedImage:(UIImage *)arg1 ;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)setUnselectedTextColor:(UIColor *)arg1 ;
-(UIColor *)unselectedTextColor;
@end
