/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, NSLayoutConstraint, NSString;

@interface MKTransitAttributionSummaryCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _attributionLabel;
	NSLayoutConstraint* _topConstraint;
	NSLayoutConstraint* _bottomConstraint;

}

@property (nonatomic,copy) NSString * attributionSummary; 
-(void)dealloc;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)tintColorDidChange;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)setAttributionSummary:(NSString *)arg1 ;
-(NSString *)attributionSummary;
-(id)_moreString;
@end

