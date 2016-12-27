/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:44:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/log/liblog_companionsync.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <liblog_companionsync.dylib/liblog_companionsync.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SYLogErrorInfo, NSString, NSMutableArray, NSDictionary;

@interface SYLogSessionState : PBCodable <NSCopying> {

	double _fullSessionTimeout;
	unsigned long long _maxConcurrentMessages;
	double _perMessageTimeout;
	SYLogErrorInfo* _error;
	NSString* _identifier;
	NSMutableArray* _peers;
	int _state;
	NSMutableArray* _transportOptions;
	BOOL _canRestart;
	BOOL _canRollback;
	BOOL _canceled;
	BOOL _isReset;
	BOOL _isSending;
	SCD_Struct_SY2 _has;

}

@property (nonatomic,retain) NSDictionary * cocoaTransportOptions; 
@property (nonatomic,retain) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) int state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isSending;                                        //@synthesize isSending=_isSending - In the implementation block
@property (assign,nonatomic) BOOL hasIsReset; 
@property (assign,nonatomic) BOOL isReset;                                          //@synthesize isReset=_isReset - In the implementation block
@property (assign,nonatomic) BOOL hasPerMessageTimeout; 
@property (assign,nonatomic) double perMessageTimeout;                              //@synthesize perMessageTimeout=_perMessageTimeout - In the implementation block
@property (assign,nonatomic) BOOL hasFullSessionTimeout; 
@property (assign,nonatomic) double fullSessionTimeout;                             //@synthesize fullSessionTimeout=_fullSessionTimeout - In the implementation block
@property (assign,nonatomic) unsigned long long maxConcurrentMessages;              //@synthesize maxConcurrentMessages=_maxConcurrentMessages - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) SYLogErrorInfo * error;                                //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL hasCanRestart; 
@property (assign,nonatomic) BOOL canRestart;                                       //@synthesize canRestart=_canRestart - In the implementation block
@property (assign,nonatomic) BOOL hasCanRollback; 
@property (assign,nonatomic) BOOL canRollback;                                      //@synthesize canRollback=_canRollback - In the implementation block
@property (assign,nonatomic) BOOL hasCanceled; 
@property (assign,nonatomic) BOOL canceled;                                         //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,retain) NSMutableArray * transportOptions;                     //@synthesize transportOptions=_transportOptions - In the implementation block
@property (nonatomic,retain) NSMutableArray * peers;                                //@synthesize peers=_peers - In the implementation block
+(Class)transportOptionsType;
+(Class)peersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(int)state;
-(void)setState:(int)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)isReset;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasError;
-(BOOL)canceled;
-(void)setPeers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)peers;
-(SYLogErrorInfo *)error;
-(void)setError:(SYLogErrorInfo *)arg1 ;
-(void)setCanceled:(BOOL)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)addTransportOptions:(id)arg1 ;
-(unsigned long long)transportOptionsCount;
-(void)clearTransportOptions;
-(id)transportOptionsAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)transportOptions;
-(void)setTransportOptions:(NSMutableArray *)arg1 ;
-(BOOL)isSending;
-(double)fullSessionTimeout;
-(unsigned long long)maxConcurrentMessages;
-(double)perMessageTimeout;
-(void)setCocoaTransportOptions:(NSDictionary *)arg1 ;
-(void)addPeers:(id)arg1 ;
-(unsigned long long)peersCount;
-(void)clearPeers;
-(id)peersAtIndex:(unsigned long long)arg1 ;
-(void)setIsReset:(BOOL)arg1 ;
-(void)setHasIsReset:(BOOL)arg1 ;
-(BOOL)hasIsReset;
-(void)setPerMessageTimeout:(double)arg1 ;
-(void)setHasPerMessageTimeout:(BOOL)arg1 ;
-(BOOL)hasPerMessageTimeout;
-(void)setFullSessionTimeout:(double)arg1 ;
-(void)setHasFullSessionTimeout:(BOOL)arg1 ;
-(BOOL)hasFullSessionTimeout;
-(void)setHasCanRestart:(BOOL)arg1 ;
-(BOOL)hasCanRestart;
-(void)setHasCanRollback:(BOOL)arg1 ;
-(BOOL)hasCanRollback;
-(void)setIsSending:(BOOL)arg1 ;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1 ;
-(NSDictionary *)cocoaTransportOptions;
-(id)stateAsString:(int)arg1 ;
-(int)StringAsState:(id)arg1 ;
-(void)setHasCanceled:(BOOL)arg1 ;
-(BOOL)hasCanceled;
@end

