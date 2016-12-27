/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:46 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class SBDisplayItem, SBIcon, UIImageView, NSString;

@interface SBDeckSwitcherIconImageContainerView : UIView {

	SBDisplayItem* _displayItem;
	SBIcon* _icon;
	UIImageView* _imageView;

}

@property (nonatomic,retain) SBIcon * icon;                              //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                    //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,readonly) SBDisplayItem * displayItem;              //@synthesize displayItem=_displayItem - In the implementation block
@property (nonatomic,readonly) NSString * displayName; 
-(SBDisplayItem *)displayItem;
-(id)initWithDisplayItem:(id)arg1 ;
-(void)updateIcon;
-(void)_configureIconImageView:(id)arg1 ;
-(void)_crossfadeToIconImage:(id)arg1 ;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setIcon:(SBIcon *)arg1 ;
-(SBIcon *)icon;
-(void)setImageView:(UIImageView *)arg1 ;
-(NSString *)displayName;
@end

