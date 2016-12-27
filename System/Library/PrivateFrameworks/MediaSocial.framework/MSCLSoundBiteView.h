/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaSocial/MediaSocial-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MSCLProximityObserver.h>

@protocol MSCLSoundBiteViewDelegate;
@class UIView, MSCLSoundBiteViewButton, UIImageView, UIButton, UILabel, CMKShutterButton, MSCLWaveformImageProducer, NSString;

@interface MSCLSoundBiteView : UIView <MSCLProximityObserver> {

	UIView* _backgroundView;
	id<MSCLSoundBiteViewDelegate> _delegate;
	BOOL _detectedFaceProximity;
	MSCLSoundBiteViewButton* _explicitToggleButton;
	BOOL _isExplicit;
	BOOL _isObservingProximity;
	long long _mode;
	float _playbackProgress;
	UIImageView* _playbackProgressImageView;
	UIButton* _playButton;
	UILabel* _promptLabel;
	UILabel* _promptExplicitLabel;
	UIButton* _recordButton;
	double _recordingTimeLabelWidth;
	CMKShutterButton* _stopRecordingIndicator;
	UILabel* _timeLabel;
	UIView* _waveformBackgroundView;
	MSCLWaveformImageProducer* _waveformImageProducer;
	UIImageView* _waveformImageView;

}

@property (assign,nonatomic,__weak) id<MSCLSoundBiteViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isExplicit;                                            //@synthesize isExplicit=_isExplicit - In the implementation block
@property (assign,nonatomic) long long mode;                                             //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) float playbackProgress;                                     //@synthesize playbackProgress=_playbackProgress - In the implementation block
@property (nonatomic,copy) NSString * promptString; 
@property (nonatomic,copy) NSString * timeString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setDelegate:(id<MSCLSoundBiteViewDelegate>)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MSCLSoundBiteViewDelegate>)delegate;
-(void)tintColorDidChange;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(float)playbackProgress;
-(void)setPlaybackProgress:(float)arg1 ;
-(void)setIsExplicit:(BOOL)arg1 ;
-(void)setPromptString:(NSString *)arg1 ;
-(NSString *)promptString;
-(BOOL)isExplicit;
-(void)_playButtonAction:(id)arg1 ;
-(void)proximityCoordinatorStateDidChange:(id)arg1 ;
-(void)setExplictButtonTitle:(id)arg1 ;
-(void)setExplictPromptString:(id)arg1 ;
-(void)reserveSpaceForRecordingTimes:(long long)arg1 timeFormat:(id)arg2 ;
-(void)setTimeString:(NSString *)arg1 ;
-(void)setWaveformImageUsingProducer:(id)arg1 ;
-(void)_recordButtonTouchDown:(id)arg1 ;
-(void)_recordButtonTouchUp:(id)arg1 ;
-(void)_toggleExplicit:(id)arg1 ;
-(BOOL)_showsPlaybackProgress;
-(void)_sendFaceProximityDidEnd;
-(void)_sendFaceProximityDidBegin;
-(NSString *)timeString;
@end

