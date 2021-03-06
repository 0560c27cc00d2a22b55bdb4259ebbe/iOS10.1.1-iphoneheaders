/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:55:47 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber;

@interface HMDCameraNetworkConfig : NSObject <NSCopying> {

	SCD_Union_HM18 _ipv4SockAddress;
	SCD_Union_HM18 _ipv6SockAddress;
	BOOL _ipv6;
	NSString* _ipAddress;
	NSNumber* _rtpPort;

}

@property (nonatomic,retain) NSString * ipAddress;              //@synthesize ipAddress=_ipAddress - In the implementation block
@property (assign,nonatomic) BOOL ipv6;                         //@synthesize ipv6=_ipv6 - In the implementation block
@property (nonatomic,retain) NSNumber * rtpPort;                //@synthesize rtpPort=_rtpPort - In the implementation block
+(id)localIPAddress;
-(id)init;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)ipAddress;
-(NSNumber *)rtpPort;
-(id)initWithAddress:(id)arg1 ipv6:(BOOL)arg2 rtpPort:(id)arg3 ;
-(BOOL)ipv6;
-(void)setRtpPort:(NSNumber *)arg1 ;
-(void)setIpv6:(BOOL)arg1 ;
-(void)setIpAddress:(NSString *)arg1 ;
@end

