/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:52 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/ManagedConfigurationUI.bundle/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, NSArray;

@interface MCProfileKeyValueCell : UITableViewCell {

	UILabel* _keyLabel;
	UILabel* _valueLabel;
	NSArray* _constraints;

}

@property (nonatomic,retain) UILabel * keyLabel;                 //@synthesize keyLabel=_keyLabel - In the implementation block
@property (nonatomic,retain) UILabel * valueLabel;               //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) NSArray * constraints;              //@synthesize constraints=_constraints - In the implementation block
-(void)layoutSubviews;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSArray *)constraints;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(void)setValueLabel:(UILabel *)arg1 ;
-(UILabel *)valueLabel;
-(UILabel *)keyLabel;
-(void)setKeyLabel:(UILabel *)arg1 ;
-(void)_setup;
-(void)setKeyValue:(id)arg1 ;
-(void)_setupConstraints;
@end

