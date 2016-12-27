/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:48 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKit/UIView.h>

@class _AdjustableLabel, CAGradientLayer, UIColor, NSString;

@interface NTKVictoryDigitsView : UIView {

	_AdjustableLabel* _mainLabel;
	_AdjustableLabel* _outlineBackgroundLabel;
	BOOL _hasSetAppearance;
	CAGradientLayer* _dimmingOverlay;
	BOOL _dimIsUpper;
	BOOL _lastDigitIs7;
	double _scale;
	long long _appearance;

}

@property (nonatomic,copy) UIColor * color; 
@property (nonatomic,copy) NSString * digitText; 
@property (assign,nonatomic) double scale;                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long appearance;              //@synthesize appearance=_appearance - In the implementation block
+(id)_cachedFontForAppearance:(long long)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(long long)appearance;
-(void)_updateFonts;
-(void)setAppearance:(long long)arg1 ;
-(id)_makeLabel;
-(void)prepareAppearance:(long long)arg1 ;
-(void)setDimmingFactor:(double)arg1 isUpper:(BOOL)arg2 ;
-(void)setDigitText:(NSString *)arg1 ;
-(NSString *)digitText;
@end

