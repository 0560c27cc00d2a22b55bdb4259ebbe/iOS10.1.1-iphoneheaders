/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCAudioStreamConfig : NSObject {

	long long _codecType;
	BOOL _cnEnabled;
	unsigned long long _cnPayloadType;
	unsigned long long _dtmfPayloadType;
	unsigned long long _dtmfTimestampRate;
	unsigned long long _ptime;
	unsigned long long _maxPtime;
	long long _audioStreamMode;
	long long _rateModeMask;
	long long _preferredAMRMode;
	BOOL _octetAligned;
	BOOL _dtxEnabled;

}

@property (assign,nonatomic) long long audioStreamMode;                             //@synthesize audioStreamMode=_audioStreamMode - In the implementation block
@property (assign,nonatomic) long long codecType;                                   //@synthesize codecType=_codecType - In the implementation block
@property (assign,getter=isCNEnabled,nonatomic) BOOL cnEnabled;                     //@synthesize cnEnabled=_cnEnabled - In the implementation block
@property (assign,nonatomic) unsigned long long cnPayloadType;                      //@synthesize cnPayloadType=_cnPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long dtmfPayloadType;                    //@synthesize dtmfPayloadType=_dtmfPayloadType - In the implementation block
@property (assign,nonatomic) unsigned long long dtmfTimestampRate;                  //@synthesize dtmfTimestampRate=_dtmfTimestampRate - In the implementation block
@property (assign,nonatomic) unsigned long long ptime;                              //@synthesize ptime=_ptime - In the implementation block
@property (assign,nonatomic) unsigned long long maxPtime;                           //@synthesize maxPtime=_maxPtime - In the implementation block
@property (assign,getter=isOctectAligned,nonatomic) BOOL octetAligned;              //@synthesize octetAligned=_octetAligned - In the implementation block
@property (assign,getter=isDTXEnabled,nonatomic) BOOL dtxEnabled;                   //@synthesize dtxEnabled=_dtxEnabled - In the implementation block
@property (assign,nonatomic) long long rateModeMask;                                //@synthesize rateModeMask=_rateModeMask - In the implementation block
@property (assign,nonatomic) long long preferredAMRMode;                            //@synthesize preferredAMRMode=_preferredAMRMode - In the implementation block
-(id)init;
-(BOOL)isValid;
-(long long)preferredAMRMode;
-(long long)rateModeMask;
-(unsigned long long)dtmfTimestampRate;
-(unsigned long long)maxPtime;
-(void)setDtmfPayloadType:(unsigned long long)arg1 ;
-(void)setDtmfTimestampRate:(unsigned long long)arg1 ;
-(void)setMaxPtime:(unsigned long long)arg1 ;
-(void)setRateModeMask:(long long)arg1 ;
-(void)setPreferredAMRMode:(long long)arg1 ;
-(BOOL)isDTMFValid;
-(BOOL)isCNValid;
-(long long)codecType;
-(void)setCodecType:(long long)arg1 ;
-(void)setOctetAligned:(BOOL)arg1 ;
-(void)setDtxEnabled:(BOOL)arg1 ;
-(void)setAudioStreamMode:(long long)arg1 ;
-(void)setCnEnabled:(BOOL)arg1 ;
-(void)setCnPayloadType:(unsigned long long)arg1 ;
-(void)setPtime:(unsigned long long)arg1 ;
-(unsigned long long)dtmfPayloadType;
-(BOOL)isOctectAligned;
-(BOOL)isDTXEnabled;
-(long long)audioStreamMode;
-(BOOL)isCNEnabled;
-(unsigned long long)cnPayloadType;
-(unsigned long long)ptime;
@end

