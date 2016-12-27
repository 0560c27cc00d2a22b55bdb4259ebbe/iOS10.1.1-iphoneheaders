/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:25 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <useractivityd/useractivityd-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDHandoffUserActivityWasContinued : PBCodable <NSCopying> {

	unsigned long long _errorCode;
	unsigned long long _payloadSize;
	unsigned long long _timestamp;
	unsigned long long _transferDurationNsec;
	unsigned long long _transferSpeed;
	NSString* _activityType;
	NSString* _bundleIdentifier;
	unsigned _source;
	unsigned _suggestedActionType;
	BOOL _browserFallback;
	BOOL _cancelled;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasActivityType; 
@property (nonatomic,retain) NSString * activityType;                              //@synthesize activityType=_activityType - In the implementation block
@property (assign,nonatomic) BOOL hasPayloadSize; 
@property (assign,nonatomic) unsigned long long payloadSize;                       //@synthesize payloadSize=_payloadSize - In the implementation block
@property (assign,nonatomic) BOOL hasTransferSpeed; 
@property (assign,nonatomic) unsigned long long transferSpeed;                     //@synthesize transferSpeed=_transferSpeed - In the implementation block
@property (assign,nonatomic) BOOL hasTransferDurationNsec; 
@property (assign,nonatomic) unsigned long long transferDurationNsec;              //@synthesize transferDurationNsec=_transferDurationNsec - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned long long errorCode;                         //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasCancelled; 
@property (assign,nonatomic) BOOL cancelled;                                       //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) BOOL hasSource; 
@property (assign,nonatomic) unsigned source;                                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasBrowserFallback; 
@property (assign,nonatomic) BOOL browserFallback;                                 //@synthesize browserFallback=_browserFallback - In the implementation block
@property (assign,nonatomic) BOOL hasSuggestedActionType; 
@property (assign,nonatomic) unsigned suggestedActionType;                         //@synthesize suggestedActionType=_suggestedActionType - In the implementation block
-(void)setTransferSpeed:(unsigned long long)arg1 ;
-(void)setHasTransferSpeed:(BOOL)arg1 ;
-(BOOL)hasTransferSpeed;
-(void)setTransferDurationNsec:(unsigned long long)arg1 ;
-(void)setHasTransferDurationNsec:(BOOL)arg1 ;
-(BOOL)hasTransferDurationNsec;
-(void)setBrowserFallback:(BOOL)arg1 ;
-(void)setHasBrowserFallback:(BOOL)arg1 ;
-(BOOL)hasBrowserFallback;
-(void)setSuggestedActionType:(unsigned)arg1 ;
-(void)setHasSuggestedActionType:(BOOL)arg1 ;
-(BOOL)hasSuggestedActionType;
-(unsigned long long)transferSpeed;
-(unsigned long long)transferDurationNsec;
-(BOOL)browserFallback;
-(unsigned)suggestedActionType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(NSString *)bundleIdentifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)setSource:(unsigned)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(NSString *)activityType;
-(id)dictionaryRepresentation;
-(unsigned)source;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasCancelled:(BOOL)arg1 ;
-(BOOL)hasCancelled;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasSource;
-(BOOL)hasBundleIdentifier;
-(void)setErrorCode:(unsigned long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned long long)errorCode;
-(void)setHasSource:(BOOL)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(BOOL)hasActivityType;
-(void)setPayloadSize:(unsigned long long)arg1 ;
-(void)setHasPayloadSize:(BOOL)arg1 ;
-(BOOL)hasPayloadSize;
-(unsigned long long)payloadSize;
@end

