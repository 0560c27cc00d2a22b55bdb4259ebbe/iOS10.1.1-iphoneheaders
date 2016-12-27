/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:33 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CILanczosScaleTransform : CIFilter {

	CIImage* inputImage;
	NSNumber* inputScale;
	NSNumber* inputAspectRatio;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputScale; 
@property (nonatomic,retain) NSNumber * inputAspectRatio; 
+(id)customAttributes;
-(BOOL)_isIdentity;
-(id)_CILanczosDownBy2;
-(id)_CILanczosHorizontalUpsample;
-(id)_CILanczosVerticalUpsample;
-(NSNumber *)inputAspectRatio;
-(void)setInputAspectRatio:(NSNumber *)arg1 ;
-(id)outputImage;
-(CIImage *)inputImage;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
@end

