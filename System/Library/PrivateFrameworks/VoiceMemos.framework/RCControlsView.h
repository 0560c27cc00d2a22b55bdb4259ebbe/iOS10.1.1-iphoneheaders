/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceMemos/VoiceMemos-Structs.h>
#import <UIKit/UIView.h>

@protocol RCControlsViewDelegate;
@class RCAVState, RCLayoutMetrics, NSLayoutConstraint, UIButton, RCRecorderStateButton, UIAlertController, UIColor;

@interface RCControlsView : UIView {

	BOOL _showsBottomSeparatorLine;
	BOOL _canEnableCaptureButton;
	BOOL _canEnablePreviewButton;
	BOOL _canEnableDoneButton;
	BOOL _canRecord;
	id<RCControlsViewDelegate> _delegate;
	long long _controlsConfiguration;
	RCAVState* _AVState;
	RCLayoutMetrics* _layoutMetrics;
	double _topPadding;
	NSLayoutConstraint* _topPaddingCn;
	UIButton* _leftPlayStateButton;
	UIButton* _doneButton;
	RCRecorderStateButton* _recordingStateButton;
	UIAlertController* _noMicAlertViewController;
	UIColor* _bottomSeparatorLineColor;

}

@property (nonatomic,readonly) NSLayoutConstraint * topPaddingCn;                         //@synthesize topPaddingCn=_topPaddingCn - In the implementation block
@property (nonatomic,readonly) UIButton * leftPlayStateButton;                            //@synthesize leftPlayStateButton=_leftPlayStateButton - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) RCRecorderStateButton * recordingStateButton;              //@synthesize recordingStateButton=_recordingStateButton - In the implementation block
@property (nonatomic,readonly) UIAlertController * noMicAlertViewController;              //@synthesize noMicAlertViewController=_noMicAlertViewController - In the implementation block
@property (nonatomic,readonly) UIColor * bottomSeparatorLineColor;                        //@synthesize bottomSeparatorLineColor=_bottomSeparatorLineColor - In the implementation block
@property (assign,nonatomic) BOOL canRecord;                                              //@synthesize canRecord=_canRecord - In the implementation block
@property (assign,nonatomic,__weak) id<RCControlsViewDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long controlsConfiguration;                             //@synthesize controlsConfiguration=_controlsConfiguration - In the implementation block
@property (nonatomic,copy) RCAVState * AVState;                                           //@synthesize AVState=_AVState - In the implementation block
@property (nonatomic,retain) RCLayoutMetrics * layoutMetrics;                             //@synthesize layoutMetrics=_layoutMetrics - In the implementation block
@property (assign,nonatomic) double topPadding;                                           //@synthesize topPadding=_topPadding - In the implementation block
@property (assign,nonatomic) BOOL showsBottomSeparatorLine;                               //@synthesize showsBottomSeparatorLine=_showsBottomSeparatorLine - In the implementation block
@property (assign,nonatomic) BOOL canEnableCaptureButton;                                 //@synthesize canEnableCaptureButton=_canEnableCaptureButton - In the implementation block
@property (assign,nonatomic) BOOL canEnablePreviewButton;                                 //@synthesize canEnablePreviewButton=_canEnablePreviewButton - In the implementation block
@property (assign,nonatomic) BOOL canEnableDoneButton;                                    //@synthesize canEnableDoneButton=_canEnableDoneButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id<RCControlsViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<RCControlsViewDelegate>)delegate;
-(CGSize)intrinsicContentSize;
-(void)updateConstraints;
-(UIButton *)doneButton;
-(double)topPadding;
-(void)_doneButtonPressed:(id)arg1 ;
-(RCAVState *)AVState;
-(void)setAVState:(RCAVState *)arg1 ;
-(long long)_AVCaptureState;
-(void)setLayoutMetrics:(RCLayoutMetrics *)arg1 ;
-(RCLayoutMetrics *)layoutMetrics;
-(void)_recordingStateButtonPressed:(id)arg1 ;
-(id)_leftPlayStateImageForAVPreviewState:(long long)arg1 ;
-(void)_playStateButtonPressed:(id)arg1 ;
-(void)setCanRecord:(BOOL)arg1 ;
-(void)setControlsConfiguration:(long long)arg1 ;
-(void)_inputAvailabilityDidChangeNotification:(id)arg1 ;
-(UIButton *)leftPlayStateButton;
-(RCRecorderStateButton *)recordingStateButton;
-(void)_updateButtonsAnimated:(BOOL)arg1 ;
-(void)setControlsConfiguration:(long long)arg1 animate:(BOOL)arg2 ;
-(long long)_AVPreviewState;
-(BOOL)_isPreviewButtonEnabled;
-(BOOL)_isCaptureButtonEnabled;
-(BOOL)_isRecordingOrPausedRecording;
-(BOOL)canRecord;
-(void)setShowsBottomSeparatorLine:(BOOL)arg1 ;
-(void)setCanEnablePreviewButton:(BOOL)arg1 ;
-(void)setCanEnableCaptureButton:(BOOL)arg1 ;
-(void)setCanEnableDoneButton:(BOOL)arg1 ;
-(id)_recordButton;
-(void)performRecordButtonPress;
-(void)performFailedToStartRecordingActions;
-(long long)controlsConfiguration;
-(BOOL)showsBottomSeparatorLine;
-(BOOL)canEnableCaptureButton;
-(BOOL)canEnablePreviewButton;
-(BOOL)canEnableDoneButton;
-(NSLayoutConstraint *)topPaddingCn;
-(UIAlertController *)noMicAlertViewController;
-(UIColor *)bottomSeparatorLineColor;
-(void)setTopPadding:(double)arg1 ;
@end

