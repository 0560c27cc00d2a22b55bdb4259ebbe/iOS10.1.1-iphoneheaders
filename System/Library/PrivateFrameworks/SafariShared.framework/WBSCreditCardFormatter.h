/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <Foundation/NSFormatter.h>

@interface WBSCreditCardFormatter : NSFormatter {

	BOOL _showLastFourDigits;
	BOOL _showCreditCardNumber;
	BOOL _allowsUnknownCardTypes;

}

@property (assign,nonatomic) BOOL showLastFourDigits;                  //@synthesize showLastFourDigits=_showLastFourDigits - In the implementation block
@property (assign,nonatomic) BOOL showCreditCardNumber;                //@synthesize showCreditCardNumber=_showCreditCardNumber - In the implementation block
@property (assign,nonatomic) BOOL allowsUnknownCardTypes;              //@synthesize allowsUnknownCardTypes=_allowsUnknownCardTypes - In the implementation block
-(BOOL)isPartialStringValid:(id)arg1 newEditingString:(id*)arg2 errorDescription:(id*)arg3 ;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)isPartialStringValid:(id*)arg1 proposedSelectedRange:(NSRange*)arg2 originalString:(id)arg3 originalSelectedRange:(NSRange)arg4 errorDescription:(id*)arg5 ;
-(BOOL)showCreditCardNumber;
-(id)_formattedStringForNormalizedNumber:(id)arg1 showCreditCardNumber:(BOOL)arg2 ;
-(BOOL)allowsUnknownCardTypes;
-(NSRange)_normalizedSelectionRangeForFormattedCreditCardNumber:(id)arg1 withOriginalSelectionRange:(NSRange)arg2 ;
-(NSRange)_selectionRangeInFormattedCreditCardNumber:(id)arg1 forNormalizedSelectionRange:(NSRange)arg2 inNormalizedCreditCardNumber:(id)arg3 ;
-(BOOL)showLastFourDigits;
-(void)setShowLastFourDigits:(BOOL)arg1 ;
-(void)setShowCreditCardNumber:(BOOL)arg1 ;
-(void)setAllowsUnknownCardTypes:(BOOL)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
@end

