/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:50:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CICodeGenerator.h>

@class NSNumber;

@interface CICode128BarcodeGenerator : CICodeGenerator {

	NSNumber* inputQuietSpace;
	NSNumber* inputBarcodeHeight;

}

@property (nonatomic,copy) NSNumber * inputQuietSpace; 
@property (nonatomic,copy) NSNumber * inputBarcodeHeight; 
+(id)customAttributes;
-(NSNumber *)inputQuietSpace;
-(void)setInputQuietSpace:(NSNumber *)arg1 ;
-(NSNumber *)inputBarcodeHeight;
-(void)setInputBarcodeHeight:(NSNumber *)arg1 ;
-(CGImageRef)outputCGImage;
@end
