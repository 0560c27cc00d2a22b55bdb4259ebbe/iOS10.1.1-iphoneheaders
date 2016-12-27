/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:49 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIColor, CAMediaTimingFunction;

@interface NTKColorCurveElement : NSObject {

	float _fraction;
	UIColor* _color;
	CAMediaTimingFunction* _timingFunction;

}

@property (nonatomic,retain) UIColor * color;                                     //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) float fraction;                                      //@synthesize fraction=_fraction - In the implementation block
@property (nonatomic,retain) CAMediaTimingFunction * timingFunction;              //@synthesize timingFunction=_timingFunction - In the implementation block
-(CAMediaTimingFunction *)timingFunction;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setTimingFunction:(CAMediaTimingFunction *)arg1 ;
-(void)setFraction:(float)arg1 ;
-(float)fraction;
-(id)initWithColor:(id)arg1 fraction:(float)arg2 ;
@end

