/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:11 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VCAudioRuleCollection, VCVideoRuleCollections, NSDictionary, NSString, VCBitrateArbiter, NSSet;

@interface VCMediaNegotiatorLocalConfiguration : NSObject {

	unsigned _audioSSRC;
	unsigned _videoSSRC;
	VCAudioRuleCollection* _audioRuleCollection;
	VCVideoRuleCollections* _videoRuleCollections;
	VCVideoRuleCollections* _screenRuleCollections;
	BOOL _allowAudioRecording;
	BOOL _allowAudioSwitching;
	int _preferredAudioCodec;
	unsigned _audioUnitNumber;
	int _deviceRole;
	NSDictionary* _videoFeatureStrings;
	BOOL _allowRTCPFB;
	BOOL _isCaller;
	NSString* _basebandCodec;
	unsigned _basebandCodecSampleRate;
	VCBitrateArbiter* _bitrateArbiter;
	NSSet* _captionsReceiverLanguages;
	NSSet* _captionsSenderLanguages;

}

@property (assign,nonatomic) unsigned audioSSRC;                                          //@synthesize audioSSRC=_audioSSRC - In the implementation block
@property (assign,nonatomic) unsigned videoSSRC;                                          //@synthesize videoSSRC=_videoSSRC - In the implementation block
@property (nonatomic,retain) VCAudioRuleCollection * audioRuleCollection;                 //@synthesize audioRuleCollection=_audioRuleCollection - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * videoRuleCollections;               //@synthesize videoRuleCollections=_videoRuleCollections - In the implementation block
@property (nonatomic,retain) VCVideoRuleCollections * screenRuleCollections;              //@synthesize screenRuleCollections=_screenRuleCollections - In the implementation block
@property (assign,nonatomic) BOOL allowAudioRecording;                                    //@synthesize allowAudioRecording=_allowAudioRecording - In the implementation block
@property (assign,nonatomic) BOOL allowAudioSwitching;                                    //@synthesize allowAudioSwitching=_allowAudioSwitching - In the implementation block
@property (assign,nonatomic) unsigned audioUnitNumber;                                    //@synthesize audioUnitNumber=_audioUnitNumber - In the implementation block
@property (assign,nonatomic) int preferredAudioCodec;                                     //@synthesize preferredAudioCodec=_preferredAudioCodec - In the implementation block
@property (assign,nonatomic) int deviceRole;                                              //@synthesize deviceRole=_deviceRole - In the implementation block
@property (nonatomic,retain) NSDictionary * videoFeatureStrings;                          //@synthesize videoFeatureStrings=_videoFeatureStrings - In the implementation block
@property (assign,nonatomic) BOOL allowRTCPFB;                                            //@synthesize allowRTCPFB=_allowRTCPFB - In the implementation block
@property (assign,nonatomic) BOOL isCaller;                                               //@synthesize isCaller=_isCaller - In the implementation block
@property (nonatomic,retain) NSString * basebandCodec;                                    //@synthesize basebandCodec=_basebandCodec - In the implementation block
@property (assign,nonatomic) unsigned basebandCodecSampleRate;                            //@synthesize basebandCodecSampleRate=_basebandCodecSampleRate - In the implementation block
@property (nonatomic,retain) VCBitrateArbiter * bitrateArbiter;                           //@synthesize bitrateArbiter=_bitrateArbiter - In the implementation block
@property (nonatomic,retain) NSSet * captionsSenderLanguages;                             //@synthesize captionsSenderLanguages=_captionsSenderLanguages - In the implementation block
@property (nonatomic,retain) NSSet * captionsReceiverLanguages;                           //@synthesize captionsReceiverLanguages=_captionsReceiverLanguages - In the implementation block
-(void)dealloc;
-(BOOL)allowAudioRecording;
-(void)setAllowAudioRecording:(BOOL)arg1 ;
-(BOOL)allowAudioSwitching;
-(void)setAllowAudioSwitching:(BOOL)arg1 ;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(int)preferredAudioCodec;
-(BOOL)allowRTCPFB;
-(void)setAllowRTCPFB:(BOOL)arg1 ;
-(unsigned)basebandCodecSampleRate;
-(BOOL)isCaller;
-(VCVideoRuleCollections *)videoRuleCollections;
-(void)setAudioSSRC:(unsigned)arg1 ;
-(void)setVideoSSRC:(unsigned)arg1 ;
-(void)setAudioRuleCollection:(VCAudioRuleCollection *)arg1 ;
-(void)setVideoRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setScreenRuleCollections:(VCVideoRuleCollections *)arg1 ;
-(void)setPreferredAudioCodec:(int)arg1 ;
-(void)setVideoFeatureStrings:(NSDictionary *)arg1 ;
-(void)setIsCaller:(BOOL)arg1 ;
-(void)setBitrateArbiter:(VCBitrateArbiter *)arg1 ;
-(void)setBasebandCodecSampleRate:(unsigned)arg1 ;
-(NSDictionary *)videoFeatureStrings;
-(void)setBasebandCodec:(NSString *)arg1 ;
-(NSString *)basebandCodec;
-(VCAudioRuleCollection *)audioRuleCollection;
-(VCVideoRuleCollections *)screenRuleCollections;
-(unsigned)audioUnitNumber;
-(void)setAudioUnitNumber:(unsigned)arg1 ;
-(VCBitrateArbiter *)bitrateArbiter;
-(NSSet *)captionsSenderLanguages;
-(void)setCaptionsSenderLanguages:(NSSet *)arg1 ;
-(NSSet *)captionsReceiverLanguages;
-(void)setCaptionsReceiverLanguages:(NSSet *)arg1 ;
-(unsigned)videoSSRC;
-(unsigned)audioSSRC;
@end

