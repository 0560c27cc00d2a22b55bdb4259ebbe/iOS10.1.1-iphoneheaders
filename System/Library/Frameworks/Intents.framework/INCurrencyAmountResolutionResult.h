/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:51:01 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INCurrencyAmountResolutionResultExport.h>

@class NSString;

@interface INCurrencyAmountResolutionResult : INIntentResolutionResult <INCurrencyAmountResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)needsMoreDetailsForCurrencyAmount:(id)arg1 ;
+(id)successWithResolvedCurrencyAmount:(id)arg1 ;
+(id)disambiguationWithCurrencyAmountsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithCurrencyAmountToConfirm:(id)arg1 ;
@end

