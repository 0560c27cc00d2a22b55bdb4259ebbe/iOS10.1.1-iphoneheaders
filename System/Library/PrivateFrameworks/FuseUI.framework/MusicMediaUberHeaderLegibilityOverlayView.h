/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:05 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FuseUI/FuseUI-Structs.h>
#import <UIKit/UIView.h>

@class MPUGradientView, UIColor, NSString;

@interface MusicMediaUberHeaderLegibilityOverlayView : UIView {

	MPUGradientView* _bottomGradientView;
	double _radialGradientEdgeElevation;
	double _radialGradientHeight;
	UIColor* _bottomGradientColor;
	NSString* _bottomGradientType;
	UIColor* _topGradientColor;

}

@property (nonatomic,retain) UIColor * bottomGradientColor;              //@synthesize bottomGradientColor=_bottomGradientColor - In the implementation block
@property (nonatomic,copy) NSString * bottomGradientType;                //@synthesize bottomGradientType=_bottomGradientType - In the implementation block
@property (nonatomic,retain) UIColor * topGradientColor;                 //@synthesize topGradientColor=_topGradientColor - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTopGradientColor:(UIColor *)arg1 ;
-(void)setBottomGradientColor:(UIColor *)arg1 ;
-(UIColor *)topGradientColor;
-(UIColor *)bottomGradientColor;
-(void)setBottomGradientType:(NSString *)arg1 ;
-(void)_updateGradientLayers;
-(NSString *)bottomGradientType;
@end

