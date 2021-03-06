/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/InCallLockScreen.lockbundle/InCallLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <InCallLockScreen/InCallLockScreen-Structs.h>
#import <InCallLockScreen/PHAbstractCallParticipantLabelView.h>

@class CNContact, CNAvatarView, NSLayoutConstraint, UILabel, NSArray, NSTimer, UIButton;

@interface PHSingleCallParticipantLabelView : PHAbstractCallParticipantLabelView {

	CNContact* _contact;
	CNAvatarView* _avatarView;
	NSLayoutConstraint* _participantMarqueeLabelRightConstraint;
	NSLayoutConstraint* _participantMarqueeLabelAlignmentConstraint;
	NSLayoutConstraint* _participantMarqueeLabelBaselineConstraint;
	NSLayoutConstraint* _statusLabelAlignmentConstraint;
	NSLayoutConstraint* _statusLabelBaseLineConstraint;
	NSLayoutConstraint* _secondaryInfoLabelBaseLineConstraint;
	NSLayoutConstraint* _statusLabelRightConstraint;
	NSLayoutConstraint* _secondaryInfoLabelRightConstraint;
	UILabel* _statusLabel;
	UILabel* _secondaryInfoLabel;
	NSArray* _statusLabelsArray;
	NSTimer* _statusLabelTimer;
	unsigned long long _currentStatusLabelIndex;
	UIButton* _conferenceParticipantsButton;
	unsigned long long _labelLayoutState;

}

@property (nonatomic,retain) CNAvatarView * avatarView;                                          //@synthesize avatarView=_avatarView - In the implementation block
@property (retain) NSLayoutConstraint * participantMarqueeLabelRightConstraint;                  //@synthesize participantMarqueeLabelRightConstraint=_participantMarqueeLabelRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * participantMarqueeLabelAlignmentConstraint;              //@synthesize participantMarqueeLabelAlignmentConstraint=_participantMarqueeLabelAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * participantMarqueeLabelBaselineConstraint;               //@synthesize participantMarqueeLabelBaselineConstraint=_participantMarqueeLabelBaselineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelAlignmentConstraint;                          //@synthesize statusLabelAlignmentConstraint=_statusLabelAlignmentConstraint - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelBaseLineConstraint;                           //@synthesize statusLabelBaseLineConstraint=_statusLabelBaseLineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * secondaryInfoLabelBaseLineConstraint;                    //@synthesize secondaryInfoLabelBaseLineConstraint=_secondaryInfoLabelBaseLineConstraint - In the implementation block
@property (retain) NSLayoutConstraint * statusLabelRightConstraint;                              //@synthesize statusLabelRightConstraint=_statusLabelRightConstraint - In the implementation block
@property (retain) NSLayoutConstraint * secondaryInfoLabelRightConstraint;                       //@synthesize secondaryInfoLabelRightConstraint=_secondaryInfoLabelRightConstraint - In the implementation block
@property (retain) UILabel * statusLabel;                                                        //@synthesize statusLabel=_statusLabel - In the implementation block
@property (retain) UILabel * secondaryInfoLabel;                                                 //@synthesize secondaryInfoLabel=_secondaryInfoLabel - In the implementation block
@property (retain) NSArray * statusLabelsArray;                                                  //@synthesize statusLabelsArray=_statusLabelsArray - In the implementation block
@property (retain) NSTimer * statusLabelTimer;                                                   //@synthesize statusLabelTimer=_statusLabelTimer - In the implementation block
@property (assign) unsigned long long currentStatusLabelIndex;                                   //@synthesize currentStatusLabelIndex=_currentStatusLabelIndex - In the implementation block
@property (retain) UIButton * conferenceParticipantsButton;                                      //@synthesize conferenceParticipantsButton=_conferenceParticipantsButton - In the implementation block
@property (assign,nonatomic) unsigned long long labelLayoutState;                                //@synthesize labelLayoutState=_labelLayoutState - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                //@synthesize contact=_contact - In the implementation block
-(unsigned long long)currentStatusLabelIndex;
-(void)setActivityState:(unsigned short)arg1 animated:(BOOL)arg2 ;
-(void)animateToNextLabel;
-(void)setStatusLabelsArray:(NSArray *)arg1 ;
-(NSTimer *)statusLabelTimer;
-(void)setLabelDescriptor:(id)arg1 ;
-(NSArray *)statusLabelsArray;
-(void)statusLabelTapped:(id)arg1 ;
-(NSLayoutConstraint *)statusLabelAlignmentConstraint;
-(void)setCurrentStatusLabelIndex:(unsigned long long)arg1 ;
-(void)setStatusLabelTimer:(NSTimer *)arg1 ;
-(void)_setParticipantLabelAlignment:(long long)arg1 ;
-(void)animateToFirstLabel;
-(void)_setStatusLabelAlignment:(long long)arg1 ;
-(UIButton *)conferenceParticipantsButton;
-(void)setActivityState:(unsigned short)arg1 ;
-(void)setShowsInfoButton:(BOOL)arg1 ;
-(BOOL)_statusLabelStringWillFit:(id)arg1 ;
-(void)setStatusLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(UILabel *)secondaryInfoLabel;
-(NSLayoutConstraint *)statusLabelRightConstraint;
-(void)setLabelLayoutState:(unsigned long long)arg1 animated:(BOOL)arg2 ;
-(void)setHidesLabel:(BOOL)arg1 ;
-(void)setParticipantMarqueeLabelBaselineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantMarqueeLabelBaselineConstraint;
-(double)_distanceFromParticipantNameBaseLineToStatus;
-(void)setStatusLabelBaseLineConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setSecondaryInfoLabelBaseLineConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondaryInfoLabelBaseLineConstraint;
-(void)setSecondaryInfoLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)secondaryInfoLabelRightConstraint;
-(NSLayoutConstraint *)participantMarqueeLabelAlignmentConstraint;
-(void)setParticipantMarqueeLabelAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusLabelAlignmentConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setShouldCompressLabelsVertically:(BOOL)arg1 ;
-(void)fadeStatusLabelToAttributedOrPlainString:(id)arg1 ;
-(void)setParticipantMarqueeLabelRightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)participantMarqueeLabelRightConstraint;
-(void)setConferenceParticipantsButton:(UIButton *)arg1 ;
-(NSLayoutConstraint *)statusLabelBaseLineConstraint;
-(void)setSecondaryInfoLabel:(UILabel *)arg1 ;
-(unsigned long long)labelLayoutState;
-(void)setLabelLayoutState:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTextColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(CNContact *)contact;
-(CNAvatarView *)avatarView;
-(void)setAvatarView:(CNAvatarView *)arg1 ;
-(void)infoButtonTapped:(id)arg1 ;
-(UILabel *)statusLabel;
-(void)setStatusLabel:(UILabel *)arg1 ;
-(void)setContact:(CNContact *)arg1 ;
@end

