/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:53:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UILabel;

@interface TTYAbbreviationCell : UICollectionViewCell {

	UILabel* _abbreviation;
	UILabel* _hint;

}

@property (nonatomic,retain) UILabel * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,retain) UILabel * hint;                      //@synthesize hint=_hint - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(id)accessibilityIdentifier;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(UILabel *)abbreviation;
-(void)setAbbreviationData:(id)arg1 ;
-(id)abbreviationText;
-(void)setAbbreviation:(UILabel *)arg1 ;
-(void)setHint:(UILabel *)arg1 ;
-(UILabel *)hint;
@end

