/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:28 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/SKUITableViewCell.h>

@class UIImage, UIImageView, NSString;

@interface ASFamilyMemberTableViewCell : SKUITableViewCell {

	UIImage* _arrowImage;
	UIImage* _highlightedArrowImage;
	UIImageView* _arrowImageView;

}

@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSString * title; 
-(void)layoutSubviews;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(UIImage *)image;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_reloadHighlightState;
@end

