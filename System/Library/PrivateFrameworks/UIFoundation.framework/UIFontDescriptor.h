/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:23 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableDictionary, NSString, NSDictionary;

@interface UIFontDescriptor : NSObject <NSCopying, NSSecureCoding> {

	NSMutableDictionary* _attributes;
	id _reserved1;
	id _reserved2;
	id _reserved3;
	id _reserved4;
	id _reserved5;

}

@property (nonatomic,readonly) NSString * postscriptName; 
@property (nonatomic,readonly) double pointSize; 
@property (nonatomic,readonly) CGAffineTransform matrix; 
@property (nonatomic,readonly) unsigned symbolicTraits; 
@property (nonatomic,readonly) NSDictionary * fontAttributes; 
+(id)_mapkit_fontRoundedColonFeature;
+(id)_mapkit_fontFeaturesForTimeDisplayUseMonospace:(BOOL)arg1 ;
+(id)_mapkit_fontFeaturesForTabularFigures;
+(id)_mapkit_fontMonospaceFeature;
+(id)_mapkit_fontFeaturesForTimeDisplay;
+(id)telephonyUIBodyShortFontDescriptor;
+(id)telephonyUISubheadlineShortFontDescriptor;
+(id)_createMungledDictionary:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 compatibleWithTraitCollection:(id)arg2 ;
+(id)fontDescriptorWithName:(id)arg1 matrix:(CGAffineTransform)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 ;
+(id)preferredFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 addingSymbolicTraits:(unsigned)arg2 options:(unsigned long long)arg3 ;
+(id)defaultFontDescriptorWithTextStyle:(id)arg1 ;
+(id)fontDescriptorWithFontAttributes:(id)arg1 ;
+(id)fontDescriptorWithName:(id)arg1 size:(double)arg2 ;
-(id)_mapkit_fontDescriptorByAddingFeaturesForTimeDisplayUseMonospace:(BOOL)arg1 ;
-(id)_mapkit_fontDescriptorByAddingFeaturesForTimeDisplay;
-(id)_mapkit_fontDescriptorByAddingFeaturesForTabularFigures;
-(id)_swapWithFontAttributes:(id)arg1 options:(unsigned long long)arg2 ;
-(id)initWithFontAttributes:(id)arg1 ;
-(id)matchingFontDescriptorsWithMandatoryKeys:(id)arg1 ;
-(id)matchingFontDescriptorWithMandatoryKeys:(id)arg1 ;
-(id)fontDescriptorWithSize:(double)arg1 ;
-(id)fontDescriptorWithMatrix:(CGAffineTransform)arg1 ;
-(id)_visibleName;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)classForCoder;
-(double)pointSize;
-(id)fontDescriptorWithSymbolicTraits:(unsigned)arg1 ;
-(unsigned)symbolicTraits;
-(CGAffineTransform)matrix;
-(NSString *)postscriptName;
-(id)fontDescriptorByAddingAttributes:(id)arg1 ;
-(NSDictionary *)fontAttributes;
-(id)fontDescriptorWithFamily:(id)arg1 ;
-(id)fontDescriptorWithFace:(id)arg1 ;
-(id)_attributes;
@end

