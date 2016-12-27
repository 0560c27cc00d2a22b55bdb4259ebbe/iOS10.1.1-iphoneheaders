/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:32 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDCodableRoutineLocationResponse, HDCodableRoutinePredictedLocationsResponse;

@interface HDCodableRoutineResponseMessage : PBCodable <NSCopying> {

	NSString* _errorDescription;
	HDCodableRoutineLocationResponse* _fetchLocationResponse;
	HDCodableRoutinePredictedLocationsResponse* _fetchNextLocationResponse;
	NSString* _requestIdentifier;
	int _requestType;
	SCD_Struct_HD32 _has;

}

@property (assign,nonatomic) BOOL hasRequestType; 
@property (assign,nonatomic) int requestType;                                                                     //@synthesize requestType=_requestType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestIdentifier; 
@property (nonatomic,retain) NSString * requestIdentifier;                                                        //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchLocationResponse; 
@property (nonatomic,retain) HDCodableRoutineLocationResponse * fetchLocationResponse;                            //@synthesize fetchLocationResponse=_fetchLocationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasFetchNextLocationResponse; 
@property (nonatomic,retain) HDCodableRoutinePredictedLocationsResponse * fetchNextLocationResponse;              //@synthesize fetchNextLocationResponse=_fetchNextLocationResponse - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDescription; 
@property (nonatomic,retain) NSString * errorDescription;                                                         //@synthesize errorDescription=_errorDescription - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setRequestType:(int)arg1 ;
-(void)setHasRequestType:(BOOL)arg1 ;
-(BOOL)hasRequestType;
-(NSString *)requestIdentifier;
-(void)setRequestIdentifier:(NSString *)arg1 ;
-(int)requestType;
-(void)setErrorDescription:(NSString *)arg1 ;
-(NSString *)errorDescription;
-(BOOL)hasRequestIdentifier;
-(BOOL)hasErrorDescription;
-(HDCodableRoutineLocationResponse *)fetchLocationResponse;
-(HDCodableRoutinePredictedLocationsResponse *)fetchNextLocationResponse;
-(void)setFetchLocationResponse:(HDCodableRoutineLocationResponse *)arg1 ;
-(void)setFetchNextLocationResponse:(HDCodableRoutinePredictedLocationsResponse *)arg1 ;
-(BOOL)hasFetchLocationResponse;
-(BOOL)hasFetchNextLocationResponse;
@end

