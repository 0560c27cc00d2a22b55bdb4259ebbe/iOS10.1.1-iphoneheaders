/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:12 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVCVideoStreamConfig : NSObject {

	long long _txCodecType;
	long long _rxCodecType;
	long long _videoResolution;
	unsigned long long _framerate;
	unsigned long long _txMaxBitrate;
	unsigned long long _txMinBitrate;
	unsigned long long _rxMaxBitrate;
	unsigned long long _rxMinBitrate;
	unsigned long long _keyFrameInterval;
	int _remoteVideoInitialOrientation;
	BOOL _enableCVO;
	unsigned long long _cvoExtensionID;
	BOOL _isVideoProtected;

}

@property (assign,nonatomic) long long txCodecType;                            //@synthesize txCodecType=_txCodecType - In the implementation block
@property (assign,nonatomic) long long rxCodecType;                            //@synthesize rxCodecType=_rxCodecType - In the implementation block
@property (assign,nonatomic) long long videoResolution;                        //@synthesize videoResolution=_videoResolution - In the implementation block
@property (assign,nonatomic) unsigned long long framerate;                     //@synthesize framerate=_framerate - In the implementation block
@property (assign,nonatomic) unsigned long long txMaxBitrate;                  //@synthesize txMaxBitrate=_txMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long txMinBitrate;                  //@synthesize txMinBitrate=_txMinBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMaxBitrate;                  //@synthesize rxMaxBitrate=_rxMaxBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long rxMinBitrate;                  //@synthesize rxMinBitrate=_rxMinBitrate - In the implementation block
@property (assign,nonatomic) unsigned long long keyFrameInterval;              //@synthesize keyFrameInterval=_keyFrameInterval - In the implementation block
@property (assign,nonatomic) int remoteVideoInitialOrientation;                //@synthesize remoteVideoInitialOrientation=_remoteVideoInitialOrientation - In the implementation block
@property (assign,nonatomic) BOOL enableCVO;                                   //@synthesize enableCVO=_enableCVO - In the implementation block
@property (assign,nonatomic) unsigned long long cvoExtensionID;                //@synthesize cvoExtensionID=_cvoExtensionID - In the implementation block
@property (assign,nonatomic) BOOL isVideoProtected;                            //@synthesize isVideoProtected=_isVideoProtected - In the implementation block
-(BOOL)isValid;
-(unsigned long long)txMaxBitrate;
-(unsigned long long)txMinBitrate;
-(unsigned long long)keyFrameInterval;
-(int)remoteVideoInitialOrientation;
-(BOOL)enableCVO;
-(unsigned long long)cvoExtensionID;
-(BOOL)isVideoProtected;
-(void)setTxMaxBitrate:(unsigned long long)arg1 ;
-(void)setTxMinBitrate:(unsigned long long)arg1 ;
-(void)setKeyFrameInterval:(unsigned long long)arg1 ;
-(void)setRemoteVideoInitialOrientation:(int)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 ;
-(void)setCvoExtensionID:(unsigned long long)arg1 ;
-(void)setIsVideoProtected:(BOOL)arg1 ;
-(unsigned long long)framerate;
-(long long)videoResolution;
-(void)setTxCodecType:(long long)arg1 ;
-(void)setRxCodecType:(long long)arg1 ;
-(void)setVideoResolution:(long long)arg1 ;
-(void)setFramerate:(unsigned long long)arg1 ;
-(void)setRxMaxBitrate:(unsigned long long)arg1 ;
-(void)setRxMinBitrate:(unsigned long long)arg1 ;
-(long long)txCodecType;
-(long long)rxCodecType;
-(unsigned long long)rxMaxBitrate;
-(unsigned long long)rxMinBitrate;
@end

