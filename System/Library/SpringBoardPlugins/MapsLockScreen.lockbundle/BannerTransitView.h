/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:37 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/SpringBoardPlugins/MapsLockScreen.lockbundle/MapsLockScreen
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsLockScreen/BannerView.h>

@class _MKUILabel, TransitBannerItem;

@interface BannerTransitView : BannerView {

	_MKUILabel* _titleLabel;
	_MKUILabel* _subtitleLabel;

}

@property (nonatomic,retain) _MKUILabel * titleLabel;                              //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) _MKUILabel * subtitleLabel;                           //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,readonly) TransitBannerItem * transitBannerItem; 
-(void)updateFromBannerItem;
-(TransitBannerItem *)transitBannerItem;
-(_MKUILabel *)titleLabel;
-(id)initWithContext:(id)arg1 ;
-(void)setTitleLabel:(_MKUILabel *)arg1 ;
-(void)setSubtitleLabel:(_MKUILabel *)arg1 ;
-(_MKUILabel *)subtitleLabel;
@end

