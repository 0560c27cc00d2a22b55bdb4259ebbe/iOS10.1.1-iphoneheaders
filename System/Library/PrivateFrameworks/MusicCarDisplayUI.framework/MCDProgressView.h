/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MCDProgressBarView, NSLayoutConstraint;

@interface MCDProgressView : UIView {

	BOOL _progressActive;
	UILabel* _timeLabel;
	UILabel* _timeRemainingLabel;
	UILabel* _liveLabel;
	MCDProgressBarView* _progressBarView;
	NSLayoutConstraint* _leftConstant;
	NSLayoutConstraint* _rightConstant;
	float _progress;
	BOOL _isLiveStream;

}

@property (assign,nonatomic) BOOL isLiveStream;              //@synthesize isLiveStream=_isLiveStream - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_addConstraints;
-(void)setPlaybackTime:(double)arg1 duration:(double)arg2 ;
-(BOOL)isLiveStream;
-(void)setIsLiveStream:(BOOL)arg1 ;
@end

