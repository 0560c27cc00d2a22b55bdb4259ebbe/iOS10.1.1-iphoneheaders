/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIVector, CIColor;

@interface CISmoothLinearGradient : CIFilter {

	CIVector* inputPoint0;
	CIVector* inputPoint1;
	CIColor* inputColor0;
	CIColor* inputColor1;

}

@property (nonatomic,retain) CIVector * inputPoint0; 
@property (nonatomic,retain) CIVector * inputPoint1; 
@property (nonatomic,retain) CIColor * inputColor0; 
@property (nonatomic,retain) CIColor * inputColor1; 
+(id)customAttributes;
-(CIVector *)inputPoint0;
-(CIVector *)inputPoint1;
-(id)_kernel;
-(CIColor *)inputColor0;
-(void)setInputColor0:(CIColor *)arg1 ;
-(CIColor *)inputColor1;
-(void)setInputColor1:(CIColor *)arg1 ;
-(void)setInputPoint0:(CIVector *)arg1 ;
-(void)setInputPoint1:(CIVector *)arg1 ;
-(id)outputImage;
@end

