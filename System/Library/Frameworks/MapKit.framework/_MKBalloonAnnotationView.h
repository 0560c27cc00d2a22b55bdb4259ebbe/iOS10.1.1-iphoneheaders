/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:07 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKAnnotationView.h>

@class UIColor, CALayer, UIImageView, UIImage, _MKBalloonCalloutView, UIView;

@interface _MKBalloonAnnotationView : MKAnnotationView {

	UIColor* _balloonTintColor;
	UIColor* _balloonStrokeColor;
	CALayer* _baseLayer;
	UIImageView* _smallImageView;
	UIImage* _largeImage;
	long long _style;
	_MKBalloonCalloutView* _calloutView;

}

@property (nonatomic,copy) UIColor * balloonTintColor;                //@synthesize balloonTintColor=_balloonTintColor - In the implementation block
@property (nonatomic,copy) UIColor * balloonStrokeColor;              //@synthesize balloonStrokeColor=_balloonStrokeColor - In the implementation block
@property (nonatomic,copy) UIImage * smallImage; 
@property (nonatomic,copy) UIImage * largeImage;                      //@synthesize largeImage=_largeImage - In the implementation block
@property (nonatomic,retain) UIView * contentView; 
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)contentView;
-(void)didMoveToWindow;
-(CGSize)intrinsicContentSize;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithAnnotation:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3 ;
-(void)setBalloonTintColor:(UIColor *)arg1 ;
-(void)setBalloonStrokeColor:(UIColor *)arg1 ;
-(UIImage *)smallImage;
-(void)setSmallImage:(UIImage *)arg1 ;
-(void)setLargeImage:(UIImage *)arg1 ;
-(id)_baseTransitionAnimation:(BOOL)arg1 ;
-(void)_updateBaseImage;
-(UIColor *)balloonTintColor;
-(UIColor *)balloonStrokeColor;
-(UIImage *)largeImage;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end

