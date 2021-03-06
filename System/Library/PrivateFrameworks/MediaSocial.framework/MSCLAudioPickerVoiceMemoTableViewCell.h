/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:21 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, SKUIPlayButton, NSString;

@interface MSCLAudioPickerVoiceMemoTableViewCell : UITableViewCell {

	UILabel* _creationDateLabel;
	UILabel* _durationLabel;
	SKUIPlayButton* _playButton;

}

@property (nonatomic,readonly) SKUIPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
@property (nonatomic,copy) NSString * creationDateString; 
@property (nonatomic,copy) NSString * durationString; 
@property (nonatomic,copy) NSString * titleString; 
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(NSString *)titleString;
-(void)setTitleString:(NSString *)arg1 ;
-(SKUIPlayButton *)playButton;
-(void)setDurationString:(NSString *)arg1 ;
-(void)setCreationDateString:(NSString *)arg1 ;
-(NSString *)creationDateString;
-(NSString *)durationString;
@end

