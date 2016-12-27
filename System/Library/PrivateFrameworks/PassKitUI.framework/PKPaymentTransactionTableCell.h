/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKTableViewCell.h>

@class UILabel, UIColor, NSString;

@interface PKPaymentTransactionTableCell : PKTableViewCell {

	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _transactionValueLabel;
	UILabel* _tertiaryLabel;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	UIColor* _tertiaryColor;
	UIColor* _transactionValueColor;
	NSString* _primaryString;
	NSString* _secondaryString;
	NSString* _tertiaryString;
	NSString* _transactionValueString;

}

@property (nonatomic,retain) UIColor * primaryColor;                         //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                       //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (nonatomic,retain) UIColor * tertiaryColor;                        //@synthesize tertiaryColor=_tertiaryColor - In the implementation block
@property (nonatomic,retain) UIColor * transactionValueColor;                //@synthesize transactionValueColor=_transactionValueColor - In the implementation block
@property (nonatomic,retain) NSString * primaryString;                       //@synthesize primaryString=_primaryString - In the implementation block
@property (nonatomic,retain) NSString * secondaryString;                     //@synthesize secondaryString=_secondaryString - In the implementation block
@property (nonatomic,retain) NSString * tertiaryString;                      //@synthesize tertiaryString=_tertiaryString - In the implementation block
@property (nonatomic,retain) NSString * transactionValueString;              //@synthesize transactionValueString=_transactionValueString - In the implementation block
+(double)rowHeight;
+(id)secondaryLabelFont;
+(id)primaryLabelFont;
+(id)transactionValueLabelFont;
+(id)tertiaryLabelFont;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)prepareForReuse;
-(UIColor *)primaryColor;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)secondaryColor;
-(id)defaultPrimaryColor;
-(id)defaultSecondaryColor;
-(id)defaultTransactionValueColor;
-(id)defaultTertiaryColor;
-(UIColor *)tertiaryColor;
-(UIColor *)transactionValueColor;
-(void)setTertiaryColor:(UIColor *)arg1 ;
-(void)setTransactionValueColor:(UIColor *)arg1 ;
-(void)setPrimaryString:(NSString *)arg1 ;
-(void)setSecondaryString:(NSString *)arg1 ;
-(void)setTertiaryString:(NSString *)arg1 ;
-(void)setTransactionValueString:(NSString *)arg1 ;
-(NSString *)primaryString;
-(NSString *)secondaryString;
-(NSString *)tertiaryString;
-(NSString *)transactionValueString;
@end

