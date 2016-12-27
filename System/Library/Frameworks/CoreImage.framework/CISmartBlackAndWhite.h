/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:31 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISmartBlackAndWhite : CIFilter {

	CIImage* inputImage;
	NSNumber* inputStrength;
	NSNumber* inputNeutralGamma;
	NSNumber* inputTone;
	NSNumber* inputHue;
	NSNumber* inputGrain;
	NSNumber* inputSeed;
	NSNumber* inputScaleFactor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSNumber * inputStrength; 
@property (nonatomic,copy) NSNumber * inputNeutralGamma; 
@property (nonatomic,copy) NSNumber * inputTone; 
@property (nonatomic,copy) NSNumber * inputHue; 
@property (nonatomic,copy) NSNumber * inputGrain; 
@property (nonatomic,copy) NSNumber * inputSeed; 
@property (nonatomic,copy) NSNumber * inputScaleFactor; 
+(id)customAttributes;
-(id)_kernel;
-(void)getNonNormalizedSettings:(SCD_Struct_CI17*)arg1 ;
-(float*)createHueArray;
-(id)hueArrayImage:(float*)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(NSNumber *)inputTone;
-(void)setInputTone:(NSNumber *)arg1 ;
-(NSNumber *)inputHue;
-(void)setInputHue:(NSNumber *)arg1 ;
-(NSNumber *)inputGrain;
-(void)setInputGrain:(NSNumber *)arg1 ;
-(NSNumber *)inputSeed;
-(void)setInputSeed:(NSNumber *)arg1 ;
-(NSNumber *)inputScaleFactor;
-(void)setInputScaleFactor:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(void)setInputImage:(CIImage *)arg1 ;
@end

