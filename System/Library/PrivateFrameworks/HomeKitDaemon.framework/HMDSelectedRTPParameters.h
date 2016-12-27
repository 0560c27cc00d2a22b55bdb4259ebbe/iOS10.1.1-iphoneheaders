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

@class NSNumber;

@interface HMDSelectedRTPParameters : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	NSNumber* _payloadType;
	NSNumber* _synchronizationSource;
	NSNumber* _maximumBitrate;
	NSNumber* _minimumBitrate;
	NSNumber* _rtcpInterval;
	NSNumber* _maxMTU;
	NSNumber* _comfortNoisePayloadType;

}

@property (nonatomic,copy,readonly) NSNumber * payloadType;                          //@synthesize payloadType=_payloadType - In the implementation block
@property (nonatomic,retain) NSNumber * synchronizationSource;                       //@synthesize synchronizationSource=_synchronizationSource - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * maximumBitrate;                       //@synthesize maximumBitrate=_maximumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * minimumBitrate;                       //@synthesize minimumBitrate=_minimumBitrate - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rtcpInterval;                         //@synthesize rtcpInterval=_rtcpInterval - In the implementation block
@property (nonatomic,copy) NSNumber * maxMTU;                                        //@synthesize maxMTU=_maxMTU - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * comfortNoisePayloadType;              //@synthesize comfortNoisePayloadType=_comfortNoisePayloadType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSNumber *)payloadType;
-(NSNumber *)synchronizationSource;
-(NSNumber *)minimumBitrate;
-(NSNumber *)rtcpInterval;
-(NSNumber *)maxMTU;
-(NSNumber *)comfortNoisePayloadType;
-(NSNumber *)maximumBitrate;
-(id)initWithPayloadType:(id)arg1 maximumBitrate:(id)arg2 minimumBitrate:(id)arg3 rtcpInterval:(id)arg4 maxMTU:(id)arg5 comfortNoisePayloadType:(id)arg6 ;
-(void)setSynchronizationSource:(NSNumber *)arg1 ;
-(void)setMaxMTU:(NSNumber *)arg1 ;
@end

