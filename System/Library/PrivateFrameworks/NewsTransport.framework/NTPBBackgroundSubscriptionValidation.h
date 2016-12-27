/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:57:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NTPBBackgroundSubscriptionValidation : PBCodable <NSCopying> {

	NSString* _errorCode;
	NSString* _errorMessage;
	int _resultType;
	NSString* _sourceChannelId;
	SCD_Struct_NT2 _has;

}

@property (assign,nonatomic) BOOL hasResultType; 
@property (assign,nonatomic) int resultType;                          //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorMessage; 
@property (nonatomic,retain) NSString * errorMessage;                 //@synthesize errorMessage=_errorMessage - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorCode; 
@property (nonatomic,retain) NSString * errorCode;                    //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasSourceChannelId; 
@property (nonatomic,retain) NSString * sourceChannelId;              //@synthesize sourceChannelId=_sourceChannelId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(int)resultType;
-(void)setHasResultType:(BOOL)arg1 ;
-(BOOL)hasResultType;
-(void)setErrorCode:(NSString *)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorCode;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(void)setResultType:(int)arg1 ;
-(void)setSourceChannelId:(NSString *)arg1 ;
-(BOOL)hasSourceChannelId;
-(NSString *)sourceChannelId;
-(BOOL)hasErrorMessage;
@end

