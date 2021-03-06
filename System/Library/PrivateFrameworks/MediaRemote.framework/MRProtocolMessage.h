/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:18 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, PBCodable, NSError, NSString, MSVMultiCallback;

@interface MRProtocolMessage : NSObject {

	NSData* _protobufData;
	PBCodable* _underlyingCodableMessage;
	NSError* _error;
	NSString* _identifier;
	unsigned long long _timestamp;
	MSVMultiCallback* _messageSentCallbacks;
	MSVMultiCallback* _messagePurgedCallbacks;

}

@property (nonatomic,retain) PBCodable * underlyingCodableMessage;                     //@synthesize underlyingCodableMessage=_underlyingCodableMessage - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSError * error;                                            //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSData * protobufData; 
@property (nonatomic,readonly) unsigned long long encryptionType; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) NSString * description; 
@property (nonatomic,readonly) unsigned long long priority; 
@property (nonatomic,readonly) BOOL shouldLog; 
@property (nonatomic,readonly) MSVMultiCallback * messageSentCallbacks;                //@synthesize messageSentCallbacks=_messageSentCallbacks - In the implementation block
@property (nonatomic,readonly) MSVMultiCallback * messagePurgedCallbacks;              //@synthesize messagePurgedCallbacks=_messagePurgedCallbacks - In the implementation block
+(unsigned long long)currentProtocolVersion;
+(id)protocolMessageWithProtobufData:(id)arg1 ;
-(unsigned long long)encryptionType;
-(id)init;
-(void)dealloc;
-(NSString *)description;
-(unsigned long long)timestamp;
-(NSString *)identifier;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(unsigned long long)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setUnderlyingCodableMessage:(PBCodable *)arg1 ;
-(PBCodable *)underlyingCodableMessage;
-(MSVMultiCallback *)messagePurgedCallbacks;
-(MSVMultiCallback *)messageSentCallbacks;
-(BOOL)shouldLog;
-(id)initWithUnderlyingCodableMessage:(id)arg1 identifier:(id)arg2 error:(id)arg3 ;
-(NSData *)protobufData;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

