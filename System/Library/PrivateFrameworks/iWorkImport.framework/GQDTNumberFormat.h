/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 5:00:03 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/GQDNameMappable.h>

@class NSArray, NSIndexSet, NSString;

@interface GQDTNumberFormat : NSObject <GQDNameMappable> {

	char* mUid;
	CFStringRef mFormatString;
	CFStringRef mCurrencyCode;
	long long mDecimalPlaces;
	BOOL mUseAccountingStyle;
	BOOL mShowThousandsSeparator;
	int mValueType;
	int mNegativeStyle;
	int mFractionAccuracy;
	BOOL mFormatStringRequiresSuppressionOfMinusSign;
	double mScaleFactor;
	BOOL mIsCustom;
	BOOL mRequiresFractionReplacement;
	unsigned char mNumberOfNonSpaceIntegerPlaceholderDigits;
	unsigned char mNumberOfNonSpaceDecimalPlaceholderDigits;
	unsigned short mIndexFromRightOfLastDigitPlaceholder;
	unsigned char mBase;
	unsigned short mBasePlaces;
	BOOL mBaseUsesMinusSign;
	BOOL mUseScientificFormattingAutomatically;
	BOOL mIgnoreDecimalPlacesForZeroValue;
	BOOL mIsTextFormat;
	BOOL mFormatContainsSpecialTokens;
	BOOL mFormatContainsIntegerToken;
	NSArray* mInterstitialStrings;
	NSIndexSet* mInterstitialStringInsertionIndexes;
	unsigned char mMinimumIntegerWidth;
	unsigned char mDecimalWidth;
	CFStringRef mSuffixString;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)numberFormatWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(CFStringRef)arg9 ;
+(const StateSpec*)stateForReading;
+(BOOL)needToSuppressMinusSignForFormatString:(CFStringRef)arg1 ;
-(id)numberFormatBySettingValueType:(int)arg1 ;
-(id)stringFromDouble:(double)arg1 ;
-(int)readAttributesFromReader:(xmlTextReaderRef)arg1 ;
-(CFStringRef)createStringFromDouble:(double)arg1 ;
-(id)initWithValueType:(int)arg1 formatString:(id)arg2 decimalPlaces:(unsigned short)arg3 currencyCode:(id)arg4 useAccountingStyle:(BOOL)arg5 negativeStyle:(int)arg6 showThousandsSeparator:(BOOL)arg7 fractionAccuracy:(int)arg8 suffixString:(CFStringRef)arg9 scaleFactor:(double)arg10 base:(unsigned short)arg11 basePlaces:(unsigned short)arg12 baseUseMinusSign:(BOOL)arg13 isCustom:(BOOL)arg14 interstitialStrings:(id)arg15 interstitialStringInsertionIndexes:(id)arg16 indexFromRightOfLastDigitPlaceholder:(unsigned short)arg17 minimumIntegerWidth:(unsigned char)arg18 decimalWidth:(unsigned char)arg19 numberOfNonSpaceIntegerPlaceholderDigits:(unsigned char)arg20 numberOfNonSpaceDecimalPlaceholderDigits:(unsigned char)arg21 isTextFormat:(BOOL)arg22 formatName:(id)arg23 ;
-(void)dealloc;
-(id)formatString;
-(id)currencyCode;
-(int)valueType;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)isCustom;
-(id)customNumberFormatTokens;
-(BOOL)isTextFormat;
-(id)numberFormatBySettingNegativeStyle:(int)arg1 ;
-(void)setUseScientificFormattingAutomatically:(BOOL)arg1 ;
-(id)fractionStringFromDouble:(double)arg1 ;
-(id)baseStringFromDouble:(double)arg1 ;
-(BOOL)useAccountingStyle;
@end

