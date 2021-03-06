/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MarkupUI.framework/MarkupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MarkupUI/MarkupUI-Structs.h>
@interface MUPDFUtilities : NSObject
+(unsigned long long)indexOfDictionary:(CGPDFDictionaryRef)arg1 inArray:(CGPDFArrayRef)arg2 ;
+(unsigned long long)normalizedRotationAngleOfPage:(CGPDFPageRef)arg1 ;
+(id)createPDFDateString:(id)arg1 ;
+(id)createDictionaryFromPDFDictionary:(CGPDFDictionaryRef)arg1 ;
+(long long)exifOrientationOfPage:(CGPDFPageRef)arg1 ;
+(CGAffineTransform)flattenRotationTransformForPage:(CGPDFPageRef)arg1 outMediaBox:(CGRect*)arg2 outCropBox:(CGRect*)arg3 ;
@end

