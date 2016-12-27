/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsLoadingImageView, UILabel, SiriUIKeyline, SASportsTeam;

@interface ACSportsTeamHeaderView : ACSportsEntityView {

	ACSportsLoadingImageView* _teamLogoImageView;
	UILabel* _headerLabel;
	UILabel* _subtitleLabel;
	SiriUIKeyline* _headerKeyline;
	UILabel* _numberHeader;
	UILabel* _playerHeader;
	UILabel* _positionHeader;
	UILabel* _heightHeader;
	UILabel* _weightHeader;
	BOOL _hidePlayerImages;

}

@property (nonatomic,retain) SASportsTeam * entity; 
@property (assign,nonatomic) BOOL hidePlayerImages;              //@synthesize hidePlayerImages=_hidePlayerImages - In the implementation block
-(BOOL)hidePlayerImages;
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(void)setHidePlayerImages:(BOOL)arg1 ;
-(BOOL)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(double)_legendHeight;
-(id)_addedLabelWithFrame:(CGRect)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)contentHeight;
@end

