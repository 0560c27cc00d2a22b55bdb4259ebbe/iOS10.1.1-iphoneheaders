/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor;

@interface MKViewWithHairline : UIView {

	UIView* _bottomHairline;
	UIView* _topHairline;
	UIColor* _hairlineColor;
	double _leftHairlineInset;
	double _rightHairlineInset;

}

@property (nonatomic,retain) UIColor * hairlineColor;                                              //@synthesize hairlineColor=_hairlineColor - In the implementation block
@property (assign,nonatomic) double leftHairlineInset;                                             //@synthesize leftHairlineInset=_leftHairlineInset - In the implementation block
@property (assign,nonatomic) double rightHairlineInset;                                            //@synthesize rightHairlineInset=_rightHairlineInset - In the implementation block
@property (assign,getter=isTopHairlineHidden,nonatomic) BOOL topHairlineHidden; 
@property (assign,getter=isBottomHairlineHidden,nonatomic) BOOL bottomHairlineHidden; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)isBottomHairlineHidden;
-(void)setBottomHairlineHidden:(BOOL)arg1 ;
-(void)setHairlineColor:(UIColor *)arg1 ;
-(void)setLeftHairlineInset:(double)arg1 ;
-(void)setRightHairlineInset:(double)arg1 ;
-(void)setTopHairlineHidden:(BOOL)arg1 ;
-(BOOL)isTopHairlineHidden;
-(UIColor *)hairlineColor;
-(double)leftHairlineInset;
-(double)rightHairlineInset;
@end

