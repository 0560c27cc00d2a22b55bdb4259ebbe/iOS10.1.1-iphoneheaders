/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:40:50 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDNFCGeneralStatistic : PBCodable <NSCopying> {

	unsigned long long _startTimestamp;
	unsigned long long _timestamp;
	unsigned _totalAPNReceived;
	unsigned _totalAuthECommerce;
	unsigned _totalCEEnable;
	unsigned _totalCardProvisioned;
	unsigned _totalExpressFelicaTransaction;
	unsigned _totalFailureWithMissingTransactionEndEvent;
	unsigned _totalFailureWithTransactionEndEventErrors;
	unsigned _totalFelicaEMoneyTransaction;
	unsigned _totalFelicaTransitTransaction;
	unsigned _totalPlasticCardModeEnable;
	unsigned _totalRestrictModeEntered;
	unsigned _totalSuccessfulCardIngestion;
	unsigned _totalSuccessfulCardIngestionWithSessionToken;
	unsigned _totalSuccessfulVAS;
	unsigned _totalTransactionEndEvent;
	unsigned _totalTransientDeactiveTimeout;
	unsigned _totalVASActivation;
	unsigned _totalVASSignup;
	unsigned _totalVASTransactionException;
	BOOL _hasFelicaExpressTransactionEnable;
	SCD_Struct_AW10 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                       //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStartTimestamp; 
@property (assign,nonatomic) unsigned long long startTimestamp;                                  //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCEEnable; 
@property (assign,nonatomic) unsigned totalCEEnable;                                             //@synthesize totalCEEnable=_totalCEEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalCardProvisioned; 
@property (assign,nonatomic) unsigned totalCardProvisioned;                                      //@synthesize totalCardProvisioned=_totalCardProvisioned - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransientDeactiveTimeout; 
@property (assign,nonatomic) unsigned totalTransientDeactiveTimeout;                             //@synthesize totalTransientDeactiveTimeout=_totalTransientDeactiveTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAPNReceived; 
@property (assign,nonatomic) unsigned totalAPNReceived;                                          //@synthesize totalAPNReceived=_totalAPNReceived - In the implementation block
@property (assign,nonatomic) BOOL hasTotalRestrictModeEntered; 
@property (assign,nonatomic) unsigned totalRestrictModeEntered;                                  //@synthesize totalRestrictModeEntered=_totalRestrictModeEntered - In the implementation block
@property (assign,nonatomic) BOOL hasTotalTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalTransactionEndEvent;                                  //@synthesize totalTransactionEndEvent=_totalTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFailureWithTransactionEndEventErrors; 
@property (assign,nonatomic) unsigned totalFailureWithTransactionEndEventErrors;                 //@synthesize totalFailureWithTransactionEndEventErrors=_totalFailureWithTransactionEndEventErrors - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFailureWithMissingTransactionEndEvent; 
@property (assign,nonatomic) unsigned totalFailureWithMissingTransactionEndEvent;                //@synthesize totalFailureWithMissingTransactionEndEvent=_totalFailureWithMissingTransactionEndEvent - In the implementation block
@property (assign,nonatomic) BOOL hasTotalAuthECommerce; 
@property (assign,nonatomic) unsigned totalAuthECommerce;                                        //@synthesize totalAuthECommerce=_totalAuthECommerce - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASActivation; 
@property (assign,nonatomic) unsigned totalVASActivation;                                        //@synthesize totalVASActivation=_totalVASActivation - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulVAS; 
@property (assign,nonatomic) unsigned totalSuccessfulVAS;                                        //@synthesize totalSuccessfulVAS=_totalSuccessfulVAS - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASSignup; 
@property (assign,nonatomic) unsigned totalVASSignup;                                            //@synthesize totalVASSignup=_totalVASSignup - In the implementation block
@property (assign,nonatomic) BOOL hasTotalVASTransactionException; 
@property (assign,nonatomic) unsigned totalVASTransactionException;                              //@synthesize totalVASTransactionException=_totalVASTransactionException - In the implementation block
@property (assign,nonatomic) BOOL hasTotalExpressFelicaTransaction; 
@property (assign,nonatomic) unsigned totalExpressFelicaTransaction;                             //@synthesize totalExpressFelicaTransaction=_totalExpressFelicaTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFelicaEMoneyTransaction; 
@property (assign,nonatomic) unsigned totalFelicaEMoneyTransaction;                              //@synthesize totalFelicaEMoneyTransaction=_totalFelicaEMoneyTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasTotalFelicaTransitTransaction; 
@property (assign,nonatomic) unsigned totalFelicaTransitTransaction;                             //@synthesize totalFelicaTransitTransaction=_totalFelicaTransitTransaction - In the implementation block
@property (assign,nonatomic) BOOL hasHasFelicaExpressTransactionEnable; 
@property (assign,nonatomic) BOOL hasFelicaExpressTransactionEnable;                             //@synthesize hasFelicaExpressTransactionEnable=_hasFelicaExpressTransactionEnable - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulCardIngestion; 
@property (assign,nonatomic) unsigned totalSuccessfulCardIngestion;                              //@synthesize totalSuccessfulCardIngestion=_totalSuccessfulCardIngestion - In the implementation block
@property (assign,nonatomic) BOOL hasTotalSuccessfulCardIngestionWithSessionToken; 
@property (assign,nonatomic) unsigned totalSuccessfulCardIngestionWithSessionToken;              //@synthesize totalSuccessfulCardIngestionWithSessionToken=_totalSuccessfulCardIngestionWithSessionToken - In the implementation block
@property (assign,nonatomic) BOOL hasTotalPlasticCardModeEnable; 
@property (assign,nonatomic) unsigned totalPlasticCardModeEnable;                                //@synthesize totalPlasticCardModeEnable=_totalPlasticCardModeEnable - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(unsigned long long)startTimestamp;
-(void)setStartTimestamp:(unsigned long long)arg1 ;
-(void)setTotalCEEnable:(unsigned)arg1 ;
-(void)setTotalCardProvisioned:(unsigned)arg1 ;
-(void)setTotalTransientDeactiveTimeout:(unsigned)arg1 ;
-(void)setTotalAPNReceived:(unsigned)arg1 ;
-(void)setTotalRestrictModeEntered:(unsigned)arg1 ;
-(void)setTotalTransactionEndEvent:(unsigned)arg1 ;
-(void)setTotalFailureWithTransactionEndEventErrors:(unsigned)arg1 ;
-(void)setTotalExpressFelicaTransaction:(unsigned)arg1 ;
-(void)setTotalFelicaEMoneyTransaction:(unsigned)arg1 ;
-(void)setTotalFelicaTransitTransaction:(unsigned)arg1 ;
-(void)setHasFelicaExpressTransactionEnable:(BOOL)arg1 ;
-(void)setTotalSuccessfulCardIngestion:(unsigned)arg1 ;
-(void)setTotalSuccessfulCardIngestionWithSessionToken:(unsigned)arg1 ;
-(void)setTotalPlasticCardModeEnable:(unsigned)arg1 ;
-(void)setHasTotalCEEnable:(BOOL)arg1 ;
-(BOOL)hasTotalCEEnable;
-(void)setHasTotalCardProvisioned:(BOOL)arg1 ;
-(BOOL)hasTotalCardProvisioned;
-(void)setHasTotalTransientDeactiveTimeout:(BOOL)arg1 ;
-(BOOL)hasTotalTransientDeactiveTimeout;
-(void)setHasTotalAPNReceived:(BOOL)arg1 ;
-(BOOL)hasTotalAPNReceived;
-(void)setHasTotalRestrictModeEntered:(BOOL)arg1 ;
-(BOOL)hasTotalRestrictModeEntered;
-(void)setHasTotalTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalTransactionEndEvent;
-(void)setHasTotalFailureWithTransactionEndEventErrors:(BOOL)arg1 ;
-(BOOL)hasTotalFailureWithTransactionEndEventErrors;
-(void)setTotalFailureWithMissingTransactionEndEvent:(unsigned)arg1 ;
-(void)setHasTotalFailureWithMissingTransactionEndEvent:(BOOL)arg1 ;
-(BOOL)hasTotalFailureWithMissingTransactionEndEvent;
-(void)setTotalAuthECommerce:(unsigned)arg1 ;
-(void)setHasTotalAuthECommerce:(BOOL)arg1 ;
-(BOOL)hasTotalAuthECommerce;
-(void)setTotalVASActivation:(unsigned)arg1 ;
-(void)setHasTotalVASActivation:(BOOL)arg1 ;
-(BOOL)hasTotalVASActivation;
-(void)setTotalSuccessfulVAS:(unsigned)arg1 ;
-(void)setHasTotalSuccessfulVAS:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulVAS;
-(void)setTotalVASSignup:(unsigned)arg1 ;
-(void)setHasTotalVASSignup:(BOOL)arg1 ;
-(BOOL)hasTotalVASSignup;
-(void)setTotalVASTransactionException:(unsigned)arg1 ;
-(void)setHasTotalVASTransactionException:(BOOL)arg1 ;
-(BOOL)hasTotalVASTransactionException;
-(void)setHasTotalExpressFelicaTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalExpressFelicaTransaction;
-(void)setHasTotalFelicaEMoneyTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalFelicaEMoneyTransaction;
-(void)setHasTotalFelicaTransitTransaction:(BOOL)arg1 ;
-(BOOL)hasTotalFelicaTransitTransaction;
-(void)setHasHasFelicaExpressTransactionEnable:(BOOL)arg1 ;
-(BOOL)hasHasFelicaExpressTransactionEnable;
-(void)setHasTotalSuccessfulCardIngestion:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulCardIngestion;
-(void)setHasTotalSuccessfulCardIngestionWithSessionToken:(BOOL)arg1 ;
-(BOOL)hasTotalSuccessfulCardIngestionWithSessionToken;
-(void)setHasTotalPlasticCardModeEnable:(BOOL)arg1 ;
-(BOOL)hasTotalPlasticCardModeEnable;
-(unsigned)totalCEEnable;
-(unsigned)totalCardProvisioned;
-(unsigned)totalTransientDeactiveTimeout;
-(unsigned)totalAPNReceived;
-(unsigned)totalRestrictModeEntered;
-(unsigned)totalTransactionEndEvent;
-(unsigned)totalFailureWithTransactionEndEventErrors;
-(unsigned)totalFailureWithMissingTransactionEndEvent;
-(unsigned)totalAuthECommerce;
-(unsigned)totalVASActivation;
-(unsigned)totalSuccessfulVAS;
-(unsigned)totalVASSignup;
-(unsigned)totalVASTransactionException;
-(unsigned)totalExpressFelicaTransaction;
-(unsigned)totalFelicaEMoneyTransaction;
-(unsigned)totalFelicaTransitTransaction;
-(BOOL)hasFelicaExpressTransactionEnable;
-(unsigned)totalSuccessfulCardIngestion;
-(unsigned)totalSuccessfulCardIngestionWithSessionToken;
-(unsigned)totalPlasticCardModeEnable;
-(void)setHasStartTimestamp:(BOOL)arg1 ;
-(BOOL)hasStartTimestamp;
@end

