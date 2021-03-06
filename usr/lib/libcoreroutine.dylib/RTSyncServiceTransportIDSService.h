/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:43:04 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, RTSyncServiceTransportIDS, IDSService;

@interface RTSyncServiceTransportIDSService : NSObject {

	NSString* _serviceName;
	RTSyncServiceTransportIDS* _transport;
	IDSService* _idsService;
	long long _dataProtectionClass;

}

@property (nonatomic,copy) NSString * serviceName;                                      //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,nonatomic,__weak) RTSyncServiceTransportIDS * transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                   //@synthesize idsService=_idsService - In the implementation block
@property (assign,nonatomic) long long dataProtectionClass;                             //@synthesize dataProtectionClass=_dataProtectionClass - In the implementation block
-(void)dealloc;
-(BOOL)start;
-(IDSService *)idsService;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(RTSyncServiceTransportIDS *)transport;
-(void)setTransport:(RTSyncServiceTransportIDS *)arg1 ;
-(void)setIdsService:(IDSService *)arg1 ;
-(BOOL)ready;
-(BOOL)_checkNearbyDevices:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 transport:(id)arg2 ;
-(long long)dataProtectionClass;
-(void)setDataProtectionClass:(long long)arg1 ;
@end

