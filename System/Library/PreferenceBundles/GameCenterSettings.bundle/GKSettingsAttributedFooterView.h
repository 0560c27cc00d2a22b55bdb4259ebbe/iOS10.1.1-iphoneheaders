/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/GameCenterSettings.bundle/GameCenterSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class PSSpecifier, NSString, GKTextStyle, GKLabel;

@interface GKSettingsAttributedFooterView : UIView <PSHeaderFooterView> {

	PSSpecifier* _specifier;
	NSString* _text;
	GKTextStyle* _textStyle;
	GKLabel* _label;

}

@property (nonatomic,retain) GKLabel * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) PSSpecifier * specifier; 
@property (nonatomic,retain) NSString * text;                               //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) GKTextStyle * textStyle;                       //@synthesize textStyle=_textStyle - In the implementation block
@property (nonatomic,readonly) GKTextStyle * defaultTextStyle; 
-(id)attributedStringForString:(id)arg1 ;
-(PSSpecifier *)specifier;
-(void)layoutSubviews;
-(void)dealloc;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(GKLabel *)label;
-(void)setLabel:(GKLabel *)arg1 ;
-(GKTextStyle *)textStyle;
-(void)setTextStyle:(GKTextStyle *)arg1 ;
-(GKTextStyle *)defaultTextStyle;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 inTableView:(id)arg2 ;
@end

