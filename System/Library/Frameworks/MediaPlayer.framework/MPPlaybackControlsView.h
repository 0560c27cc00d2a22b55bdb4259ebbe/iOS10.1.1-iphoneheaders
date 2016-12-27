/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/MPDetailSliderDelegate.h>

@protocol MPPlaybackControlsDelegate;
@class UIActivityIndicatorView, MPButton, UIView, MPAVItem, MPTimeMarker, MPDetailSlider, CABasicAnimation, MPAVController, UILabel, NSString, UIImage;

@interface MPPlaybackControlsView : UIView <CAAnimationDelegate, MPDetailSliderDelegate> {

	UIActivityIndicatorView* _activityIndicator;
	id<MPPlaybackControlsDelegate> _delegate;
	MPButton* _fastFowardButton;
	UIView* _fastFowardButtonBezel;
	MPButton* _geniusButton;
	MPAVItem* _item;
	MPTimeMarker* _markerForProgressControlDuration;
	MPButton* _mailButton;
	MPButton* _playbackSpeedButton;
	MPDetailSlider* _progressControl;
	MPButton* _repeatButton;
	MPButton* _rewindButton;
	UIView* _rewindButtonBezel;
	CABasicAnimation* _rewindOpacityAnimation;
	MPAVController* _player;
	double _progressOffset;
	float _seekedToValue;
	MPButton* _shuffleButton;
	double _tickInterval;
	UILabel* _trackInfoLabel;
	unsigned long long _visibleParts;
	unsigned _wantsTick : 1;
	unsigned _geniusButtonDisabled : 1;
	unsigned _fastForwardAndRewindButtonDisabled : 1;
	unsigned _playbackSpeedButtonDisabled : 1;
	unsigned _mailButtonDisabled : 1;
	unsigned _mailButtonHidden : 1;
	unsigned _useMediaDetailSlider : 1;
	unsigned _detailScrubbing : 1;
	unsigned _needsUpdateButtonVisibility : 1;
	unsigned long long _disabledParts;

}

@property (assign,nonatomic,__weak) id<MPPlaybackControlsDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long disabledParts;                            //@synthesize disabledParts=_disabledParts - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                             //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) MPAVController * player;                                     //@synthesize player=_player - In the implementation block
@property (assign,nonatomic) unsigned long long visibleParts;                             //@synthesize visibleParts=_visibleParts - In the implementation block
@property (nonatomic,readonly) BOOL shuffleIsOn; 
@property (nonatomic,readonly) BOOL hideGeniusButton; 
@property (nonatomic,readonly) BOOL isScrubbing; 
@property (nonatomic,readonly) NSString * localizedScrubSpeedText; 
@property (nonatomic,readonly) UIImage * mailButtonImage; 
@property (nonatomic,readonly) BOOL shouldOverrideProgressTimeLabelStyle; 
@property (nonatomic,readonly) UIImage * repeatButtonImage; 
@property (nonatomic,readonly) long long repeatType; 
@property (nonatomic,readonly) UIImage * shuffleButtonImage; 
@property (nonatomic,readonly) long long shuffleType; 
@property (nonatomic,readonly) BOOL detailScrubbingHidesControls; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)defaultVisibleParts;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MPPlaybackControlsDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(id<MPPlaybackControlsDelegate>)delegate;
-(MPAVItem *)item;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)didMoveToSuperview;
-(long long)buttonType;
-(void)setItem:(MPAVItem *)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(unsigned long long)visibleParts;
-(void)setVisibleParts:(unsigned long long)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(long long)repeatType;
-(long long)shuffleType;
-(void)crossedTimeMakerWithEvent:(id)arg1 ;
-(void)registerForPlayerNotifications;
-(void)unregisterForPlayerNotifications;
-(unsigned long long)disabledParts;
-(void)stopTicking;
-(void)startTicking;
-(void)_itemDurationDidChangeNotification:(id)arg1 ;
-(void)_validityChangedNotification:(id)arg1 ;
-(Class)buttonClass;
-(id)newButtonForPart:(unsigned long long)arg1 ;
-(NSString *)localizedScrubSpeedText;
-(void)detailSliderTrackingDidBegin:(id)arg1 ;
-(void)detailSliderTrackingDidEnd:(id)arg1 ;
-(void)detailSliderTrackingDidCancel:(id)arg1 ;
-(void)detailSlider:(id)arg1 didChangeValue:(float)arg2 ;
-(void)detailSlider:(id)arg1 didChangeScrubSpeed:(long long)arg2 ;
-(unsigned long long)displayablePartsInPartMask:(unsigned long long)arg1 ;
-(void)reloadControls;
-(void)_setVisiblePartsNeedReload;
-(void)_isGeniusEnabledDidChangeNotification:(id)arg1 ;
-(void)_unregisterForAVItemNotifications;
-(void)_updateButtonVisibility;
-(void)_fastForwardButton:(id)arg1 ;
-(void)_rewindButton:(id)arg1 ;
-(void)_geniusButton:(id)arg1 ;
-(id)geniusButtonImageForControlState:(unsigned long long)arg1 ;
-(void)_mailButton:(id)arg1 ;
-(UIImage *)mailButtonImage;
-(void)_playbackSpeedButton:(id)arg1 ;
-(void)_repeatButton:(id)arg1 ;
-(UIImage *)repeatButtonImage;
-(void)_shuffleButton:(id)arg1 ;
-(UIImage *)shuffleButtonImage;
-(BOOL)progressBarClipsToChapterDuration;
-(double)_currentDisplayTime;
-(double)_updatedDisplayDurationForTime:(double)arg1 preciseChapterMarkers:(BOOL)arg2 ;
-(void)_resetGeniusButtonImages;
-(BOOL)detailScrubbingHidesControls;
-(void)updateForEndOfDetailScrubbing;
-(BOOL)shuffleIsOn;
-(void)_setCurrentTime:(double)arg1 duration:(double)arg2 ;
-(void)_contentsChangedNotification:(id)arg1 ;
-(void)_playbackModeDidChangeNotification:(id)arg1 ;
-(void)_tickNotification:(id)arg1 ;
-(BOOL)shouldOverrideProgressTimeLabelStyle;
-(void)_registerForAVItemNotifications;
-(void)_handleGeniusButtonClick;
-(void)_updateForPlaybackSpeed;
-(void)handleChangeToRepeatType:(long long)arg1 ;
-(void)_addOpacityAnimationToBezelView:(id)arg1 reversed:(BOOL)arg2 ;
-(void)handleChangeToShuffleType:(long long)arg1 ;
-(void)resetDetailSlider:(id)arg1 ;
-(void)reloadView;
-(id)newButtonBezelViewForPart:(unsigned long long)arg1 ;
-(id)newTrackInfoLabel;
-(id)newProgressIndicator;
-(BOOL)hideGeniusButton;
-(id)playbackSpeedButtonImageForPlaybackSpeed:(long long)arg1 ;
-(id)playbackSpeedTitleForPlaybackSpeed:(long long)arg1 ;
-(void)reloadButtonVisibility;
-(void)_changeGeniusImageToPressedImage:(id)arg1 ;
-(void)_changeGeniusImageToNormalImage:(id)arg1 ;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(void)setCurrentTime:(double)arg1 ;
-(BOOL)isScrubbing;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
@end

