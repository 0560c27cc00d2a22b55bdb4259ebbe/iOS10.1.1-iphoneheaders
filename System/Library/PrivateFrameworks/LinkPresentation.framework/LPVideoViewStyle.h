/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:06 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPImageViewStyle, LPPadding, UIColor, CAMediaTimingFunction;

@interface LPVideoViewStyle : NSObject {

	LPImageViewStyle* _playButton;
	double _disabledPlayButtonOpacity;
	LPImageViewStyle* _muteButton;
	LPPadding* _muteButtonPadding;
	double _muteButtonOpacity;
	double _muteButtonHighlightedOpacity;
	UIColor* _pulsingLoadIndicatorColor;
	double _pulsingLoadIndicatorMaximumOpacity;
	double _pulsingLoadIndicatorDuration;
	CAMediaTimingFunction* _pulsingLoadIndicatorTimingFunction;

}

@property (nonatomic,readonly) LPImageViewStyle * playButton;                                         //@synthesize playButton=_playButton - In the implementation block
@property (assign,nonatomic) double disabledPlayButtonOpacity;                                        //@synthesize disabledPlayButtonOpacity=_disabledPlayButtonOpacity - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * muteButton;                                         //@synthesize muteButton=_muteButton - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * muteButtonPadding;                                  //@synthesize muteButtonPadding=_muteButtonPadding - In the implementation block
@property (assign,nonatomic) double muteButtonOpacity;                                                //@synthesize muteButtonOpacity=_muteButtonOpacity - In the implementation block
@property (assign,nonatomic) double muteButtonHighlightedOpacity;                                     //@synthesize muteButtonHighlightedOpacity=_muteButtonHighlightedOpacity - In the implementation block
@property (nonatomic,retain) UIColor * pulsingLoadIndicatorColor;                                     //@synthesize pulsingLoadIndicatorColor=_pulsingLoadIndicatorColor - In the implementation block
@property (assign,nonatomic) double pulsingLoadIndicatorMaximumOpacity;                               //@synthesize pulsingLoadIndicatorMaximumOpacity=_pulsingLoadIndicatorMaximumOpacity - In the implementation block
@property (assign,nonatomic) double pulsingLoadIndicatorDuration;                                     //@synthesize pulsingLoadIndicatorDuration=_pulsingLoadIndicatorDuration - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * pulsingLoadIndicatorTimingFunction;              //@synthesize pulsingLoadIndicatorTimingFunction=_pulsingLoadIndicatorTimingFunction - In the implementation block
-(id)init;
-(LPImageViewStyle *)playButton;
-(LPPadding *)muteButtonPadding;
-(UIColor *)pulsingLoadIndicatorColor;
-(double)pulsingLoadIndicatorMaximumOpacity;
-(double)pulsingLoadIndicatorDuration;
-(CAMediaTimingFunction *)pulsingLoadIndicatorTimingFunction;
-(double)muteButtonOpacity;
-(double)disabledPlayButtonOpacity;
-(double)muteButtonHighlightedOpacity;
-(void)setDisabledPlayButtonOpacity:(double)arg1 ;
-(LPImageViewStyle *)muteButton;
-(void)setMuteButtonOpacity:(double)arg1 ;
-(void)setMuteButtonHighlightedOpacity:(double)arg1 ;
-(void)setPulsingLoadIndicatorColor:(UIColor *)arg1 ;
-(void)setPulsingLoadIndicatorMaximumOpacity:(double)arg1 ;
-(void)setPulsingLoadIndicatorDuration:(double)arg1 ;
-(void)setPulsingLoadIndicatorTimingFunction:(CAMediaTimingFunction *)arg1 ;
@end

