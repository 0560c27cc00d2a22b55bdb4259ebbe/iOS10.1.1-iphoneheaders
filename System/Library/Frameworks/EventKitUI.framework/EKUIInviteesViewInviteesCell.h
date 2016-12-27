/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:41 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, EKUILabeledAvatarView, NSArray, NSLayoutConstraint, UIActivityIndicatorView;

@interface EKUIInviteesViewInviteesCell : UITableViewCell {

	BOOL _hideStatus;
	BOOL _showSpinner;
	UILabel* _nameLabel;
	UILabel* _commentLabel;
	UIImageView* _statusImageView;
	EKUILabeledAvatarView* _contactAvatarView;
	NSArray* _persistentConstraints;
	NSArray* _removableConstraints;
	NSLayoutConstraint* _minimumHeightConstraint;
	NSLayoutConstraint* _nameBaselineToTopConstraint;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UILabel * nameLabel;                                           //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UILabel * commentLabel;                                        //@synthesize commentLabel=_commentLabel - In the implementation block
@property (nonatomic,retain) UIImageView * statusImageView;                                 //@synthesize statusImageView=_statusImageView - In the implementation block
@property (nonatomic,retain) EKUILabeledAvatarView * contactAvatarView;                     //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,retain) NSArray * persistentConstraints;                               //@synthesize persistentConstraints=_persistentConstraints - In the implementation block
@property (nonatomic,retain) NSArray * removableConstraints;                                //@synthesize removableConstraints=_removableConstraints - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * minimumHeightConstraint;                  //@synthesize minimumHeightConstraint=_minimumHeightConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * nameBaselineToTopConstraint;              //@synthesize nameBaselineToTopConstraint=_nameBaselineToTopConstraint - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;                             //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL showSpinner;                                              //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign) BOOL hideStatus;                                                         //@synthesize hideStatus=_hideStatus - In the implementation block
+(id)_nameLabelFont;
+(id)_commentLabelFont;
+(double)_leftTextInset;
-(void)setFrame:(CGRect)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(NSLayoutConstraint *)minimumHeightConstraint;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)nameLabel;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)setHideStatus:(BOOL)arg1 ;
-(void)updateWithParticipantForSorting:(id)arg1 ;
-(void)setStatusImageView:(UIImageView *)arg1 ;
-(void)setCommentLabel:(UILabel *)arg1 ;
-(UILabel *)commentLabel;
-(NSArray *)persistentConstraints;
-(void)setNameBaselineToTopConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)nameBaselineToTopConstraint;
-(void)setMinimumHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPersistentConstraints:(NSArray *)arg1 ;
-(NSArray *)removableConstraints;
-(void)setRemovableConstraints:(NSArray *)arg1 ;
-(BOOL)hideStatus;
-(UIImageView *)statusImageView;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)updateWithParticipantForSorting:(id)arg1 availabilityType:(long long)arg2 showSpinner:(BOOL)arg3 animated:(BOOL)arg4 ;
-(BOOL)showSpinner;
-(EKUILabeledAvatarView *)contactAvatarView;
-(void)setContactAvatarView:(EKUILabeledAvatarView *)arg1 ;
@end

