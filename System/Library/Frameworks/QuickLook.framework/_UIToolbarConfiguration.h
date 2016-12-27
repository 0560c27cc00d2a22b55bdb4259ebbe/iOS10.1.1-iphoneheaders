/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:35 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, UIColor;

@interface _UIToolbarConfiguration : NSObject {

	long long _barStyle;
	UIImage* _shadowImage;
	UIImage* _backgroundImage;
	UIColor* _backgroundColor;
	UIColor* _barTintColor;

}

@property (assign,nonatomic) long long barStyle;                     //@synthesize barStyle=_barStyle - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                  //@synthesize shadowImage=_shadowImage - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;              //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * barTintColor;                 //@synthesize barTintColor=_barTintColor - In the implementation block
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(UIImage *)backgroundImage;
-(UIImage *)shadowImage;
-(void)setShadowImage:(UIImage *)arg1 ;
-(void)setBarStyle:(long long)arg1 ;
-(void)setBarTintColor:(UIColor *)arg1 ;
-(long long)barStyle;
-(UIColor *)barTintColor;
-(void)setBackgroundImage:(UIImage *)arg1 ;
@end
