/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, December 27, 2016 at 4:56:55 PM Japan Standard Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSUUID, NSPNetworkAgent;

@interface NPKey : NSObject {

	unsigned _session_counter;
	NSData* _info;
	NSUUID* _uuid;

}

@property (assign) unsigned session_counter;                     //@synthesize session_counter=_session_counter - In the implementation block
@property (retain) NSData * info;                                //@synthesize info=_info - In the implementation block
@property (retain) NSUUID * uuid;                                //@synthesize uuid=_uuid - In the implementation block
@property (readonly) NSPNetworkAgent * agentForKey; 
-(id)data;
-(id)initWithData:(id)arg1 ;
-(NSData *)info;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setInfo:(NSData *)arg1 ;
-(unsigned)session_counter;
-(void)setSession_counter:(unsigned)arg1 ;
-(NSPNetworkAgent *)agentForKey;
@end
