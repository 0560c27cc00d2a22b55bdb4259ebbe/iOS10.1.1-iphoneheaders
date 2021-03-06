/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:45 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/Assistant.bundle/Assistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

@interface AssistantVoiceDownloadingView : UIView {

	UIActivityIndicatorView* _indicator;
	UILabel* _downloadLabel;

}

@property (nonatomic,retain) UIActivityIndicatorView * indicator;              //@synthesize indicator=_indicator - In the implementation block
@property (nonatomic,retain) UILabel * downloadLabel;                          //@synthesize downloadLabel=_downloadLabel - In the implementation block
-(UILabel *)downloadLabel;
-(void)setDownloadLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)sizeToFit;
-(id)initWithActivityIndicatorStyle:(long long)arg1 ;
-(void)setIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)indicator;
@end

