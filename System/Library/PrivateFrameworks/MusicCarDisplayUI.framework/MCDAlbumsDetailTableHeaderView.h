/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIImageView, UILabel, UIView, MCDButton, UIImage, NSString;

@interface MCDAlbumsDetailTableHeaderView : UITableViewHeaderFooterView {

	UIImageView* _artworkImageView;
	UILabel* _titleLabel;
	UIView* _separatorView;
	UILabel* _subtitleLabel;
	MCDButton* _shuffleButton;
	/*^block*/id _shuffleActionBlock;

}

@property (nonatomic,retain) UIImage * artworkImage; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) id shuffleActionBlock;                 //@synthesize shuffleActionBlock=_shuffleActionBlock - In the implementation block
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(UIImage *)artworkImage;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(void)setDuration:(double)arg1 count:(unsigned long long)arg2 ;
-(void)setTemplateArtworkImage:(id)arg1 ;
-(void)setShuffleActionBlock:(id)arg1 ;
-(void)_shuffleButtonAction:(id)arg1 ;
-(id)shuffleActionBlock;
@end

