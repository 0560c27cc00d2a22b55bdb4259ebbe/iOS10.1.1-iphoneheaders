/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:15 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <iWorkImport/TSCHDataFormatter.h>
#import <iWorkImport/TSCHCustomFormatSupport.h>
#import <iWorkImport/TSCHDataFormatterPersistableStyleObject.h>
#import <iWorkImport/TSCHDataFormatterSupportedClientFormatObject.h>

@class NSString;

@interface TSCHNumberFormat : NSObject <NSCopying, NSMutableCopying, TSCHDataFormatter, TSCHCustomFormatSupport, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject> {

	SCD_Struct_TS45 mFormatStruct;
	NSString* mPrefixString;
	NSString* mSuffixString;

}

@property (nonatomic,readonly) BOOL isCurrency; 
@property (nonatomic,readonly) BOOL isPercentage; 
@property (nonatomic,readonly) BOOL isFraction; 
@property (nonatomic,readonly) BOOL isBase; 
@property (nonatomic,readonly) int formatType; 
@property (nonatomic,readonly) unsigned decimalPlaces; 
@property (nonatomic,copy,readonly) NSString * currencyCode; 
@property (nonatomic,readonly) BOOL useAccountingStyle; 
@property (nonatomic,readonly) int negativeStyle; 
@property (nonatomic,readonly) BOOL showThousandsSeparator; 
@property (nonatomic,readonly) int fractionAccuracy; 
@property (nonatomic,copy,readonly) NSString * prefixString; 
@property (nonatomic,copy,readonly) NSString * suffixString; 
@property (nonatomic,readonly) double scaleFactor; 
@property (nonatomic,readonly) unsigned base; 
@property (nonatomic,readonly) unsigned basePlaces; 
@property (nonatomic,readonly) BOOL baseUseMinusSign; 
@property (nonatomic,readonly) BOOL usesNumberFormatStruct; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
+(id)numberFormatWithFormatType:(int)arg1 decimalPlaces:(unsigned)arg2 showThousandsSeparator:(BOOL)arg3 ;
+(id)defaultDecimalNumberFormat;
+(id)numberFormatWithFormatStruct:(SCD_Struct_TS49)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
+(int)labelFormatTypeFromTSUFormatType:(int)arg1 ;
+(int)defaultFractionAccuracy;
+(id)defaultCurrencyCode;
+(BOOL)supportsFormatType:(int)arg1 ;
+(int)defaultNegativeNumberStyle;
+(unsigned)defaultBase;
+(unsigned)defaultBasePlaces;
+(BOOL)defaultBaseUseMinusSign;
+(id)customFormatForKey:(id)arg1 documentRoot:(id)arg2 fromPasteboardCustomFormatList:(id)arg3 ;
+(id)automaticDecimalPlaces;
-(void)saveToArchive:(FormatStructArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const FormatStructArchive*)arg1 unarchiver:(id)arg2 ;
-(id)customFormatListKey;
-(id)numberFormatByResettingToDefaultNegativeStyleIfAvailable;
-(id)dataFormatterForDocumentRoot:(id)arg1 ;
-(id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2 ;
-(id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2 ;
-(BOOL)isCompatibleWithDataFormatter:(id)arg1 ;
-(id)convertToPersistableStyleObject;
-(id)convertToSupportedClientFormatObjectWithLocale:(id)arg1 ;
-(long long)numberOfDecimalPlaces;
-(id)upgradedNumberFormatFromPreUFFOrUnity1_0;
-(id)initWithFormatStruct:(SCD_Struct_TS49)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(id)p_initWithFormatStruct:(SCD_Struct_TS49)arg1 prefixString:(id)arg2 suffixString:(id)arg3 ;
-(BOOL)usesNumberFormatStruct;
-(BOOL)isFraction;
-(BOOL)isScientific;
-(unsigned)p_decimalPlacesIfAvailable;
-(unsigned)p_decimalPlaces;
-(id)p_currencyCode;
-(id)p_currencyCodeIfAvailable;
-(BOOL)p_useAccountingStyle;
-(BOOL)p_useAccountingStyleIfAvailable;
-(int)p_negativeStyle;
-(int)p_negativeStyleIfAvailable;
-(BOOL)p_showThousandsSeparator;
-(BOOL)p_showThousandsSeparatorIfAvailable;
-(int)p_fractionAccuracy;
-(int)p_fractionAccuracyIfAvailable;
-(BOOL)isBase;
-(unsigned)p_base;
-(unsigned)p_basePlaces;
-(BOOL)p_baseUseMinusSign;
-(int)negativeStyleForNumberFormatter;
-(id)p_formattedBodyStringForDouble:(double)arg1 locale:(id)arg2 ;
-(BOOL)isPercentage;
-(id)p_formatTypeDescription;
-(BOOL)p_hasValidDecimalPlaces;
-(unsigned)p_baseIfAvailable;
-(unsigned)p_basePlacesIfAvailable;
-(BOOL)p_baseUseMinusSignIfAvailable;
-(BOOL)supportsAutoMinMax;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)scaleFactor;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned)base;
-(NSString *)currencyCode;
-(int)valueType;
-(BOOL)isCurrency;
-(int)formatType;
-(unsigned)decimalPlaces;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(BOOL)isCustom;
-(NSString *)suffixString;
-(unsigned)basePlaces;
-(BOOL)baseUseMinusSign;
-(id)customFormatKey;
-(NSString *)prefixString;
-(BOOL)useAccountingStyle;
-(SCD_Struct_TS49)formatStruct;
@end

