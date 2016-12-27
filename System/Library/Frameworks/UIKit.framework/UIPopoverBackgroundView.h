/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:08 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIPopoverBackgroundViewMethods.h>

@interface UIPopoverBackgroundView : UIView <UIPopoverBackgroundViewMethods> {

	BOOL __chromeHidden;

}

@property (assign,setter=_setChromeHidden:,nonatomic) BOOL _chromeHidden;              //@synthesize _chromeHidden=__chromeHidden - In the implementation block
@property (assign,nonatomic) double arrowOffset; 
@property (assign,nonatomic) unsigned long long arrowDirection; 
+(double)cornerRadius;
+(BOOL)wantsDefaultContentAppearance;
+(double)arrowHeight;
+(double)_contentViewCornerRadiusForArrowDirection:(unsigned long long)arg1 ;
+(double)arrowBase;
+(UIEdgeInsets)contentViewInsets;
-(void)layoutSubviews;
-(long long)backgroundStyle;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(double)_shadowRadius;
-(double)_shadowOpacity;
-(void)_setChromeHidden:(BOOL)arg1 ;
-(BOOL)_chromeHidden;
-(CGRect)_contentViewFrame;
-(CGSize)_shadowOffset;
-(unsigned long long)arrowDirection;
-(void)setArrowDirection:(unsigned long long)arg1 ;
-(void)setArrowOffset:(double)arg1 ;
-(double)arrowOffset;
-(UIEdgeInsets)_shadowInsets;
-(id)_shadowPath;
-(BOOL)_needsSeperateBlending;
-(void)_updateChrome;
-(UIEdgeInsets)_contentViewInsets;
-(id)_shadowPathForRect:(CGRect)arg1 arrowDirection:(unsigned long long)arg2 ;
-(CGRect)_backgroundContentViewFrame;
-(void)_updateShadow;
-(UIEdgeInsets)_contentViewInsetsForArrowDirection:(unsigned long long)arg1 ;
-(BOOL)_wantsDefaultContentAppearance;
@end

