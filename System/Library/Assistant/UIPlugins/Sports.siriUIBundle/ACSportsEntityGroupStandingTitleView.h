/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:49:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Assistant/UIPlugins/Sports.siriUIBundle/Sports
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sports/Sports-Structs.h>
#import <Sports/ACSportsEntityView.h>

@class UILabel, SASportsEntityGroup;

@interface ACSportsEntityGroupStandingTitleView : ACSportsEntityView {

	UILabel* _nameLabel;

}

@property (nonatomic,retain) SASportsEntityGroup * entity; 
-(void)didChangeEntityFromEntity:(id)arg1 ;
-(BOOL)supportsDisplayOfDomainObject:(id)arg1 league:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(double)contentHeight;
@end

