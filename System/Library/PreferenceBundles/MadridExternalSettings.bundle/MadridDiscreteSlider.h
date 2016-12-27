/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:51 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PreferenceBundles/MadridExternalSettings.bundle/MadridExternalSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MadridExternalSettings/MadridExternalSettings-Structs.h>
#import <UIKit/UISlider.h>

@class UIColor;

@interface MadridDiscreteSlider : UISlider {

	UIColor* _trackMarkersColor;

}

@property (nonatomic,retain) UIColor * trackMarkersColor;              //@synthesize trackMarkersColor=_trackMarkersColor - In the implementation block
-(void)setTrackMarkersColor:(UIColor *)arg1 ;
-(UIColor *)trackMarkersColor;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGRect)trackRectForBounds:(CGRect)arg1 ;
-(CGRect)thumbRectForBounds:(CGRect)arg1 trackRect:(CGRect)arg2 value:(float)arg3 ;
-(void)setValue:(float)arg1 animated:(BOOL)arg2 ;
-(void)sliderTapped:(id)arg1 ;
@end

