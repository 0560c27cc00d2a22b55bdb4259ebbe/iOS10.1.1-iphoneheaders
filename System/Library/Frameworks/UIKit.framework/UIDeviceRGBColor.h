/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:54 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIColor.h>

@interface UIDeviceRGBColor : UIColor {

	double redComponent;
	double greenComponent;
	double blueComponent;
	double alphaComponent;
	CGColorRef _cachedColor;

}
-(CGColorRef)CGColor;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)colorWithAlphaComponent:(double)arg1 ;
-(BOOL)getWhite:(double*)arg1 alpha:(double*)arg2 ;
-(void)set;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)getRed:(double*)arg1 green:(double*)arg2 blue:(double*)arg3 alpha:(double*)arg4 ;
-(id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4 ;
-(void)setFill;
-(id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(double)alphaComponent;
-(void)setStroke;
-(BOOL)_isDeepColor;
-(id)initWithCGColor:(CGColorRef)arg1 ;
-(id)colorSpaceName;
-(CGColorRef)_createCGColorWithAlpha:(double)arg1 ;
-(BOOL)getHue:(double*)arg1 saturation:(double*)arg2 brightness:(double*)arg3 alpha:(double*)arg4 ;
@end

