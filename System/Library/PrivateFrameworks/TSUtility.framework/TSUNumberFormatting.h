/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:14 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSUNumberFormatting <TSUDataFormat,NSObject>
@required
-(double)scaleFactor;
-(unsigned short)base;
-(id)formatString;
-(id)currencyCode;
-(int)valueType;
-(id)stringFromString:(id)arg1;
-(id)formatName;
-(void)setFormatName:(id)arg1;
-(unsigned short)decimalPlaces;
-(BOOL)usesAccountingStyle;
-(BOOL)showThousandsSeparator;
-(int)fractionAccuracy;
-(int)negativeStyle;
-(BOOL)hasValidDecimalPlaces;
-(BOOL)isCustom;
-(id)customNumberFormatTokens;
-(id)suffixString;
-(BOOL)isTextFormat;
-(BOOL)canFormatText;
-(BOOL)usesTextFormatForValue:(double)arg1;
-(BOOL)customFormatShouldAutoInsertPercentSymbol;
-(unsigned short)basePlaces;
-(BOOL)baseUseMinusSign;
-(BOOL)usesTabs;
-(id)stringFromDouble:(double)arg1 locale:(id)arg2;
-(BOOL)isEquivalent:(id)arg1;

@end

