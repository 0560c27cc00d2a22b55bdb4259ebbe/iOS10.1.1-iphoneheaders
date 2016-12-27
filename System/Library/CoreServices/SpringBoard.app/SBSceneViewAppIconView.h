/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class SBIconImageView, UILabel, UIView;

@interface SBSceneViewAppIconView : UIView {

	BOOL _showsAppIconBorder;
	SBIconImageView* _imageView;
	UILabel* _label;
	UIView* _iconBorderView;

}

@property (nonatomic,readonly) SBIconImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIView * iconBorderView;                    //@synthesize iconBorderView=_iconBorderView - In the implementation block
@property (assign,nonatomic) BOOL showsAppIconBorder;                    //@synthesize showsAppIconBorder=_showsAppIconBorder - In the implementation block
-(UIView *)iconBorderView;
-(void)setIconBorderView:(UIView *)arg1 ;
-(void)setShowsAppIconBorder:(BOOL)arg1 ;
-(BOOL)showsAppIconBorder;
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(SBIconImageView *)imageView;
-(UILabel *)label;
-(id)initWithIcon:(id)arg1 ;
@end
