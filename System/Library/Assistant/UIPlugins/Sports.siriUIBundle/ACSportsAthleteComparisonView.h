/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class ACSportsLoadingImageView, UILabel;

@interface ACSportsAthleteComparisonView : SiriUIContentCollectionViewCell {

	ACSportsLoadingImageView* _headShotView;
	UILabel* _playerLabel;
	UILabel* _statLabel;
	BOOL _showPlayerImage;

}

@property (assign,nonatomic) BOOL showPlayerImage;              //@synthesize showPlayerImage=_showPlayerImage - In the implementation block
+(double)contentHeight;
-(BOOL)showPlayerImage;
-(void)setShowPlayerImage:(BOOL)arg1 ;
-(void)configureWithAthlete:(id)arg1 snippetItemDetails:(id)arg2 ;
-(void)setStatisticEmphasized:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
@end

