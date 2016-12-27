/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class ACSportsLoadingImageView, UILabel, UIImageView, SASportsAthlete;

@interface ACSportsTeamAthleteView : ACSportsEntityView {

	ACSportsLoadingImageView* _athleteImage;
	UILabel* _numberLabel;
	UILabel* _nameLabel;
	UILabel* _positionLabel;
	UILabel* _heightLabel;
	UILabel* _weightLabel;
	UIImageView* _chevronView;
	BOOL _hidePlayerImage;
	BOOL _alwaysUseFullName;

}

@property (nonatomic,retain) SASportsAthlete * entity; 
@property (assign,nonatomic) BOOL hidePlayerImage;                  //@synthesize hidePlayerImage=_hidePlayerImage - In the implementation block
@property (assign,nonatomic) BOOL alwaysUseFullName;                //@synthesize alwaysUseFullName=_alwaysUseFullName - In the implementation block
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(void)setHidePlayerImage:(BOOL)arg1 ;
-(void)setAlwaysUseFullName:(BOOL)arg1 ;
-(BOOL)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(BOOL)alwaysUseFullName;
-(BOOL)hidePlayerImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isSelectable;
-(double)contentHeight;
@end

