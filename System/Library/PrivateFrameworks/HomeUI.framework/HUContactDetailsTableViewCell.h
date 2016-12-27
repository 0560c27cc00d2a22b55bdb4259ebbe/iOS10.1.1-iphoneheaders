/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class CNAvatarView;

@interface HUContactDetailsTableViewCell : UITableViewCell {

	CNAvatarView* _avatarView;

}

@property (nonatomic,retain) CNAvatarView * avatarView;              //@synthesize avatarView=_avatarView - In the implementation block
+(id)identifier;
+(double)preferredHeight;
-(id)init;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)_updateCellStyle;
@end

