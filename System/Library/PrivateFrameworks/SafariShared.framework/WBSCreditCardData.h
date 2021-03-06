/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:58:27 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WBSCreditCardData : NSObject {

	NSString* _cardName;
	NSString* _cardholderName;
	NSString* _cardNumber;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSString * cardName;                           //@synthesize cardName=_cardName - In the implementation block
@property (nonatomic,copy) NSString * cardholderName;                     //@synthesize cardholderName=_cardholderName - In the implementation block
@property (nonatomic,copy) NSString * cardNumber;                         //@synthesize cardNumber=_cardNumber - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
-(id)description;
-(NSDate *)expirationDate;
-(id)initWithCardName:(id)arg1 number:(id)arg2 cardholderName:(id)arg3 expirationDate:(id)arg4 ;
-(id)initWithKeychainRepresentation:(id)arg1 ;
-(id)initWithCameraReaderOutput:(id)arg1 ;
-(id)keychainRepresentation;
-(id)creditCardDataByMergingCardholderNameAndExpirationDateFromCard:(id)arg1 ;
-(NSString *)cardName;
-(void)setCardName:(NSString *)arg1 ;
-(NSString *)cardNumber;
-(void)setCardNumber:(NSString *)arg1 ;
-(NSString *)cardholderName;
-(void)setCardholderName:(NSString *)arg1 ;
@end

