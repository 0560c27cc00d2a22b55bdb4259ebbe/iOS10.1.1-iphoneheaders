/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector;

@interface CIColorMatrix : CIFilter {

	CIImage* inputImage;
	CIVector* inputRVector;
	CIVector* inputGVector;
	CIVector* inputBVector;
	CIVector* inputAVector;
	CIVector* inputBiasVector;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputRVector; 
@property (nonatomic,retain) CIVector * inputGVector; 
@property (nonatomic,retain) CIVector * inputBVector; 
@property (nonatomic,retain) CIVector * inputAVector; 
@property (nonatomic,retain) CIVector * inputBiasVector; 
+(id)customAttributes;
-(CIVector *)inputRVector;
-(void)setInputRVector:(CIVector *)arg1 ;
-(CIVector *)inputGVector;
-(void)setInputGVector:(CIVector *)arg1 ;
-(CIVector *)inputBVector;
-(void)setInputBVector:(CIVector *)arg1 ;
-(CIVector *)inputAVector;
-(void)setInputAVector:(CIVector *)arg1 ;
-(CIVector *)inputBiasVector;
-(void)setInputBiasVector:(CIVector *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

