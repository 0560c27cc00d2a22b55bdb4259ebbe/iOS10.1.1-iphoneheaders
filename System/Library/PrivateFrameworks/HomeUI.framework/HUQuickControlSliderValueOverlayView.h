/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:53 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface HUQuickControlSliderValueOverlayView : UIView {

	BOOL _off;
	BOOL _showsSecondGrabber;

}

@property (nonatomic,readonly) CAShapeLayer * layer; 
@property (assign,getter=isOff,nonatomic) BOOL off;                //@synthesize off=_off - In the implementation block
@property (assign,nonatomic) BOOL showsSecondGrabber;              //@synthesize showsSecondGrabber=_showsSecondGrabber - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setOff:(BOOL)arg1 ;
-(void)setShowsSecondGrabber:(BOOL)arg1 ;
-(void)_updateShape;
-(void)_updateBlendMode;
-(BOOL)showsSecondGrabber;
-(BOOL)isOff;
@end

