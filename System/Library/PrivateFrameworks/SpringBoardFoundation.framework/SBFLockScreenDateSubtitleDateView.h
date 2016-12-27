/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <SpringBoardFoundation/SBFLockScreenDateSubtitleView.h>

@class NSDate, SBUILegibilityLabel;

@interface SBFLockScreenDateSubtitleDateView : SBFLockScreenDateSubtitleView {

	NSDate* _date;
	SBUILegibilityLabel* _alternateDateLabel;
	double _alignmentPercent;

}

@property (nonatomic,retain) SBUILegibilityLabel * alternateDateLabel;              //@synthesize alternateDateLabel=_alternateDateLabel - In the implementation block
@property (assign,nonatomic) double alignmentPercent;                               //@synthesize alignmentPercent=_alignmentPercent - In the implementation block
@property (nonatomic,retain) NSDate * date;                                         //@synthesize date=_date - In the implementation block
-(void)layoutSubviews;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSDate *)date;
-(void)setDate:(NSDate *)arg1 ;
-(void)setLegibilitySettings:(id)arg1 ;
-(void)setStrength:(double)arg1 ;
-(id)replicate;
-(void)_setupAlternateDateLabel;
-(BOOL)_showAlternateDate;
-(id)_alternateDateString;
-(void)setAlignmentPercent:(double)arg1 ;
-(CGRect)alternateDateLabelFrame;
-(double)_lunarDateLabelYOffsetFromDateLabel;
-(CGRect)subtitleLabelFrame;
-(id)_lunarCalendarIdentifier;
-(id)_createReplicateView;
-(SBUILegibilityLabel *)alternateDateLabel;
-(void)setAlternateDateLabel:(SBUILegibilityLabel *)arg1 ;
-(double)alignmentPercent;
-(id)initWithDate:(id)arg1 ;
@end

