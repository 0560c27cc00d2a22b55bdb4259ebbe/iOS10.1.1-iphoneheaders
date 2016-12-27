/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:59:36 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface VSInstrumentMetrics : NSObject <NSSecureCoding> {

	BOOL _isWarmStart;
	NSString* _utterance;
	NSString* _voiceAssetKey;
	unsigned long long _requestCreatedTimestamp;
	unsigned long long _speechBeginTimestamp;
	unsigned long long _speechEndTimestamp;

}

@property (copy) NSString * utterance;                                      //@synthesize utterance=_utterance - In the implementation block
@property (copy) NSString * voiceAssetKey;                                  //@synthesize voiceAssetKey=_voiceAssetKey - In the implementation block
@property (assign) unsigned long long requestCreatedTimestamp;              //@synthesize requestCreatedTimestamp=_requestCreatedTimestamp - In the implementation block
@property (assign) unsigned long long speechBeginTimestamp;                 //@synthesize speechBeginTimestamp=_speechBeginTimestamp - In the implementation block
@property (assign) unsigned long long speechEndTimestamp;                   //@synthesize speechEndTimestamp=_speechEndTimestamp - In the implementation block
@property (assign) BOOL isWarmStart;                                        //@synthesize isWarmStart=_isWarmStart - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setVoiceAssetKey:(NSString *)arg1 ;
-(void)setRequestCreatedTimestamp:(unsigned long long)arg1 ;
-(void)setSpeechBeginTimestamp:(unsigned long long)arg1 ;
-(void)setSpeechEndTimestamp:(unsigned long long)arg1 ;
-(void)setIsWarmStart:(BOOL)arg1 ;
-(NSString *)utterance;
-(void)setUtterance:(NSString *)arg1 ;
-(NSString *)voiceAssetKey;
-(BOOL)isWarmStart;
-(unsigned long long)requestCreatedTimestamp;
-(unsigned long long)speechBeginTimestamp;
-(unsigned long long)speechEndTimestamp;
@end

