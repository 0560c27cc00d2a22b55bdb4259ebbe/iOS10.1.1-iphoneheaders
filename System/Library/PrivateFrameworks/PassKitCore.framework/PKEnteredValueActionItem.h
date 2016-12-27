/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDecimalNumber, NSArray, NSString, NSDictionary;

@interface PKEnteredValueActionItem : NSObject <NSSecureCoding> {

	BOOL _maxAmountIncludesLocalBalance;
	NSDecimalNumber* _minAmount;
	NSDecimalNumber* _maxAmount;
	NSArray* _defaultSuggestions;
	NSString* _currency;
	NSDictionary* _serviceProviderData;

}

@property (nonatomic,copy,readonly) NSDecimalNumber * minAmount;                     //@synthesize minAmount=_minAmount - In the implementation block
@property (nonatomic,copy,readonly) NSDecimalNumber * maxAmount;                     //@synthesize maxAmount=_maxAmount - In the implementation block
@property (nonatomic,copy,readonly) NSArray * defaultSuggestions;                    //@synthesize defaultSuggestions=_defaultSuggestions - In the implementation block
@property (nonatomic,readonly) BOOL maxAmountIncludesLocalBalance;                   //@synthesize maxAmountIncludesLocalBalance=_maxAmountIncludesLocalBalance - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                             //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceProviderData;              //@synthesize serviceProviderData=_serviceProviderData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)_processLocalizableStrings:(/*^block*/id)arg1 ;
-(BOOL)maxAmountIncludesLocalBalance;
-(NSDictionary *)serviceProviderData;
-(NSString *)currency;
-(NSDecimalNumber *)minAmount;
-(NSDecimalNumber *)maxAmount;
-(NSArray *)defaultSuggestions;
@end

