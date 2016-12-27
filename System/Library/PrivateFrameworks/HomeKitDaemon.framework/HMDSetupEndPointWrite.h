/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:44 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, HMDEndPointAddress, HMDSRTPParameters;

@interface HMDSetupEndPointWrite : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	NSUUID* _sessionID;
	HMDEndPointAddress* _address;
	HMDSRTPParameters* _videoSrtpParameters;
	HMDSRTPParameters* _audioSrtpParameters;

}

@property (nonatomic,copy,readonly) NSUUID * sessionID;                                   //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,copy,readonly) HMDEndPointAddress * address;                         //@synthesize address=_address - In the implementation block
@property (nonatomic,copy,readonly) HMDSRTPParameters * videoSrtpParameters;              //@synthesize videoSrtpParameters=_videoSrtpParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSRTPParameters * audioSrtpParameters;              //@synthesize audioSrtpParameters=_audioSrtpParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)sessionID;
-(HMDEndPointAddress *)address;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDSRTPParameters *)videoSrtpParameters;
-(HMDSRTPParameters *)audioSrtpParameters;
-(BOOL)_parseFromTLVDataImpl;
-(id)initWithSessionIdentifier:(id)arg1 address:(id)arg2 videoSrtpParameters:(id)arg3 audioSrtpParameters:(id)arg4 ;
-(BOOL)_parseFromTLVDataOnSuccess;
-(BOOL)_parseFromTLVDataOnFailure;
@end

