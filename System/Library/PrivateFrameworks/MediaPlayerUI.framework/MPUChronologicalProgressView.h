/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:16 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MPDetailScrubControllerDelegate.h>
#import <libobjc.A.dylib/MPUContentSizeCategoryChanging.h>

@protocol MPDetailedScrubbing_MPUSliderScrubForwarding, MPUChronologicalProgressViewDelegate;
@class UISlider, MPDetailScrubController, UILabel, MPUNowPlayingIndicatorView, UIImageView, NSString, MPUTimeFormatter;

@interface MPUChronologicalProgressView : UIView <MPDetailScrubControllerDelegate, MPUContentSizeCategoryChanging> {

	UISlider*<MPDetailedScrubbing>*<_MPUSliderScrubForwarding> _slider;
	MPDetailScrubController* _scrubController;
	UILabel* _currentTimeLabel;
	UILabel* _remainingTimeLabel;
	MPUNowPlayingIndicatorView* _indicatorView;
	UILabel* _liveLabel;
	UIImageView* _liveBackgroundImage;
	NSString* _lastCurrentTimeString;
	NSString* _lastRemainingTimeString;
	double _lastDisplayedDuration;
	BOOL _alwaysLive;
	BOOL _showTimeLabels;
	BOOL _scrubbingEnabled;
	BOOL _showIsPlaying;
	id<MPUChronologicalProgressViewDelegate> _delegate;
	long long _style;
	long long _substyle;
	double _totalDuration;
	double _currentTime;
	MPUTimeFormatter* _timeFormatter;

}

@property (nonatomic,retain) MPUTimeFormatter * timeFormatter;                                      //@synthesize timeFormatter=_timeFormatter - In the implementation block
@property (assign,getter=isAlwaysLive,nonatomic) BOOL alwaysLive;                                   //@synthesize alwaysLive=_alwaysLive - In the implementation block
@property (assign,nonatomic,__weak) id<MPUChronologicalProgressViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long style;                                                     //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long substyle;                                                    //@synthesize substyle=_substyle - In the implementation block
@property (assign,nonatomic) double totalDuration;                                                  //@synthesize totalDuration=_totalDuration - In the implementation block
@property (assign,nonatomic) double currentTime;                                                    //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) BOOL showTimeLabels;                                                   //@synthesize showTimeLabels=_showTimeLabels - In the implementation block
@property (assign,nonatomic) BOOL scrubbingEnabled;                                                 //@synthesize scrubbingEnabled=_scrubbingEnabled - In the implementation block
@property (assign,nonatomic) BOOL showIsPlaying;                                                    //@synthesize showIsPlaying=_showIsPlaying - In the implementation block
@property (nonatomic,readonly) CGRect trackRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)timeLabelsClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<MPUChronologicalProgressViewDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MPUChronologicalProgressViewDelegate>)delegate;
-(long long)style;
-(void)setTintColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 ;
-(double)currentTime;
-(CGRect)trackRect;
-(void)detailScrubControllerDidBeginScrubbing:(id)arg1 ;
-(void)detailScrubControllerDidEndScrubbing:(id)arg1 ;
-(void)detailScrubController:(id)arg1 didChangeValue:(float)arg2 ;
-(MPUTimeFormatter *)timeFormatter;
-(id)_timeLabelFont;
-(BOOL)isAlwaysLive;
-(void)setCurrentTime:(double)arg1 ;
-(id)_trackImageWithAlternateStyle:(BOOL)arg1 rounded:(BOOL)arg2 ;
-(id)_trackImage;
-(id)_thumbImage;
-(id)_createTimeLabelWithStyle:(long long)arg1 ;
-(void)_updateTimeLabels;
-(double)_estimatedTimeLabelsWidth;
-(BOOL)_styleRequiresTimeLabelsUnderneath;
-(double)_estimatedWideTimeLabelsWidth;
-(double)_estimatedTimeLabelsHeight;
-(id)_createIndicatorViewWithStyle:(long long)arg1 ;
-(void)_internalSetCurrentTime:(double)arg1 ;
-(void)_updateLabelAvoidance;
-(float)_sliderNormalizedValueForTime:(double)arg1 ;
-(id)_stringForTime:(double)arg1 isTimeRemaining:(BOOL)arg2 ;
-(void)updateTextForContentSizeCategory:(id)arg1 ;
-(void)setSubstyle:(long long)arg1 ;
-(void)setAlwaysLive:(BOOL)arg1 ;
-(void)setTotalDuration:(double)arg1 ;
-(void)setShowIsPlaying:(BOOL)arg1 ;
-(BOOL)ccuiSupportsDelayedTouchesByContainingScrollViewForGesture:(id)arg1 ;
-(long long)substyle;
-(BOOL)showTimeLabels;
-(void)setShowTimeLabels:(BOOL)arg1 ;
-(BOOL)showIsPlaying;
-(void)setTimeFormatter:(MPUTimeFormatter *)arg1 ;
-(void)setScrubbingEnabled:(BOOL)arg1 ;
-(BOOL)scrubbingEnabled;
-(double)totalDuration;
@end

