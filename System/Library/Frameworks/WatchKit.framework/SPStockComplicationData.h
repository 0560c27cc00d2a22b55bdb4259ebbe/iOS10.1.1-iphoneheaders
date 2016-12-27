/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:52:20 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/Frameworks/WatchKit.framework/WatchKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchKit/SPComplicationData.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SPStockComplicationData : SPComplicationData <NSSecureCoding> {

	NSString* _tickerSymbolText;
	NSString* _priceText;
	NSString* _marketCapText;
	NSString* _changeInPercentText;
	NSString* _changeInPointsText;
	NSString* _changeText;
	unsigned long long _changeDirection;

}

@property (nonatomic,retain) NSString * tickerSymbolText;                     //@synthesize tickerSymbolText=_tickerSymbolText - In the implementation block
@property (nonatomic,retain) NSString * priceText;                            //@synthesize priceText=_priceText - In the implementation block
@property (nonatomic,retain) NSString * marketCapText;                        //@synthesize marketCapText=_marketCapText - In the implementation block
@property (nonatomic,retain) NSString * changeInPercentText;                  //@synthesize changeInPercentText=_changeInPercentText - In the implementation block
@property (nonatomic,retain) NSString * changeInPointsText;                   //@synthesize changeInPointsText=_changeInPointsText - In the implementation block
@property (nonatomic,retain) NSString * changeText;                           //@synthesize changeText=_changeText - In the implementation block
@property (assign,nonatomic) unsigned long long changeDirection;              //@synthesize changeDirection=_changeDirection - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)tickerSymbolText;
-(void)setTickerSymbolText:(NSString *)arg1 ;
-(NSString *)priceText;
-(void)setPriceText:(NSString *)arg1 ;
-(NSString *)marketCapText;
-(void)setMarketCapText:(NSString *)arg1 ;
-(NSString *)changeInPercentText;
-(void)setChangeInPercentText:(NSString *)arg1 ;
-(NSString *)changeInPointsText;
-(void)setChangeInPointsText:(NSString *)arg1 ;
-(NSString *)changeText;
-(void)setChangeText:(NSString *)arg1 ;
-(unsigned long long)changeDirection;
-(void)setChangeDirection:(unsigned long long)arg1 ;
@end

