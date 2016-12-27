/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIMaskedVariableBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputMask;
	NSNumber* inputRadius;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIImage * inputMask; 
@property (nonatomic,retain) NSNumber * inputRadius; 
+(id)customAttributes;
-(id)_kernelD2;
-(BOOL)_isIdentity;
-(id)downTwo:(id)arg1 ;
-(id)upCubic:(id)arg1 scale:(float)arg2 ;
-(id)_kernelCombine;
-(CIImage *)inputMask;
-(void)setInputMask:(CIImage *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
-(void)setInputImage:(CIImage *)arg1 ;
@end

