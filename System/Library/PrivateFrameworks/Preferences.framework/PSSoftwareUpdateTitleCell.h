/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:56 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSTableCell.h>

@class PSSoftwareUpdateAnimatedIcon, UIImageView, UIProgressView, UILabel, PSWebContainerView, NSLayoutConstraint, UIImage;

@interface PSSoftwareUpdateTitleCell : PSTableCell {

	int _progressStyle;
	PSSoftwareUpdateAnimatedIcon* _animatedGearView;
	BOOL _animatingGearView;
	UIImageView* _gearBackgroundImageView;
	UIProgressView* _progressBar;
	UILabel* _updateStatusLabel;
	PSWebContainerView* _releaseNotesSummaryView;
	NSLayoutConstraint* _updateStatusLabelVerticalConstraint;

}

@property (nonatomic,retain) NSLayoutConstraint * updateStatusLabelVerticalConstraint;              //@synthesize updateStatusLabelVerticalConstraint=_updateStatusLabelVerticalConstraint - In the implementation block
@property (nonatomic,readonly) UIImage * gearBackgroundImage; 
@property (nonatomic,retain) UIImageView * gearBackgroundImageView;                                 //@synthesize gearBackgroundImageView=_gearBackgroundImageView - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                                        //@synthesize progressBar=_progressBar - In the implementation block
@property (assign,nonatomic) int progressDisplayStyle; 
@property (nonatomic,readonly) UILabel * updateStatusLabel;                                         //@synthesize updateStatusLabel=_updateStatusLabel - In the implementation block
@property (nonatomic,readonly) PSWebContainerView * releaseNotesSummaryView;                        //@synthesize releaseNotesSummaryView=_releaseNotesSummaryView - In the implementation block
+(long long)cellStyle;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)didMoveToSuperview;
-(void)setProgress:(float)arg1 ;
-(void)updateConstraints;
-(void)setupViews;
-(void)configureImageView;
-(void)configureAnimatedGearViewFromImageSize:(CGSize)arg1 ;
-(void)createGearIconConstraints;
-(void)configureUpdateNameLabel;
-(void)configurePublisherLabel;
-(void)configureUpdateStatusLabel;
-(void)configureReleaseNotesSummaryView;
-(void)configureProgressBar;
-(id)newGearBackgroundImageView;
-(id)newSoftwareUpdateAnimatedIconWithFrame:(CGRect)arg1 ;
-(id)newUpdateStatusLabel;
-(id)newProgressBar;
-(void)updateProgressTintColor;
-(void)setAnimatingGearView:(BOOL)arg1 ;
-(UIImage *)gearBackgroundImage;
-(double)preferredHeightWithTable:(id)arg1 ;
-(void)setProgressDisplayStyle:(int)arg1 ;
-(int)progressDisplayStyle;
-(void)setReleaseNotesSummary:(id)arg1 ;
-(void)setUpdateName:(id)arg1 ;
-(void)setPublisherText:(id)arg1 ;
-(UIImageView *)gearBackgroundImageView;
-(void)setGearBackgroundImageView:(UIImageView *)arg1 ;
-(UILabel *)updateStatusLabel;
-(PSWebContainerView *)releaseNotesSummaryView;
-(NSLayoutConstraint *)updateStatusLabelVerticalConstraint;
-(void)setUpdateStatusLabelVerticalConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setStatusMessage:(id)arg1 ;
-(UIProgressView *)progressBar;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
@end

